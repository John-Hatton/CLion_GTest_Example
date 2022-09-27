#include "gtest/gtest.h"
#include "GTestExample.h"


TEST(GTestExample, Test_Not_BuhBaz_Output) {
    GTestExample gTest = GTestExample();

    EXPECT_NE("Buh Baz!", gTest.fooBar());}

TEST(GTestExample, Test_FooBar_Output) {
    GTestExample gTest = GTestExample();

    EXPECT_EQ("Foo Bar!", gTest.fooBar());
}