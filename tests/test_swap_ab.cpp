#include <gtest/gtest.h>
#include "src/swap_ab.h"

TEST(SwapAB, ExamplesFromStatement) {
    EXPECT_EQ(swap_ab("acb"), "bca");
    EXPECT_EQ(swap_ab("aabacbaa"), "bbabcabb");
}

TEST(SwapAB, OnlyCUnchanged) {
    EXPECT_EQ(swap_ab("c"), "c");
    EXPECT_EQ(swap_ab("ccc"), "ccc");
    EXPECT_EQ(swap_ab("abccba"), "baccab");
}

TEST(SwapAB, EmptyAndEdge) {
    EXPECT_EQ(swap_ab(""), "");
    EXPECT_EQ(swap_ab("a"), "b");
    EXPECT_EQ(swap_ab("b"), "a");
}

TEST(SwapAB, RobustOtherCharsRemain) {
    EXPECT_EQ(swap_ab("ab_c-"), "ba_c-");
}
