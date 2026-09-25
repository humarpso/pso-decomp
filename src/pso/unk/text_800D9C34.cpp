#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_fe09eb { char pad[0x18]; };

struct VObj_18_fe09eb : VBase_18_fe09eb {
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
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual M2C_UNK m63(M2C_UNK, void *);
};

struct RecoveredGlobal_800D9E8C_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Obj_800D9F4C { u8 pad[0x3b4]; s32 f3b4; };

extern "C" {
s32 TObjPlayer__sub_800DC420(void *, int);
f32 TObjPlayer__sub_800DC434(void *, int);
extern f32 lbl_805D525C;
extern f32 lbl_805D5260;
extern f32 lbl_805D5264;
extern f32 lbl_805D5268;
extern s32 lbl_805D526C;
extern s32 lbl_805D5270;
void TObjPlayer__sub_800D9E08(s32 arg0);
s32 render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 TObjPlayer__sub_803D97F0(u32);
s32 TObjPlayer__sub_803D9B78(void);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
extern RecoveredGlobal_800D9E8C_lbl_8058D490 lbl_8058D490;
void TObjPlayer__sub_800D9E8C(u8 *arg0);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void *get_player_data__10TObjPlayerFi(s32 i);
s32 is_valid_and_active__10TObjPlayerFUi(void *p);
void TObjPlayer__sub_800D9FC4(Obj_800D9F4C *self, void *p);
s32 TObjPlayer__sub_800D9F4C(Obj_800D9F4C *self);
}

extern "C" {

s32 TObjPlayer__sub_800D9C34(s32 arg0);
s32 TObjPlayer__sub_80016FF8();
M2C_UNK fn_800D9BBC(s32);

s32 TObjPlayer__sub_800D9C34(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        fn_800D9BBC(arg0);
        return 1;
    }
    return 0;
}
void TObjPlayer__sub_800D9E08(s32 arg0) {
    lbl_805D525C = TObjPlayer__sub_800DC434((void *) (arg0), (int) (1));
    lbl_805D5260 = TObjPlayer__sub_800DC434((void *) (arg0), (int) (2));
    lbl_805D5264 = TObjPlayer__sub_800DC434((void *) (arg0), (int) (3));
    lbl_805D5268 = TObjPlayer__sub_800DC434((void *) (arg0), (int) (4));
    lbl_805D526C = TObjPlayer__sub_800DC420((void *) (arg0), (int) (0));
    lbl_805D5270 = TObjPlayer__sub_800DC420((void *) (arg0), (int) (1));
}
typedef char RecoveredGlobal_800D9E8C_lbl_8058D490_size[sizeof(RecoveredGlobal_800D9E8C_lbl_8058D490) == 0x30 ? 1 : -1];
void TObjPlayer__sub_800D9E8C(u8 *arg0) {
    f32 temp_f1;
    TObjPlayer__sub_803D97F0((u32) &lbl_8058D490.value);
    TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0x404) + (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3E4))), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x68);
    TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (temp_f1), (f32) (temp_f1));
    render_anim_model__10TObjPlayerFPvf(arg0, M2C_FIELD(arg0, f32 *, 0xC0));
    TObjPlayer__sub_803D9B78();
    ((VObj_18_fe09eb *)(arg0))->m63(0x55, (u8 *)(arg0) + 0x39C);
    ((VObj_18_fe09eb *)(arg0))->m63(0x54, (u8 *)(arg0) + 0x3A8);
}
s32 TObjPlayer__sub_800D9F4C(Obj_800D9F4C *self) {
    s32 i;
    void *p;
    self->f3b4 = 0;
    for (i = 0; i < lbl_805D586C + lbl_805D5870; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (is_valid_and_active__10TObjPlayerFUi(p) != 0) {
            TObjPlayer__sub_800D9FC4(self, p);
        }
    }
    return self->f3b4;
}

}
