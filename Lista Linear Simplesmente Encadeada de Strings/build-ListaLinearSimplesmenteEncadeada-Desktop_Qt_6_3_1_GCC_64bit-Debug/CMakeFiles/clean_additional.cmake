# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ListaLinearSimplesmenteEncadeada_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ListaLinearSimplesmenteEncadeada_autogen.dir/ParseCache.txt"
  "ListaLinearSimplesmenteEncadeada_autogen"
  )
endif()
