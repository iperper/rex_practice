cmake_minimum_required(VERSION 2.8)
project (Localized_Stoplight_Dectection)
find_package( OpenCV REQUIRED)
find_package( Eigen3 3.3 REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable(localized_object_detection main.cpp localizeObjects.cpp )
target_link_libraries( localized_object_detection ${OpenCV_LIBS} Eigen3::Eigen )
add_executable(matrix_test matrix_test.cpp)
target_link_libraries(matrix_test Eigen3::Eigen)
