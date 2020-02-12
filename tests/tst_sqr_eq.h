#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "sqr_eq_copy.h"
}

TEST(sqr_eq_sol, no_sol) {
    double res = *solve_eq(2, 2, 10);
    EXPECT_EQ(res[2], NO_SOL);
}
