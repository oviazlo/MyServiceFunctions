ADD_EXECUTABLE ( testLib testLib.cxx )

TARGET_LINK_LIBRARIES (testLib ${ROOT_LIBRARIES} MyServiceFunctions)
