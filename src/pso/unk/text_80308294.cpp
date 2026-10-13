#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef s32 M2C_UNK;
struct Base_8034EFDC { char pad[0x18]; };

struct VObj_8034EFDC : Base_8034EFDC {
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
    virtual void m63(s32, void *);
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
    virtual s16 m14();
};

struct RecoveredGlobal_8034F754_lbl_804F0A00 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

struct O_8034F590 { u8 pad[0x40]; u32 flags; u8 pad2[0x70 - 0x44]; void *f70; void *f74; };

struct Elem_80125628 { u8 pad[0x1c]; u8 f1c[0x2c - 0x1c]; };

struct Obj_80125628 { u8 pad[0xa4]; Elem_80125628 *elems; };

struct Ctx_80125628 { Obj_80125628 *obj; s32 idx; };

struct Self_8012573C { u8 pad[0x23c]; u32 f23c; };

struct Out_8012573C { u8 pad[0x40]; u32 f40; u8 pad44[0x50 - 0x44]; s32 f50; u8 pad54[0x70 - 0x54]; void *f70; void *f74; s32 f78; s32 f7c; };

struct P_8034F020 { u8 pad0[0x1F8]; s32 f1F8; };

typedef struct SlicerLaunchData_8012D9C8 {
    u16 player; u16 pad;
    void *textures; void *model; u32 weapon;
    s16 kind, stage; f32 multiplier; f32 color[4];
    s32 facing, spin; f32 first[3], second[3];
} SlicerLaunchData_8012D9C8;

struct Elem_8034F204 { u8 x[0x2C]; };

struct Tbl_8034F204 { u8 pad[0x1C]; Elem_8034F204 arr[1]; };

struct Info_8034F4FC {
    u8 pad0[0x10];
    s32 f10;
    u8 pad14[0x80 - 0x14];
};

extern "C" {
extern s32 tl_05;
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
M2C_UNK fill_status_info__10TObjPlayerFPvPv(u32, void *);
M2C_UNK construct_explosion_collider__10TObjPlayerFPv(void *, s32, void *);
void *__nw__7TObjectFUl(u32);
M2C_UNK create_fire_explosion_effect(void *, void *, s32, s32, f32);
M2C_UNK TObjPlayer__sub_802E449C(void *);
extern s32 tl_particle;
extern const f32 lbl_805DF0B8;
s32 spawn_fire_explosion_at(u32 a0, s32 a1);
}

extern "C" {

s32 spawn_fire_explosion_at(u32 a0, s32 a1) {
    Info_8034F4FC info;
    void *o;
    TObjPlayer__sub_802E449C(&info);
    fill_status_info__10TObjPlayerFPvPv(a0, &info);
    VecCopy__FP3VecPC3Vec(&info, a1);
    info.f10 = 0xA;
    o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        construct_explosion_collider__10TObjPlayerFPv(o, tl_05, &info);
    }
    o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        ((M2C_UNK (*)(f32, void *, void *, s32, s32))create_fire_explosion_effect)(lbl_805DF0B8, o, &info, 0, tl_particle);
    }
}
typedef char RecoveredGlobal_8034F754_lbl_804F0A00_size[sizeof(RecoveredGlobal_8034F754_lbl_804F0A00) == 0xF8 ? 1 : -1];
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

}
