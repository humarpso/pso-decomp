#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_f37bb9 { char pad[0x18]; };

struct VObj_18_f37bb9 : VBase_18_f37bb9 {
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
    virtual M2C_UNK m20(s32, f32);
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
    virtual M2C_UNK m65(f32);
};

typedef s32 M2C_UNK;
struct Vec_802C9E3C { f32 x, y, z; };

struct Mtx_802C9E3C { f32 m[3][4]; };

struct Entry_802C9E3C {
    s32 id;
    Vec_802C9E3C pos;
    s32 arg;
};

struct Params_802C9E3C {
    u8 pad0[0xC];
    Vec_802C9E3C pos;
    u8 pad18[0x40 - 0x18];
    s32 model;
    s32 f44;
    u8 pad48[0x50 - 0x48];
    s32 arg;
    u8 pad54[0x64 - 0x54];
};

struct Trap_802C9E3C {
    u8 pad0[0x38];
    Vec_802C9E3C pos;
    u8 pad44[0x60 - 0x44];
    s32 rotY;
};

struct Pair_802C9F70 { s32 a; s32 b; };

struct VBase_802C9F70 { char pad[0x18]; };

struct VObj_802C9F70 : VBase_802C9F70 {
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
    virtual void m21(void *, Pair_802C9F70 *, s32, s32, s32);
    virtual void m22();
    virtual void m23(void *, f32);
};

struct Trap_802C9F70 {
    u8 pad0[0x350];
    Pair_802C9F70 pair;
};

extern "C" {
void set_indexed_flags(void *, s32, s32);
void init_all_slots__10TObjPlayerFv(void);
void check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
extern const f32 lbl_805DE640;
extern const f32 lbl_805DE64C;
void TOTrapSeabed01__vt80(u8 *arg0);
u16 TObjPlayer__sub_800115C4(void *, int, f32);
f32 TObjPlayer__sub_80141CF8(void *, void *);
f32 TObjPlayer__sub_8017A1A4(int, int);
M2C_UNK TObjPlayer__sub_801B5328(int, void *, int, int, f32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
M2C_UNK fn_802C9C18(void *, int);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 lbl_805D53A0;
void TOTrapSeabed01__sub_802CA038(u8 *arg0);
void calc_attach_pos__10TObjPlayerFPv(void *);
void obj_clearFlags30(void *, u32);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, u32);
void set_indexed_flags(void *, s32, s32);
void TOTrapSeabed01__sub_802CA038(u8 *arg0);
void TOTrapSeabed01__vt79(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDC4(int, int);
M2C_UNK set_position_xy__10TObjPlayerFPvff(f32, f32);
u32 TObjEneDellBiter__sub_80087350(void *, int);
M2C_UNK copy_transform__8TObjChipFPvPv(void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK __ct__13TObjSuisoChipFv(void *, void *, void *);
M2C_UNK fn_802C9C18(void *, int);
M2C_UNK TCameraCtrl__sub_803D8934(void *, void *, void *);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TObjPlayer__sub_803D8CD4(void *);
M2C_UNK rotate_matrix_y(void *, int);
extern u8 lbl_80472044[];
extern Entry_802C9E3C lbl_804E0FE4[];
extern s32 TOTrapSeabed01__data_805D6810;
extern s32 TOTrapSeabed01__data_805D6814;
extern const f32 TOTrapSeabed01__data_805DE644;
extern const f32 lbl_805DE648;
void TOTrapSeabed01__vt83(Trap_802C9E3C *self);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
void *get_battle_param__10TObjPlayerFi(s32);
s32 is_valid_and_active__10TObjPlayerFUi();
extern s32 lbl_805D3530;
extern const f32 TOTrapSeabed01__data_805DE644;
s32 TOTrapSeabed01__vt65(Trap_802C9F70 *self);
}

extern "C" {

void TOTrapSeabed01__vt20(s32 arg0, s32 arg1, f32 farg0);
void trigger_by_id__14TOTrapSeabed01FUi(u32 arg0);
M2C_UNK TOTrap__sub_80178F54(s32, s32, f32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_802C9D38();

void TOTrapSeabed01__vt20(s32 arg0, s32 arg1, f32 farg0) {
    fn_802C9D38();
    TOTrap__sub_80178F54(arg0, arg1, farg0);
}

extern u32 lbl_805D6818;

void TOTrapSeabed01__vt83(Trap_802C9E3C *self) {
    Mtx_802C9E3C m;
    Params_802C9E3C p;
    Entry_802C9E3C *e;
    s32 i;
    f32 y;
    void *o;
    copy_transform__8TObjChipFPvPv(&p, lbl_80472044);
    y = TOTrapSeabed01__data_805DE644;
    p.f44 = TOTrapSeabed01__data_805D6814;
    for (i = 0; i < 6; i++) {
        e = &lbl_804E0FE4[i];
        VecCopy__FP3VecPC3Vec(&p.pos, &e->pos);
        p.model = TObjFish__sub_8001EDC4(TOTrapSeabed01__data_805D6810, e->id);
        p.arg = e->arg;
        o = __nw__7TObjectFUl(0x24C);
        if (o != NULL) {
            __ct__13TObjSuisoChipFv(o, self, &p);
        }
        Vec_802C9E3C v = p.pos;
        v.y = y;
        TObjPlayer__sub_803D8CD4(&m);
        set_position_vec3__10TObjPlayerFPvPv(&m, &self->pos);
        rotate_matrix_y(&m, self->rotY);
        TCameraCtrl__sub_803D8934(&m, &v, &v);
        if (TObjEneDellBiter__sub_80087350(&v, 0x8B) != 0) {
            set_position_xy__10TObjPlayerFPvff(lbl_805DE648, lbl_805DE648);
        }
    }
    fn_802C9C18(self, 1);
}

s32 TOTrapSeabed01__vt65(Trap_802C9F70 *self) {
    s32 i;
    VObj_802C9F70 *o;
    for (i = 0; i < 0x10; i++) {
        o = (VObj_802C9F70 *)get_battle_param__10TObjPlayerFi(i);
        if (is_valid_and_active__10TObjPlayerFUi() != 0 && check_value_equals__13TQuestColCtrlFPvi(o, lbl_805D3530) != 0) {
            Pair_802C9F70 p = self->pair;
            o->m21(self, &p, 0, -1, -1);
            if (self->pair.a < 5) {
                o->m23(self, TOTrapSeabed01__data_805DE644);
            }
        }
    }
    return 1;
}

#pragma push
#pragma fp_contract on
void TOTrapSeabed01__sub_802CA038(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f31;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 id;
    M2C_FIELD(arg0, u32 *, 0x2A8) = 0U;
    M2C_FIELD(arg0, u16 *, 0x33C) = TObjPlayer__sub_800115C4((void *) (arg0), (int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x334)));
    id = M2C_FIELD(arg0, u16 *, 0x33C);
    if ((id != 0xFFFF) && (temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(id), M2C_FIELD(arg0, u32 *, 0x2A8) = temp_r3, temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x2A8), ((temp_r3_2 == 0U) == 0))) {
        temp_f31 = TObjPlayer__sub_80141CF8((void *) (temp_r3_2 + 0x38), (void *) (arg0 + 0x38));
        M2C_FIELD(arg0, f32 *, 0x338) = (f32) (M2C_FIELD(arg0, f32 *, 0x338) - TObjPlayer__sub_8017A1A4((int) (temp_r3), (int) (0)));
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x338);
        if (temp_f31 < (temp_f0 * temp_f0)) {
            if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
                TObjPlayer__sub_801B5328((int) (temp_r3), (void *) (arg0 + 0x38), (int) (-1), (int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x338)));
            } else if ((s32) M2C_FIELD(arg0, u16 *, 0x33C) == (s32) lbl_805D53A0) {
                TObjPlayer__sub_801B5328((int) (temp_r3), (void *) (arg0 + 0x38), (int) (-1), (int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x338)));
            }
            fn_802C9C18((void *) (arg0), (int) (0));
            return;
        }
        M2C_FIELD(arg0, u16 *, 0x33C) = 0xFFFFU;
        M2C_FIELD(arg0, u32 *, 0x2A8) = 0U;
    }
}
#pragma pop

void TOTrapSeabed01__vt80(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x348) - 1;
    M2C_FIELD(arg0, s32 *, 0x348) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805DE64C;
        set_indexed_flags(arg0, 0, 0x100);
        init_all_slots__10TObjPlayerFv();
        check_object_collisions__10TObjPlayerFPv(arg0);
        ((VObj_18_f37bb9 *)(arg0))->m65(lbl_805DE640);
        ((VObj_18_f37bb9 *)(arg0))->m20(M2C_FIELD(arg0, s32 *, 0x2A8), lbl_805DE640);
    }
    TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
}

void TOTrapSeabed01__vt79(u8 *arg0) {
    u32 temp_r0;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + M2C_FIELD(arg0, f32 *, 0xC8));
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF8), s32 *, 4) - 1;
    if (M2C_FIELD(arg0, f32 *, 0xC0) > (f32) temp_r0) {
        M2C_FIELD(arg0, f32 *, 0xC0) = (f32) temp_r0;
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        calc_attach_pos__10TObjPlayerFPv(arg0);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08001F04U);
        set_indexed_flags(arg0, 0, 0x8003);
        obj_clearFlags30(arg0, 0x40000U);
        TOTrapSeabed01__sub_802CA038((u8 *)((void *) (arg0)));
    }
}

void trigger_by_id__14TOTrapSeabed01FUi(u32 arg0) {
    if (arg0 == (u32) lbl_805D6818) {
        begin_effect_render__13TParticleCtrlFv();
        return;
    }
    end_effect_render__13TParticleCtrlFv();
}

}
