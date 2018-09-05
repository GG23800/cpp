 
# Minimal version of cmake used to compile
cmake_minimum_required(VERSION 3.0)

# Declaration of the project
project (toto2)

# Compiler option
add_definitions (-g -std=c++11)

# Include directory for sources
include_directories(src)

# Define used directories first source, second destination
add_subdirectory(src)

# Notre exécutable
add_executable(toto2 main.cpp)
target_link_libraries(toto2 tutu tata)
