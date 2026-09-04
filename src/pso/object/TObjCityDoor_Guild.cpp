#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCityDoor_Guild__create(void *arg0);
void *dt__18TObjCityDoor_GuildFPvs(void *arg0, s16 arg1);
void *TObjCityDoor_Guild__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_80182D24(void *, int);

extern void *tl_05;

void *TObjCityDoor_Guild__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjCityDoor_Guild__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5AF0[];

void *dt__18TObjCityDoor_GuildFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5AF0;
        TObjPlayer__sub_80182D24(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80182600
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_80182600 { char pad[0x18]; };
struct VObj_80182600 : Base_80182600 {
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
};

extern "C" {

void TObjCityDoor_Guild__sub_80182600(void *arg0);

void TObjCityDoor_Guild__sub_80182600(void *arg0) {
    struct VObj_80182600 *o = (struct VObj_80182600 *)arg0;
    o->m19();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018274C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8018274C { char pad[0x18]; };
struct VObj_8018274C : Base_8018274C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual s32 m20();
};

extern "C" {

void render_door__18TObjCityDoor_GuildFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;

void render_door__18TObjCityDoor_GuildFPv(u8 *arg0) {
    if (((VObj_8018274C *)arg0)->m20() != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0xB8), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x54), M2C_FIELD(arg0, f32 *, 0xB4));
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#endif
