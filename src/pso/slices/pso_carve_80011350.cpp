#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_800113A8(u8 *arg0, s16 *arg1);
s32 TObjPlayer__sub_800113A8(u8 *arg0, s16 *arg1);
void TObjPlayer__sub_800113E4(u8 *arg0, s16 arg1);
}

extern "C" {

s32 obj_isState2_324();
s32 TObjPlayer__sub_8001119C(void* p);

int TObjPlayer__sub_80011350(void) { return 0; }
int TObjPlayer__sub_80011378(void) { return 0; }

s32 TObjPlayer__sub_800113A8(u8 *arg0, s16 *arg1) {
    s16 temp_r0;
    s16 temp_r5;
    temp_r5 = *arg1;
    if (temp_r5 < 0) {
        *arg1 = 0;
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x2B8);
    if (temp_r5 > temp_r0) {
        *arg1 = temp_r0;
        return 0;
    }
    return 1;
}

void TObjPlayer__sub_800113E4(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x32C) = arg1;
    TObjPlayer__sub_800113A8((u8 *)(arg0), (s16 *)(arg0 + 0x32C));
}

int TItemProShield__sub_8001140C(void) { return 0; }
int TObjectV8047c128_subtract_hp(void* a0 = 0, void* a1 = 0) { return 0; }

}
