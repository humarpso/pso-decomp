#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK check_and_read__16TKeyBoardControlFi(void *);
void TKeyBoardControl__sub_801A5EA0(u8 arg0);
}

extern "C" {

void reset_fields__10TObjPlayerFPv(void* p);

void reset_fields__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; *(s32*)((char*)p + 0x8) = 0; }

void TKeyBoardControl__sub_801A5EA0(u8 arg0) {
    check_and_read__16TKeyBoardControlFi((void *) (arg0));
}

}
