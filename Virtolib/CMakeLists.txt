
option(ENABLE_MY_ASSERT "Turn on MY_ASSERT checks" ON)
if(ENABLE_MY_ASSERT)
  add_definitions(-DMY_DEBUG=1)
else()
  add_definitions(-DMY_DEBUG=0)
endif()

list(APPEND _sources ./src/VirtoHandler.cpp)
add_library(virto SHARED ${_sources})