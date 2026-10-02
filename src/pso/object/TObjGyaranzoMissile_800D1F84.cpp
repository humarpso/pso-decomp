#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_Sub_800D1F84 { char pad[0x14]; };
struct V_Sub_800D1F84 : Base_Sub_800D1F84 {
    PADV4
    PADV
    virtual s32 m5();
};

extern "C" {
f32 TObjGyaranzoMissile__sub_800D40EC(s32);
extern f32 lbl_805D51F0;
extern f32 TObjGyaranzoMissile__data_805D51F4;
extern f32 lbl_805D51F8;
void TObjGyaranzoMissile__sub_800D1F84(u8 *arg0);
}

extern "C" {

void copy_from__19TObjGyaranzoMissileFPvPv(void* p, void* q);
void update__19TObjGyaranzoMissileFPv(u8 *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK TBoss3Volopt__sub_800D8D88(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK, s32);

void TObjGyaranzoMissile__sub_800D1F84(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) = TObjGyaranzoMissile__sub_800D40EC(1);
    lbl_805D51F0 = TObjGyaranzoMissile__sub_800D40EC(2);
    TObjGyaranzoMissile__data_805D51F4 = TObjGyaranzoMissile__sub_800D40EC(3);
    lbl_805D51F8 = TObjGyaranzoMissile__sub_800D40EC(4);
}

void update__19TObjGyaranzoMissileFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TBoss3Volopt__sub_800D8D88(arg0 + 0x2FC, temp_r4);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3D0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if (((V_Sub_800D1F84 *) (arg0 + 0x3D0))->m5() == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        return;
    case -1:
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0, temp_r5);
        break;
    }
}

void copy_from__19TObjGyaranzoMissileFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

}
