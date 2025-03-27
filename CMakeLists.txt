cmake_minimum_required(VERSION 3.30)
project(CSC120)
set(CMAKE_CXX_STANDARD 26)

# Create an executable for each .cpp file
file(GLOB CPP_FILES "*.cpp")
foreach(CPP_FILE ${CPP_FILES})
    get_filename_component(FILENAME ${CPP_FILE} NAME_WE)
    add_executable(${FILENAME} ${CPP_FILE})
    set_target_properties(${FILENAME} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/Executables")
endforeach()