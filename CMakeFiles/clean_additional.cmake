# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\asr-post-editor_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\asr-post-editor_autogen.dir\\ParseCache.txt"
  "asr-post-editor_autogen"
  )
endif()
