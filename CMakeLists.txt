#******************************************************************
# This file is part of the CMake build system for Journoob Project
# For the latest info, see https://github.com/brent-riztro
#*******************************************************************
CMAKE_MINIMUM_REQUIRED (VERSION 2.8)
PROJECT(Triangle-Demo)
SET (Triangle_VERSION_MAJOR 1)
SET (Triangle_VERSION_MINOR 0)

file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/res/)

# SET resource directory
SET (RESOURCE_DIR ${CMAKE_BINARY_DIR}/res/)

SET (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/")

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(GLFW REQUIRED)

set(LIBS ${LIBS} ${OPENGL_LIBRARIES} ${GLFW_LIBRARIES} ${GLEW_LIBRARY} )

include_directories(${GLEW_INCLUDE_PATH})
include_directories(${OPENGL_INCLUDE_DIR})
include_directories(${GLFW_INCLUDE_DIR})


# Add TRIANGLE header path
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/include)
SET(SRC_ROOT ${CMAKE_SOURCE_DIR}/src/)
SET(INC_ROOT ${CMAKE_SOURCE_DIR}/include/)

   IF(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
SET(MAC_OS_X 1)
   ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")

CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/cmake/BuildSettings.hpp.cmake ${CMAKE_SOURCE_DIR}/include/BuildSettings.hpp)

ADD_SUBDIRECTORY(src/)
