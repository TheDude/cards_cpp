add_library(deck src/deck.cpp)

target_include_directories(deck PUBLIC include)

if(BUILD_TESTING)
    find_package(GTest REQUIRED)

    add_executable(test_deck tests/test_deck.cpp)
    target_link_libraries(test_deck deck GTest::gtest_main)

    include(GoogleTest)
    gtest_discover_tests(test_deck)
endif()