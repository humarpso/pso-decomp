#include "types.h"

extern "C" {

s32 TObjPlayer__sub_8001BF10();
void TObjPlayer__sub_801BFED4(void* p);
int TObjPlayer__sub_801BFF18(void* p);
int fn_8001BF40(void*);

void TObjPlayer__sub_801BFED4(void* p) { *(s32*)((char*)p + 0x4) = -1; }
s32 TObjPlayer__sub_801BFEE0(s32 arg0) {
    TObjPlayer__sub_8001BF10();
    TObjPlayer__sub_801BFF18((void*)(arg0));
    return arg0;
}
int TObjPlayer__sub_801BFF18(void* p) { return fn_8001BF40(p); }

}
