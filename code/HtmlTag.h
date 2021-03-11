/********************************************************************************
  > FileName:	HtmlTag.h
  > Author:	Mingping Zhang
  > Email:	mingpingzhang@163.com
  > Create Time:	Wed Mar 10 17:16:39 2021
 ********************************************************************************/
#ifndef __HTMLTAG__H
#define __HTMLTAG__H

#include <vector>
#include <memory>

class HtmlTag
{
	public:
		HtmlTag();
		~HtmlTag();
	public:
		const std::vector<std::shared_ptr<HtmlTag>> tags()
		{ return tags_; }
		void addTag(const std::shared_ptr<HtmlTag>& tag)
		{ tags_.emplace_back(tag); }
	public:
		virtual std::string toString() = 0;
	private:
		std::vector<std::shared_ptr<HtmlTag>> tags_;
};

class HtmlRoot : public HtmlTag
{
	public:
		virtual std::string toString()override ;
};

class HtmlHead : public HtmlTag
{
	public:
		virtual std::string toString()override;
};

class HtmlTitle : public HtmlTag
{
	public:
		explicit HtmlTitle(const std::string& title)
			: title_(title)
		{

		}
	public:
		virtual std::string toString()override;
	private:
		std::string title_;
};

class HtmlBody : public HtmlTag
{
	public:
		virtual std::string toString()override;

};

class HtmlHeader : public HtmlTag
{
	public:
		HtmlHeader(int tag, const std::string& text)
			: tag_(tag)
			  , text_(text)
		{

		}
	public:
		virtual std::string toString()override;
	private:
		int tag_;
		std::string text_;

};

class HtmlUnorderedHead : public HtmlTag
{
	public:
		virtual std::string toString() override;
};

class HtmlListItem : public HtmlTag
{
	public:
	       HtmlListItem(const std::string& text)
		       :text_(text)
	       {}
	public:
	       virtual std::string toString() override;
	private:
	       std::string text_;

};

class HtmlOrderedHead : public HtmlTag
{
	public:
		virtual std::string toString() override;
};

class HtmlImage : public HtmlTag
{
	public:
		HtmlImage(const std::string& url, const std::string& alternative)
			: url_(url)
			  , alternative_(alternative)
		{}
		HtmlImage(const std::string& url)
			: url_(url)
		{}
	private:
		std::string url_;
		std::string alternative_;
	public:
		virtual std::string toString() override;
};

class HtmlLink : public HtmlTag
{
	public:
		explicit HtmlLink(const std::string& url, const std::string value)
			:url_(url)
			 , value_(value)
		{}
	private:
		std::string url_;
		std::string value_;
	public:
		virtual std::string toString()override;
};

class HtmlBold : public HtmlTag
{
	public:
		explicit HtmlBold(const std::string& text)
			: text_(text)
		{}

	public:
		virtual std::string toString()override;
	private:
		std::string text_;
};

class HtmlItallic : public HtmlTag
{
	public:
		explicit HtmlItallic(const std::string& text)
			: text_(text)
		{}
	public:
		virtual std::string toString()override;
	private:
		std::string text_;
};

class HtmlDeletion : public HtmlTag
{
	public:
		explicit HtmlDeletion(const std::string& text)
			: text_(text)
		{}
	public:
		virtual std::string toString()override;
	private:
		std::string text_;
};

class HtmlReference : public HtmlTag
{
	public:
		explicit HtmlReference(const std::string& text)
			:text_(text)
		{}
	private:
		std::string text_;
	public:
		std::string toString()override;
};

enum Align
{
	AlignCenter,
	AlignLeft,
	AlignRight,
};

class HtmlCell : public HtmlTag
{
	public:
		explicit HtmlCell(const std::string& text)
			: text_(text)
			  , align_(AlignCenter)
		{}
		HtmlCell(Align align, const std::string& text)
			: align_(align)
			  , text_(text)
		{}
	public:
		std::string toString()override;
	private:
		std::string text_;
		Align align_;
};

class HtmlRow : public HtmlTag
{
	public:
		virtual std::string toString()override;
};

class HtmlTableHeader : public HtmlTag
{
	public:
		HtmlTableHeader(const std::string& text)
			: text_(text)
		{}
	public:
		virtual std::string toString()override;
	private:
		std::string text_;
};

class HtmlTable: public HtmlTag
{
	public:
		virtual std::string toString()override;
};


#endif//__HTMLTAG__H
