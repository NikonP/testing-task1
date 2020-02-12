#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "sqr_eq.h"
}

TEST(sqr_eq_sol, no_sol_1) {
    solution res = solve_eq(1, 1, 1);
    EXPECT_EQ(NO_SOL, res.sol_count);
}

TEST(sqr_eq_sol, one_sol) {
    solution res = solve_eq(1, 0, 0);
    EXPECT_EQ(ONE_SOL, res.sol_count);
    EXPECT_DOUBLE_EQ(0.0, res.x1);
}

TEST(sqr_eq_sol, two_sols) {
    solution res = solve_eq(1, 4, 0);
    EXPECT_EQ(TWO_SOL, res.sol_count);
    EXPECT_DOUBLE_EQ(-4.0, res.x1);
    EXPECT_DOUBLE_EQ(0.0, res.x2);
}
