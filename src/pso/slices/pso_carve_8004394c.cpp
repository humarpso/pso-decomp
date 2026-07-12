#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VObjBase {
    char pad[0x18];
};

struct VObj : VObjBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
};

extern "C" {

s32 TBoss3Volopt__sub_8003F398();
M2C_UNK fn_8003F4C0(M2C_UNK);
M2C_UNK fn_8003F6B4(u16, M2C_UNK);
M2C_UNK fn_80042F84(void *);
s32 fn_80042FCC();
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern s32 lbl_805D4C28;

void fn_8004394C(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFDFF);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0) {
            lbl_805D4C28 = 1;
            fn_8003F6B4(M2C_FIELD(arg0, u16 *, 0x2D4), 0);
            fn_8003F4C0(0x12C);
        }
        if (TBoss3Volopt__sub_8003F398() != 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x388);
            if (temp_r3 & 0x10000) {
                M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3 & 0xFFFFFFFE);
                M2C_FIELD(arg0, s32 *, 0x374) = 2;
                M2C_FIELD(arg0, s16 *, 0x326) = 2;
                M2C_FIELD(arg0, s32 *, 0x37C) = (s32) M2C_FIELD(arg0, s32 *, 0x3A4);
            } else if (temp_r3 & 0x20000) {
                M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3 & 0xFFFFFFFE);
                fn_80042F84(arg0);
            } else {
                TBoss3Volopt__sub_8022675C(0x4003A810, arg0 + 0x38, 0xA, 0);
                M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            }
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 3;
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        case 1:
            TBoss1Dragon__sub_80143504(arg0);
            if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
                temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x388);
                if (temp_r3_2 & 0x10000) {
                    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3_2 & 0xFFFFFFFE);
                    ((VObj*)arg0)->m58();
                } else if (temp_r3_2 & 0x20000) {
                    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3_2 & 0xFFFFFFFE);
                    fn_80042F84(arg0);
                } else {
                    TBoss3Volopt__sub_8022675C(0x4003A810, arg0 + 0x38, 0xA, 0);
                    M2C_FIELD(arg0, s32 *, 0x37C) = 2;
                }
            }
        }
        break;
    case 2:
        if (fn_80042FCC() == 1) {
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            ((VObj*)arg0)->m56();
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        break;
    }
    TObjPlayer__sub_801B4A18(arg0, -1);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

}
