#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8018A0B4 { char pad[0x18]; };
struct VObj_8018A0B4 : Base_8018A0B4 {
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
    virtual void m20(s32, f32);
};

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual M2C_UNK m78();
};

struct SubBase_80189F24 { u8 pad[0x14]; };

struct Sub_80189F24 : SubBase_80189F24 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    u8 pad[0x24 - 0x18];
};

struct VBase_80189F24 { u8 pad[0x18]; };

struct Obj_80189F24 : VBase_80189F24 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    u8 pad1c[0x38 - 0x1C];
    f32 pos[3];
    u8 pad44[0x334 - 0x44];
    f32 x334;
    f32 x338;
    u8 pad33c[0x340 - 0x33C];
    Sub_80189F24 sub;
    s32 x364;
};

extern "C" {
M2C_UNK fn_80156CA0(void *);
void TObjPlayer__sub_80189FEC(u8 *arg0);
f32 xyz_distance_squared(void *, void *);
s32 TObjPlayer__sub_8018A10C(u8 *arg0, s32 arg1);
M2C_UNK TObjPlayer__sub_80154954(void *, void *);
s32 TLobby__sub_80156A80(void *, void *, int);
extern f32 lbl_805DBCF4;
f32 receive_physical_hit__17TObjContainerBaseFPv(u8 *arg0);
s32 fn_80156BBC(void *, void *);
s32 fn_80156C38(void *);
void render__17TObjContainerBaseFPv(Obj_80189F24 *self);
}

extern "C" {

f32 receive_technique_hit__17TObjContainerBaseFPviPv(void *arg0, s32 arg1, s32 *arg2);

extern f32 lbl_805DBCF0;
extern f32 lbl_805DBCF4;

void render__17TObjContainerBaseFPv(Obj_80189F24 *self) {
    if (self->m8(self->x334, self->x338) != 1) {
        return;
    }
    self->x364 = 1;
    if (fn_80156BBC(&self->sub, self->pos) != 1) {
        return;
    }
    if (fn_80156C38(&self->sub) == 1) {
        self->sub.m6();
        self->m79();
        self->sub.m7();
    } else {
        self->m79();
    }
}

void TObjPlayer__sub_80189FEC(u8 *arg0) {
    fn_80156CA0((void *) (arg0 + 0x340));
    ((VObj_18 *)(arg0))->m78();
    M2C_FIELD(arg0, s32 *, 0x364) = 0;
}

f32 receive_physical_hit__17TObjContainerBaseFPv(u8 *arg0) {
    s16 sp8;
    if (((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U) && ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (1)) != 0)) {
        sp8 = 1;
        TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (0));
        TObjPlayer__sub_80154954((void *) (arg0), (void *) (&sp8));
    }
    return (*(const f32 *)&lbl_805DBCF4);
}

f32 receive_technique_hit__17TObjContainerBaseFPviPv(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r4;
    struct VObj_8018A0B4 *o = (struct VObj_8018A0B4 *)arg0;

    temp_r4 = *arg2;
    if ((temp_r4 == 0) || ((u32) (temp_r4 - 1) <= 3U) || (temp_r4 == 0x13)) {
        o->m20(0, lbl_805DBCF0);
    }
    return lbl_805DBCF4;
}
s32 TObjPlayer__sub_8018A10C(u8 *arg0, s32 arg1) {
    return xyz_distance_squared((void *) (arg1 + 0x38), (void *) (arg0 + 0x38)) < M2C_FIELD(arg0, f32 *, 0x33C);
}

}
