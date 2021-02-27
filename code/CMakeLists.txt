cmake_minimum_required(VERSION 2.8)
project(markdown-parser)
set(sources 
	main.cpp
	Translator.cpp
	HtmlObject.cpp
	HtmlBuilder.cpp
	)
add_executable(${PROJECT_NAME} ${sources})
