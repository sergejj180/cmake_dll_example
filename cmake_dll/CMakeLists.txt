# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)
#project ("cmake_dll")
set (CMAKE_CXX_STANDARD 14)
include_directories (${CMAKE_SOURCE_DIR}/includes)
add_library (cmake_dll SHARED "MathFuncsDll.cpp" )

#target_include_directories (cmake_dll PUBLIC ${CMAKE_SOURCE_DIR}/includes)
#target_link_libraries(cmake_dll PUBLIC "MathFuncsDll.h")