﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_8.1char/LAB_8.1char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCountFunction)
        {
            const char* str = "++-+-+-=-";
            int expected_count = 9;
            Assert::AreEqual(expected_count, Count(str));
        }

        TEST_METHOD(TestChangeFunction)
        {
            const char* str = "++-+-+-=-";
            char* result = Change(str);
            const char* expected_result = "******************";
            Assert::AreEqual(expected_result, result);
            delete[] result; 
        }
    };
}
