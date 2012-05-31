#*****************************************************************
# This file is part of the CMake build system for Journoob Project
# For the latest info, see https://github.com/brent-riztro
#*******************************************************************
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/src)

SET(COMMON_SOURCE
    ${INC_ROOT}/Common/Prerequisites.hpp
    ${SRC_ROOT}/Common/Shader.cpp
    ${INC_ROOT}/Common/Shader.hpp
    ${INC_ROOT}/Common/OpenGL.hpp
   )

SET(UNIQUE_SOURCE
    ${SRC_ROOT}/Unique/Main.cpp
   )

# Creates sub folder for the project, also called filters in Visual Studio
SOURCE_GROUP("Common" FILES ${COMMON_SOURCE})
SOURCE_GROUP("Unique" FILES ${UNIQUE_SOURCE})

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin/)
if(WIN32)
    SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_BINARY_DIR})
    SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_BINARY_DIR})
endif(WIN32)

add_executable(Triangle-Demo-1 ${COMMON_SOURCE} ${UNIQUE_SOURCE})

if(WIN32)
    target_link_libraries(Triangle-Demo-1 ${LIBS})
endif(WIN32)

if(NOT WIN32)
    target_link_libraries(Triangle-Demo-1 ${LIBS} Xrandr rt)
endif(NOT WIN32)

if(WIN32)
    file(COPY ${CMAKE_SOURCE_DIR}/res/ DESTINATION ${CMAKE_BINARY_DIR}/res/)
else()
    file(COPY ${CMAKE_SOURCE_DIR}/res/ DESTINATION ${CMAKE_BINARY_DIR}/bin/res/)
endif(WIN32)


