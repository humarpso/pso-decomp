#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8023B17C___vt__9TTecSifta {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct Obj_8023ACA8 { u8 pad[0xA6]; s16 state; };

struct VBase_18_b27ba1 { char pad[0x18]; };

struct HitInfo_8023AE8C { s32 type; f32 power; };

struct VObj_18_b27ba1 : VBase_18_b27ba1 {
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
    virtual void m21(void *, HitInfo_8023AE8C *, void *, s32, s32);
};

struct Obj_8023AE8C { u8 pad[0x1C]; u8 *source; u8 pad20[0x74 - 0x20]; f32 power; };

extern "C" {
s32 obj_getField1c(int);
s32 TObjPlayer__sub_8004433C(void *);
s32 TTecPlayerInfluence__ct(void *, void *, void *, void *);
int TTecSifta__sub_8023AC88(void* p);
void update_effect_params__9TTecSiftaFPv(u8 *arg0);
extern M2C_UNK __vt__9TTecSifta[];
extern s32 lbl_805D3820;
extern const f32 lbl_805DC940;
u8 *TTecSifta__sub_8023B17C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TTecSifta__sub_8023ACA8(Obj_8023ACA8 *arg0);
s32 obj_getField1c(int);
s32 is_split_screen();
s32 TWindowSubComCard__sub_801058F8(void *);
void show_party_effect__11TWindowCtrlFPvPvPv(s32, s32, s32);
void TTecSifta__vt5(Obj_8023AE8C *arg0, VObj_18_b27ba1 *arg1);
}

extern "C" {

int TTecSifta__sub_8023AC88(void* p);
void *__dt__9TTecSiftaFv(void *arg0, s16 arg1);
void create__9TTecSiftaFPvPvPv(void *arg0, void *arg1, void *arg2);
void create_instance__9TTecSiftaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__9TTecSiftaFv(void);
void update_effect_params__9TTecSiftaFPv(u8 *arg0);
void TObjPlayer__sub_8023AC84(void);
M2C_UNK TTecAnti__sub_8022B35C(void *, s32);
s32 TTecCtrl__sub_8022DBC4(M2C_UNK, s16, M2C_UNK);
void *TTecSifta__ct(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);
void *__nw__7TObjectFUl(int);
int fn_80236EE8(void*);

int TTecSifta__sub_8023AC88(void* p) { return fn_80236EE8(p); }

extern const f64 lbl_8044DC18;

void TTecSifta__sub_8023ACA8(Obj_8023ACA8 *arg0) {
    s32 r;
    switch (arg0->state) {
    case 0:
    case 1:
        r = TBoss3Volopt__sub_8022675C(0x4002AD14, (u8 *)arg0 + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, 0x100, 0);
        }
        break;
    case 2:
    case 3:
        TBoss3Volopt__sub_8022675C(0x4002AD14, (u8 *)arg0 + 0x20, 0, 0);
        break;
    case 4:
    case 5:
        r = TBoss3Volopt__sub_8022675C(0x4002AD14, (u8 *)arg0 + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, -0x100, 0);
        }
        break;
    }
}

void update_effect_params__9TTecSiftaFPv(u8 *arg0) {
    s32 res;
    res = TTecCtrl__sub_8022DBC4(0xD, M2C_FIELD(arg0, s16 *, 0xA4), 0xFFFF);
    TTecAnti__sub_8022B35C(arg0 + 0x74, res);
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (M2C_FIELD(arg0, s16 *, 0x98) * M2C_FIELD(arg0, s16 *, 0xA4));
}

void create_instance__9TTecSiftaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecSifta__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create__9TTecSiftaFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecSifta__sub_8023B17C((u8 *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2));
    }
}

extern M2C_UNK __vt__9TTecSifta[];

void TTecSifta__vt5(Obj_8023AE8C *arg0, VObj_18_b27ba1 *arg1) {
    HitInfo_8023AE8C h;
    if (TWindowSubComCard__sub_801058F8(arg1) == 0) {
        h.type = 9;
        h.power = arg0->power;
        if (is_split_screen() == 0) {
            show_party_effect__11TWindowCtrlFPvPvPv(obj_getField1c((int)arg0->source), obj_getField1c((int)arg1), 9);
        }
        HitInfo_8023AE8C c = h;
        arg1->m21(arg0->source, &c, 0, 0xD, -1);
    }
}

void *__dt__9TTecSiftaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecSifta;
        __dt__19TTecPlayerInfluenceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8023B17C___vt__9TTecSifta_size[sizeof(RecoveredGlobal_8023B17C___vt__9TTecSifta) == 0x20 ? 1 : -1];
u8 *TTecSifta__sub_8023B17C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r3_2;
    u8 *temp_r3;
    TTecPlayerInfluence__ct((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg3));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8023B17C___vt__9TTecSifta *)&__vt__9TTecSifta).value;
    TObjPlayer__sub_8004433C((void *) (arg0 + 0xE0));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3820;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    update_effect_params__9TTecSiftaFPv((u8 *)((void *) (arg0)));
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xDC));
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0xA4), f32 *, 0xC) = (f32) (lbl_805DC940 + M2C_FIELD(arg0, f32 *, 0x7C));
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r3_2 != 0U) {
        M2C_FIELD(arg0, s16 *, 0xA8) = obj_getField1c((int) (temp_r3_2));
    }
    TTecSifta__sub_8023AC88((void*)((void *) (arg0)));
    TTecSifta__sub_8023ACA8((Obj_8023ACA8 *)((void *)((void *) (arg0))));
    return arg0;
}

void render__9TTecSiftaFv(void) {  }

}
