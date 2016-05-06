cmake_minimum_required(VERSION 3.5)
project(CPP_PRACTICE)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Contact.h Controller.cc Controller.h Main.cc Menu.h Owner.cc Owner.h PersonalContact.h PersonalContact.cc Contact.cc Menu.cc freelectwitcurl.cpp freelectwitcurl.h)
add_executable(CPP_PRACTICE ${SOURCE_FILES})