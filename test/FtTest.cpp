#include <stdio.h>
#include <stdlib.h>
#include <gtest/gtest.h>
#include "base/BaseType.h"
#include "base/Role.h"
#include "base/interface_def.h"
#include "base/Unknown.h"

struct FtTest : testing::Test
{
};

TEST_F(FtTest,should_gtest_ok)
{
    printf("gtest ok!\n");
}
