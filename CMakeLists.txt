# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("cmake_app")

# Включите подпроекты.
add_subdirectory ("cmake_dll")

add_subdirectory ("cmake_app")