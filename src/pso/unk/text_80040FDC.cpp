#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_345191 { char pad[0x18]; };

struct VObj_18_345191 : VBase_18_345191 {
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
    virtual M2C_UNK m57();
};

extern "C" {
M2C_UNK advance_animation_playback(int);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK play_sound_effect(int, void *, int, int, int);
void fn_80040FDC(u8 *arg0);
}

extern "C" {

void fn_80040FDC(u8 *arg0) {
    u8 *p;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) |= 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((void (*)(u8 *))advance_animation_playback)(arg0);
        M2C_FIELD(arg0, f32 *, 0x3C) = 80.0f;
        M2C_FIELD(arg0, s32 *, 0x30) |= 0x40000;
        p = M2C_FIELD(arg0, u8 **, 0xA4);
        M2C_FIELD(p, s32 *, 0x18) |= 4;
        p = M2C_FIELD(arg0, u8 **, 0xA4);
        M2C_FIELD(p, s32 *, 0x18) &= ~2;
        ((void (*)(int, void *, int, int))play_sound_effect)(0x4003A306, arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x3C) -= 0.5f;
        if (M2C_FIELD(arg0, f32 *, 0x3C) <= 50.0f) {
            M2C_FIELD(arg0, f32 *, 0x3C) = 50.0f;
            M2C_FIELD(arg0, s32 *, 0x388) &= ~1;
            M2C_FIELD(arg0, s32 *, 0x30) &= ~0x40000;
            ((VObj_18_345191 *)(arg0))->m57();
        }
        break;
    }
    refresh_collision_body_centers((void *) (arg0));
}

}
