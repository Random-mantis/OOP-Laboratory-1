#include <gtest/gtest.h>
#include "src/swap_ab.h"

TEST(SwapAB, ExamplesFromStatement) {
    EXPECT_EQ(swap_ab("acb"), "bca");
    EXPECT_EQ(swap_ab("aabacbaa"), "bbabcabb");
    EXPECT_EQ(swap_ab("abccba"), "baccab");
    EXPECT_EQ(swap_ab("ab"), "ba");
    EXPECT_EQ(swap_ab("ba"), "ab");
}

