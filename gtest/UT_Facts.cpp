/**
 * @file UT_Facts.cpp
 * @author Hamza Smida (HamzaSmida@yandex.com)
 * @brief unit test implementation for the Facts class
 * @version 0.1
 * @date 2021-09-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"gtest/gtest.h"
//define private as public to access private methods
#define private public
#include "Facts.h"

TEST(Facts,getFactDescription)
{
    Facts fact;
    EXPECT_EQ(fact.getFactDescription(),"");
}

TEST(Facts,getFact)
{
    Facts fact;
    fact.getFact();
}

TEST(Facts,setFactDescription)
{
    Facts fact;
    fact.setFactDescription("hi");
    EXPECT_EQ(fact.getFactDescription(),"hi");
}