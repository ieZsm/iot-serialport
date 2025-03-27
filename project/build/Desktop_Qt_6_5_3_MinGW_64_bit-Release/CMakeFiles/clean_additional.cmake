# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\IoTSerialPort_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\IoTSerialPort_autogen.dir\\ParseCache.txt"
  "IoTSerialPort_autogen"
  )
endif()
