// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "gtest.h"


int _tmain(int argc, _TCHAR* argv[])
{
    printf("Running main() from gtest_main.cc\n");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

