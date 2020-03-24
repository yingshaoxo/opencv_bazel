#include "gtest/gtest.h"
#include "lib/hello-lib.h"

TEST(HelloLib, Add) {
    EXPECT_EQ(add(1,2), 3);
}
