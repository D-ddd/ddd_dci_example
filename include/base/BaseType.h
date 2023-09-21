/*
 * BaseType.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H5378ABEE_7C93_4F54_B5F0_6D110E1C67C5
#define H5378ABEE_7C93_4F54_B5F0_6D110E1C67C5

#include <string>
#include <vector>

using namespace std;

typedef unsigned int WORD32;
constexpr WORD32 INVALID_WORD32 = (WORD32)0xFFFFFFFF;
typedef unsigned char BYTE;
typedef BYTE U8;
typedef unsigned short WORD16;
typedef WORD16 U16;
typedef WORD32 U32;


extern WORD32 randU32();


#endif /* H5378ABEE_7C93_4F54_B5F0_6D110E1C67C5 */
