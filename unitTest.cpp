#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <initializer_list>
#include <gtest/gtest.h>

#include "static_vector.h"

// Include your static_vector implementation here

// Define a test fixture
class StaticVectorTest : public ::testing::Test {
protected:
    // Helper function to create a static_vector with elements
    StaticVectorTest() {
        // Initialize sv with some elements
        sv.push_back(1);
        sv.push_back(2);
        sv.push_back(3);
    }

    static_vector<int, 5> sv;
};

// Test constructor and size function
TEST_F(StaticVectorTest, ConstructorAndSize) {
    EXPECT_EQ(sv.size(), 3);
}

// Test push_back and size function
TEST_F(StaticVectorTest, PushBackAndSize) {
    sv.push_back(4);
    EXPECT_EQ(sv.size(), 4);
}

// Test pop_back and size function
TEST_F(StaticVectorTest, PopBackAndSize) {
    sv.pop_back();
    EXPECT_EQ(sv.size(), 2);
}

// Test operator[] and access function
TEST_F(StaticVectorTest, OperatorAndAccess) {
    EXPECT_EQ(sv[0], 1);
    EXPECT_EQ(sv[1], 2);
    EXPECT_EQ(sv[2], 3);
}

// Test clear and empty function
TEST_F(StaticVectorTest, ClearAndEmpty) {
    sv.clear();
    EXPECT_TRUE(sv.empty());
}

// Test move constructor
TEST(StaticVectorMoveTest, MoveConstructor) {
    static_vector<int, 5> sv1 = {1, 2, 3};
    static_vector<int, 5> sv2 = std::move(sv1);

    EXPECT_EQ(sv2.size(), 3);
    EXPECT_THROW(sv1[0], std::out_of_range);
}

// Test move assignment
TEST(StaticVectorMoveTest, MoveAssignment) {
    static_vector<int, 5> sv1 = {1, 2, 3};
    static_vector<int, 5> sv2 = {4, 5};
    sv1 = std::move(sv2);

    EXPECT_EQ(sv1.size(), 2);
    EXPECT_THROW(sv2[0], std::out_of_range);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
