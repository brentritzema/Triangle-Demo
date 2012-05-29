#******************************************************************
# This file is part of the CMake build system for Journoob Project  
# For the latest info, see https://github.com/brent-riztro
#*******************************************************************
CMAKE_MINIMUM_REQUIRED (VERSION 2.8)
PROJECT(Triangle-Demo)
SET (Triangle_VERSION_MAJOR 1)
SET (Triangle_VERSION_MINOR 0)

# Add TRIANGLE header path
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/include)
SET(SRC_ROOT ${CMAKE_SOURCE_DIR}/src/Triangle-Demo-1)
SET(INC_ROOT ${CMAKE_SOURCE_DIR}/include/Triangle-Demo-1)

   IF(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
SET(MAC_OS_X 1)
   ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")

CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/cmake/BuildSettings.hpp.cmake ${CMAKE_SOURCE_DIR}/include/Triangle-Demo-1/BuildSettings.hpp)

ADD_SUBDIRECTORY(src/Triangle-Demo-1)
