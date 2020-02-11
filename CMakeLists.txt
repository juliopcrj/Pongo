cmake_minimum_required(VERSION 3.10)
project(Pongo)

set(CMAKE_CXX_STANDARD 14)

# Including the SFML libraries. 
set(SFML_INCLUDE_DIR "/home/jio/.local/include/sfml/include")
set(SFML_LIBRARY_DIR "/home/jio/.local/include/sfml/lib")
set(SFML_DIR "/home/jio/.local/include/sfml/lib/cmake/SFML")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML COMPONENTS system window graphics network audio)

if(SFML_FOUND)
	message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
	message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
	message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()
# enf of including SFML libraries

# Sources

include_directories(include)

set(SOURCES
	src/main.cpp
	)

set(HEADERS
	)

add_executable(Pongo ${SOURCES} ${HEADERS})
target_link_libraries(Pongo sfml-graphics sfml-window sfml-system)

