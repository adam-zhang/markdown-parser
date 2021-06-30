cmake_minimum_required(VERSION 3.0)
project(markdown-parser)
set(CMAKE_BUILD_TYPE Debug)
set(sources 
	main.cpp
	CommandLineParser.cpp
	Translator.cpp
	Logger.cpp
	HtmlBuilder.cpp
	Tag.cpp
	)
add_executable(${PROJECT_NAME} ${sources})
