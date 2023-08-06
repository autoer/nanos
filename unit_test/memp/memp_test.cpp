//
// Created by Shuo Hou on 2023/8/5.
//
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "ns_memp.h"

TEST_GROUP(memp) {
    void setup(void)
    {

    }

    void teardown(void )
    {
    }
};

TEST(memp, memp_init)
{
    CHECK_EQUAL(0, 0);
}