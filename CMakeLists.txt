cmake_minimum_required(VERSION 3.30)
project(CSC120)
set(CMAKE_CXX_STANDARD 26)

# Specify the output directory for executables
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

# Create an executable for each .cpp file
file(GLOB CPP_FILES "*.cpp")
foreach(CPP_FILE ${CPP_FILES})
    get_filename_component(FILENAME ${CPP_FILE} NAME_WE)
    add_executable(${FILENAME} ${CPP_FILE}
            Dhillon_Topic5_Lab2.cpp)
    set_target_properties(${FILENAME} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${EXECUTABLE_OUTPUT_PATH})
endforeach()
