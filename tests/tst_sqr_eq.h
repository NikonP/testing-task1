#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "sqr_eq_copy.h"
}

TEST(test1, suite1) {
    EXPECT_EQ(1, 1);
}
