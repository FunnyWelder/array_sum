#include "gtest/gtest.h"
#include "lib.h"

TEST(array_sum, expectedOne){
    unsigned int n;
    int z;
    int *arr;
    int sum;
    n = 1;
    arr[0] = 1;
    sum = arr[0];
    z = (array_sum(n, arr));
    EXPECT_EQ(sum, z);
}

TEST(array_sum, expectedFive){
    unsigned int n;
    int z;
    int *arr;
    int sum;
    n = 5;
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    z = (array_sum(n, arr));
    sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    EXPECT_EQ(sum, z);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}