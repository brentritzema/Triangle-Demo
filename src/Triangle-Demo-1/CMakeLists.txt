#*****************************************************************
# This file is part of the CMake build system for Journoob Project  
# For the latest info, see https://github.com/brent-riztro
#*******************************************************************
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/src)

SET(COMMON_SOURCE
      ${SRC_ROOT}/Common/Shader.cpp
      ${INC_ROOT}/Common/Shader.hpp
      ${INC_ROOT}/Graphics/OpenGL.h
   )

SET(UNIQUE_SOURCE
      ${SRC_ROOT}/Unique/FileMgr.cpp
   )

# Creates sub folder for the project, also called filters in Visual Studio
   SOURCE_GROUP("Common" FILES ${COMMON_SOURCE})
   SOURCE_GROUP("Unique" FILES ${Unique_SOURCE})
