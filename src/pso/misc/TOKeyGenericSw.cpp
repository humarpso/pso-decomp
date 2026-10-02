#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8016CB88_8016CA60 { char pad[0x18]; };
struct VObj_8016CB88_8016CA60 : Base_8016CB88_8016CA60 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual void m18();
};
struct Base_8016CBE4_8016CA60 { char pad[0x18]; };
struct VObj_8016CBE4_8016CA60 : Base_8016CBE4_8016CA60 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual void m18();
};

struct Base_8016CA64 { char pad[0x18]; };

struct Obj_8016CA64 : Base_8016CA64 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
    u8 pad1c[0x8];
    s32 x24;
    u8 pad28[0xC];
    s32 x34;
    u8 x38[0x28];
    s32 x60;
    u8 pad64[0x4C];
    f32 xb0;
    u8 padb4[0x8];
    s32 xbc;
    f32 xc0;
    f32 xc4;
    u8 padc8[0xC];
    s32 xd4;
};

struct Area_8016CA64 { u8 pad[8]; s32 x8; };

struct Map_8016CA64 { u8 pad[0x42C]; Area_8016CA64 *area; };

extern "C" {
s32 TObjPlayer__sub_803D9B2C();
s32 TOHangerMachine01__sub_803D9C00(void *);
s32 rotate_matrix_y(s32, s32);
s32 set_global_param__8TObjFishFi(s32);
s32 TObjBoss2Tunnel__sub_803DB470(s32);
s32 TObjPlayer__sub_803D9B78();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 TObjDoor__sub_803DC894(s32, s32, f32);
extern s32 *TOKeyGenericSw__data_805D5A28;
extern Map_8016CA64 *TOKeyGenericSw__data_8050DB60[];
void render__14TOKeyGenericSwFv(Obj_8016CA64 *self);
void TLobby__sub_8001FE7C(void *, s32);
void free__11TOBoss4RockFUi(void *);
void free_if_valid__10TObjPlayerFi(s32);
extern s32 *TOKeyGenericSw__data_805D5A28;
extern Map_8016CA64 *TOKeyGenericSw__data_8050DB60[];
void TOKeyGenericSw__sub_8016CC8C(void);
void *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void *alloc_buffer__11TOBoss4RockFPv(u32);
s32 TLanguage__sub_801E4874(void *);
s32 TContainerAncient01__sub_8020335C(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern char lbl_80441D04[];
extern char lbl_80441D24[];
extern u8 lbl_804B2CC0[];
extern Map_8016CA64 *TOKeyGenericSw__data_8050DB60[];
extern s32 *TOKeyGenericSw__data_805D5A28;
void TOKeyGenericSw__sub_8016CD28(void);
}

extern "C" {

void TOKeyGenericSw__vt14(void *arg0);
void TOKeyGenericSw__vt15(void *arg0);
void TOKeyGenericSw__vt23(void);
void *__dt__14TOKeyGenericSwFv(void *arg0, s16 arg1);
void *create__14TOKeyGenericSwFPv(void *arg0);
void *TOKeyGenericSw__ct(void *, void *, void *);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv();

void TOKeyGenericSw__vt23(void) {  }

void render__14TOKeyGenericSwFv(Obj_8016CA64 *self) {
    if (self->m8(self->xc0, self->xc4) == 0) return;
    TObjPlayer__sub_803D9B2C();
    self->x24 = TOKeyGenericSw__data_805D5A28[0];
    self->x34 = TOKeyGenericSw__data_8050DB60[0]->area->x8;
    TOHangerMachine01__sub_803D9C00(self->x38);
    rotate_matrix_y(0, self->x60);
    set_global_param__8TObjFishFi(self->x24);
    TObjBoss2Tunnel__sub_803DB470(self->x34);
    TObjPlayer__sub_803D9B78();
    begin_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B2C();
    switch (self->xd4) {
    case 0:
        self->x24 = TOKeyGenericSw__data_805D5A28[1];
        break;
    case 1:
        self->x24 = TOKeyGenericSw__data_805D5A28[2];
        break;
    }
    self->x34 = TOKeyGenericSw__data_8050DB60[1]->area->x8;
    TOHangerMachine01__sub_803D9C00(self->x38);
    rotate_matrix_y(0, self->x60);
    set_global_param__8TObjFishFi(self->x24);
    TObjDoor__sub_803DC894(self->x34, self->xbc, self->xb0);
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

void TOKeyGenericSw__vt15(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    ((VObj_8016CB88_8016CA60*)arg0)->m18();
    M2C_FIELD(arg0, s32 *, 0xF4) = 1;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32) M2C_FIELD(arg0, s32 *, 0xF4);
}

void TOKeyGenericSw__vt14(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    ((VObj_8016CBE4_8016CA60*)arg0)->m18();
    M2C_FIELD(arg0, s32 *, 0xEC) = 1;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) M2C_FIELD(arg0, s32 *, 0xEC);
}

extern void *tl_05;

void *create__14TOKeyGenericSwFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TOKeyGenericSw__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__14TOKeyGenericSw[];

void TOKeyGenericSw__sub_8016CC8C(void) {
    if (TOKeyGenericSw__data_805D5A28 != NULL) {
        free_if_valid__10TObjPlayerFi(TOKeyGenericSw__data_805D5A28[2]);
        if (TOKeyGenericSw__data_805D5A28 != NULL) {
            free__11TOBoss4RockFUi(TOKeyGenericSw__data_805D5A28);
            TOKeyGenericSw__data_805D5A28 = NULL;
        }
    }
    if (TOKeyGenericSw__data_8050DB60[1] != NULL) {
        TLobby__sub_8001FE7C(TOKeyGenericSw__data_8050DB60[1], 1);
        TOKeyGenericSw__data_8050DB60[1] = NULL;
    }
    if (TOKeyGenericSw__data_8050DB60[0] != NULL) {
        TLobby__sub_8001FE7C(TOKeyGenericSw__data_8050DB60[0], 1);
        TOKeyGenericSw__data_8050DB60[0] = NULL;
    }
}

void TOKeyGenericSw__sub_8016CD28(void) {
    u8 *base = lbl_804B2CC0;
    s32 st = get_global_state__14TOKeyMachine01Fv();
    void *p;
    if (TContainerAncient01__sub_8020335C() == 1 || st == 0x1C || st == 0x1D) {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 1, base + 0x40, 0, 0, 0);
        }
        TOKeyGenericSw__data_8050DB60[0] = (Map_8016CA64 *)p;
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 1, base + 0x60, 0, 0, 0);
        }
        TOKeyGenericSw__data_8050DB60[1] = (Map_8016CA64 *)p;
        TOKeyGenericSw__data_805D5A28 = (s32 *)alloc_buffer__11TOBoss4RockFPv(0xC);
        TOKeyGenericSw__data_805D5A28[0] = M2C_FIELD(TOKeyGenericSw__data_8050DB60[0]->area, s32 *, 0xC);
        TOKeyGenericSw__data_805D5A28[1] = M2C_FIELD(TOKeyGenericSw__data_8050DB60[1]->area, s32 *, 0xC);
        TOKeyGenericSw__data_805D5A28[2] = TLanguage__sub_801E4874(lbl_80441D04);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 1, base + 0x8, 0, 0, 0);
        }
        TOKeyGenericSw__data_8050DB60[0] = (Map_8016CA64 *)p;
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 1, base + 0x28, 0, 0, 0);
        }
        TOKeyGenericSw__data_8050DB60[1] = (Map_8016CA64 *)p;
        TOKeyGenericSw__data_805D5A28 = (s32 *)alloc_buffer__11TOBoss4RockFPv(0xC);
        TOKeyGenericSw__data_805D5A28[0] = M2C_FIELD(TOKeyGenericSw__data_8050DB60[0]->area, s32 *, 0xC);
        TOKeyGenericSw__data_805D5A28[1] = M2C_FIELD(TOKeyGenericSw__data_8050DB60[1]->area, s32 *, 0xC);
        TOKeyGenericSw__data_805D5A28[2] = TLanguage__sub_801E4874(lbl_80441D24);
    }
}

void *__dt__14TOKeyGenericSwFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyGenericSw;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
