#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjEneEpsilon__sub_800B96A4(void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TObjEneRecon__sub_8031DE88(u8 *arg0, s32 arg1);
}

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneRecon__vt60(void* p);
void TObjEneRecon__vt59(void);
void TObjEneRecon__vt26(void);

#pragma push
#pragma fp_contract on
void TObjEneRecon__sub_8031DE88(u8 *arg0, s32 arg1) {
    TObjEneEpsilon__sub_800B96A4(arg0);
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) ((M2C_FIELD(arg0, f32 *, 0x468) * TBoss8Dragon__sub_803D64C0(arg1)) + M2C_FIELD(arg0, f32 *, 0x394));
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x460);
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x468) * TBoss8Dragon__sub_803D64DC(arg1)) + M2C_FIELD(arg0, f32 *, 0x39C));
}
#pragma pop

}
