cmake_minimum_required(VERSION 3.10)
project(EZLanguage)

set(CMAKE_CXX_STANDARD 17)

# Manually specify ANTLR runtime include and library paths
include_directories(/usr/local/include/antlr4-runtime)
link_directories(/usr/local/lib)

	# Explicitly list ANTLR-generated sources to avoid GLOB issues
	set(GENERATED_SRC
		generated/EZLanguageBaseListener.cpp
		generated/EZLanguageLexer.cpp
		generated/EZLanguageListener.cpp
		generated/EZLanguageParser.cpp
	)

	file(GLOB SRC_FILES "src/*.cpp")

	add_executable(ez_main ${SRC_FILES} ${GENERATED_SRC})
target_link_libraries(ez_main antlr4-runtime)