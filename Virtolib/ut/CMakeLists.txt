set(BINARY ${CMAKE_PROJECT_NAME}-ut)



file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)


add_executable(${BINARY} ${TEST_SOURCES})


target_link_libraries(${BINARY} PUBLIC virto gtest)

add_custom_command(
     TARGET ${BINARY}
     COMMENT "Run tests"
     POST_BUILD 
     COMMAND ${BINARY}
)
	