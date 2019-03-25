#include <gtest/gtest.h>
#include "../HelloWorld.c"

TEST_F() {
 EXPECT_EQ(2, add(1, 1));
 EXPECT_EQ(-3, add(1, -4));
 }
