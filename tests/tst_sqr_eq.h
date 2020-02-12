#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "sqr_eq.h"
}

TEST(test1, suite1)
{
    double res[3] = *solve_eq(1, 1, 1);
    EXPECT_EQ(res[2], NO_SOL);
}

TEST(test2, suite2)
{
    double res[3] = *solve_eq(1, 0, 0);
    EXPECT_EQ(res[2], ONE_SOL);
    EXPECT_EQ(res[0], 0);
}

TEST(test3, suite3)
{
    double res[3] = *solve_eq(1, 4, 0);
    EXPECT_EQ(res[2], TWO_SOL);
    EXPECT_EQ(res[0], -4);
    EXPECT_EQ(res[1], 0);
}
