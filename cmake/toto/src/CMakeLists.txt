 
# Minimal version of cmake used to compile
cmake_minimum_required(VERSION 3.0)

# Declaration of the project
project (liblink)

# Compiler option
add_definitions (-g -std=c++11)

# Include directory for sources
#include_directories(src)

# Define used directories first source, second destination
#add_subdirectory(src)

# Add librairies
add_library(toto toto.cpp toto.hpp)
add_library(tutu tutu.cpp tutu.hpp)
target_link_libraries(tutu toto)
add_library(tata tata.cpp tata.hpp)
