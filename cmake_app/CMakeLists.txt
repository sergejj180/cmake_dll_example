# CMakeList.txt: файл проекта CMake верхнего уровня; 
# проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)
# project ("cmake_app")
set (CMAKE_CXX_STANDARD 14)

include_directories (${CMAKE_SOURCE_DIR}/includes)

add_executable (app "MuExecRefsDll.cpp" )

target_include_directories (app PUBLIC ${CMAKE_SOURCE_DIR}/includes )

# примерный шаблон для линковки, не проверено
target_link_directories(app PUBLIC ${CMAKE_SOURCE_DIR}/cmake_dll)
#target_link_libraries (app PUBLIC "MathFuncsDll.h")

# команда для выполнения самой линковки, не проверенно
target_link_libraries(app PUBLIC libcmake_dll)

# шаблон команд для линковки dll найденный в интернете
#target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/path_to_include_dir)
#target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/path_to_link_dir)
#target_link_libraries(${PROJECT_NAME} PUBLIC libname)