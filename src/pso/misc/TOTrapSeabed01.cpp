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

void trigger_by_id__14TOTrapSeabed01FUi(u32 arg0) {
    if (arg0 == (u32) lbl_805D6818) {
        begin_effect_render__13TParticleCtrlFv();
        return;
    }
    end_effect_render__13TParticleCtrlFv();
}

}
