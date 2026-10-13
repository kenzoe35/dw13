#include <gtest/gtest.h>
#include "dw.h"

TEST(ComputeAverage, HandlesEvenlyDivisibleValues) {
    int values[] = {2, 4, 6, 8};
    EXPECT_DOUBLE_EQ(compute_average(values, 4), 5.0);
}

TEST(ComputeAverage, HandlesRemainderProducingFraction) {
    int values[] = {1, 2, 4};
    EXPECT_DOUBLE_EQ(compute_average(values, 3), 7.0 / 3.0);
}

TEST(ComputeAverage, HandlesSingleValue) {
    int values[] = {9};
    EXPECT_DOUBLE_EQ(compute_average(values, 1), 9.0);
}
