#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjFish__sub_8033FF64(void* p);
void advance_offset__11TBoss4Type2FPv(void *arg0);

extern M2C_UNK lbl_80478560;
extern const f32 lbl_805DFB08;
extern const f32 lbl_805DFB0C;

void advance_offset__11TBoss4Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x58) + lbl_805DFB08);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x5C) + lbl_805DFB0C);
}

void TObjFish__sub_8033FF64(void* p) { *(s32*)((char*)p + 0x58) = 24576; *(s32*)((char*)p + 0x5c) = 0; }

}
