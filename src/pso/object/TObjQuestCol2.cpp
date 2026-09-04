#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjQuestCol2__ct(void *arg0);
s32 TObjQuestCol2__vt13(void *arg0);
M2C_UNK TObjQuestColBase__ct();
s32 update_trigger_state__12TObjQuestColFPvf(f32);

s32 TObjQuestCol2__vt13(void *arg0) {
    return (u32)__cntlzw(1 - update_trigger_state__12TObjQuestColFPvf(M2C_FIELD(arg0, f32 *, 0xAC))) >> 5;
}

extern M2C_UNK __vt__13TObjQuestCol2[];
extern s32 lbl_805D340C;
extern s32 lbl_805D5EE8;
extern s32 lbl_805D5EEC;

void *TObjQuestCol2__ct(void *arg0) {
    s32 temp_r0;

    TObjQuestColBase__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjQuestCol2;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D340C;
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC0) < 0) {
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC0) > 1) {
        M2C_FIELD(arg0, s32 *, 0xC0) = 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xBC) = (s32) lbl_805D5EE8;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xBC) = (s32) lbl_805D5EEC;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0xBC) = 0;
        break;
    }
    return arg0;
}

}
