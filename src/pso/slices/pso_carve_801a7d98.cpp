#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_06;
void TObjMotion__ct(void *, void *);
extern M2C_UNK lbl_804C3248[];
extern const f32 lbl_805DC0D4;
extern const f32 lbl_805DC0D0;

void *fn_801A7D98(void *arg0) {
    TObjMotion__ct(arg0, tl_06);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3248;
    M2C_FIELD(arg0, u32 *, 0x134) = 0;
    M2C_FIELD(arg0, u32 *, 0x100) = 0;
    M2C_FIELD(arg0, u32 *, 0x138) = 0;
    M2C_FIELD(arg0, f32 *, 0x150) = lbl_805DC0D4;
    M2C_FIELD(arg0, u32 *, 0x154) = 0;
    M2C_FIELD(arg0, f32 *, 0x13C) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x140) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x144) = lbl_805DC0D0;
    M2C_FIELD(arg0, u32 *, 0x148) = 0;
    M2C_FIELD(arg0, u16 *, 0x14C) = 0;
    M2C_FIELD(arg0, u32 *, 0xFC) = 0;
    M2C_FIELD(arg0, f32 *, 0x104) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x108) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x10C) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x110) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x114) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x118) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x11C) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x120) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x124) = lbl_805DC0D4;
    M2C_FIELD(arg0, f32 *, 0x128) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x12C) = lbl_805DC0D0;
    M2C_FIELD(arg0, f32 *, 0x130) = lbl_805DC0D4;
    return arg0;
}

}
