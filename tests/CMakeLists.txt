project(Google_tests)

# adding the Google_Tests_run target
add_executable(google_tests GTest_Example.cpp)

# linking Google_Tests_run with DateConverter_lib which will be tested
target_link_libraries(google_tests ${CMAKE_PROJECT_NAME}_lib)

target_link_libraries(google_tests gtest gtest_main)