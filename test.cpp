/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */
#include <gtest/gtest.h>
#include "MyStack.h"


TEST(StackTest, testPop){
    MyStack st;
    st.push(9);
    EXPECT_EQ(9, st.top());
}
