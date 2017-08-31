CMAKE_MINIMUM_REQUIRED( VERSION 2.8 )

PROJECT( MyServiceFunctions )

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMakeModules")

SET( PROJECT_VERSION_MAJOR 0 )
SET( PROJECT_VERSION_MINOR 1 )

INCLUDE_DIRECTORIES ( ${PROJECT_SOURCE_DIR}/include )
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/../MyServiceFunctions/)

SET( CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR} )
LIST ( APPEND CMAKE_CXX_FLAGS "-O3 -Wall -Wextra -Wshadow -ansi -Wno-long-long -Wuninitialized -fopenmp -flto -Weffc++ --std=c++11 -ggdb" )
LIST ( APPEND CMAKE_LD_FLAGS "-flto -O3 -ggdb" )

find_package ( ROOT REQUIRED )
include(${ROOT_USE_FILE})

ADD_SUBDIRECTORY ( ${PROJECT_SOURCE_DIR}/libTesting )

MESSAGE (STATUS "*** Build Type ${CMAKE_BUILD_TYPE} ***" )
MESSAGE (STATUS "*** Compiler Flags:  ${CMAKE_CXX_FLAGS}"  )
MESSAGE (STATUS "*** Compiler Flags:  ${CMAKE_CXX_FLAGS_DEBUG}"  )

ADD_LIBRARY( MyServiceFunctions SHARED src/serviceFunctions.cxx src/AtlasUtils.cxx )
