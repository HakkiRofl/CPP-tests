cmake_minimum_required(VERSION 4.0)
project(CPP_TESTS VERSION 0.2.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Укажите каталоги с исходниками и заголовочными файлами
# set(SRC_DIR ${PROJECT_SOURCE_DIR}/src)
# set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

# Добавьте исполняемый файл
# add_executable(my_app ${SRC_DIR}/main.cpp)

add_subdirectory(src/scopes)
add_subdirectory(src/struct)

# Укажите пути к заголовочным файлам
# target_include_directories(my_app PRIVATE ${INCLUDE_DIR})

# Здесь можно добавить другие подпроекты или подключить сторонние библиотеки
# add_subdirectory(src)
# find_package(Qt5 REQUIRED COMPONENTS Widgets)
# target_link_libraries(my_app PRIVATE Qt5::Widgets)