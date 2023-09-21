/*
 * BaseType.cpp
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#include "base/BaseType.h"
#include <random>

WORD32 randU32()
{
    std::uniform_int_distribution<WORD32> distribution(0, INVALID_WORD32);
    std::random_device rd;
    std::mt19937 engine(rd());
    return distribution(engine);
}
