# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/recursividade_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/recursividade_autogen.dir/ParseCache.txt"
  "recursividade_autogen"
  )
endif()
