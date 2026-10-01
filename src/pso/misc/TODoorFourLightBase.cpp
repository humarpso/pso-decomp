#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_721d61 { char pad[0x18]; };

struct VObj_18_721d61 : VBase_18_721d61 {
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
    virtual s32 m19();
    virtual s32 m20();
};

struct DPre_802A0994 { s32 f0; u8 pad[0x14]; };

struct Door_802A0994 : DPre_802A0994 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
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
    u8 pad1c[0xD8 - 0x1C];
    s32 a[8];
    s32 f;
};

struct Door_802A0670 {
    u8 pad0[0x38];
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0xC8 - 0x64];
    s32 fC8;
    u8 padCC[0xD0 - 0xCC];
    s32 fD0;
    u8 *fD4;
    u32 *a[4];
    u32 *b[4];
    s32 fF8;
};

extern "C" {
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
f32 TObjPlayer__sub_803D99F8(void *, void *);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
s32 TBoss7Tentacle__sub_803D9BA0(void *);
f32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_param__8TObjFishFi(void *);
s32 TOSignCave03__sub_803DB510(int);
void TODoorFourLightBase__sub_802A0578(u8 *arg0, u8 *arg1);
void init_door_base(void *, void *);
extern M2C_UNK __vt__19TODoorFourLightBase[];
extern s32 lbl_805D3D60;
Door_802A0994 *TODoorFourLightBase__ct(Door_802A0994 *arg0, void *arg1, s32 arg2);
s32 end_effect_render__13TParticleCtrlFv();
u8 TODoorAncient08__sub_80229220(int);
void TODoorFourLightBase__sub_802A0578(u8 *arg0, u8 *arg1);
s32 rotate_matrix_y(int, int);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
f32 TOHangerMachine01__sub_803D9C00(void *);
void TODoorFourLightBase__sub_802A0670(Door_802A0670 *self);
}

extern "C" {

s32 TODoorFourLightBase__vt17(void *arg0);
void TODoorFourLightBase__vt4(void *arg0, s16 *arg1);
void *__dt__19TODoorFourLightBaseFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();

s32 TODoorFourLightBase__vt17(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        if ((get_main_phase() == 0xF) || (is_not_split_screen__13TRaderMapCoreFv() == 1)) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 2;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xCC) = 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xC8);
}

void TODoorFourLightBase__vt4(void *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
    }
}

extern M2C_UNK __vt__19TODoorFourLightBase[];

void TODoorFourLightBase__sub_802A0578(u8 *arg0, u8 *arg1) {
    s32 temp_r31;
    u8 *temp_r4;
    u8 *var_r30;
    var_r30 = (u8 *)(arg1);
    do {
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        if (temp_r31 & 0x100000) {
            set_global_param__8TObjFishFi((void *) (((VObj_18_721d61 *)(arg0))->m20()));
        } else {
            set_global_param__8TObjFishFi((void *) (((VObj_18_721d61 *)(arg0))->m19()));
        }
        if (M2C_FIELD(var_r30, s32 *, 0) & 0x200000) {
            begin_effect_render__13TParticleCtrlFv();
        } else {
            end_effect_render__13TParticleCtrlFv();
        }
        TObjPlayer__sub_803D9B2C();
        if (!(temp_r31 & 1)) {
            TOHangerMachine01__sub_803D9C00((void *) (var_r30 + 8));
        }
        if (!(temp_r31 & 2)) {
            TObjPlayer__sub_803D99F8((void *) (var_r30 + 0x14), (void *) (temp_r31 & 0x20));
        }
        if (!(temp_r31 & 4)) {
            TBoss7Tentacle__sub_803D9BA0((void *) (var_r30 + 0x20));
        }
        if (!(temp_r31 & 8)) {
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(var_r30, s32 *, 4)));
        }
        if (!(temp_r31 & 0x10)) {
            temp_r4 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x2C));
            if (temp_r4 != NULL) {
                TODoorFourLightBase__sub_802A0578(arg0, temp_r4);
            }
        }
        TObjPlayer__sub_803D9B78();
        var_r30 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x30));
    } while (var_r30 != NULL);
}

void TODoorFourLightBase__sub_802A0670(Door_802A0670 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->a[i] != NULL) {
            *self->a[i] |= 0x100000;
            *self->a[i] |= 0x200000;
        }
        if (self->b[i] != NULL) {
            *self->b[i] |= 0x100000;
            *self->a[i] |= 0x200000;
        }
    }
    if (!(self->fD0 & 1)) {
        for (i = 0; i < self->fF8; i++) {
            if (TODoorAncient08__sub_80229220((u16)(self->fC8 + i)) == 1) {
                if (self->a[i] != NULL) {
                    *self->a[i] |= 0x100000;
                }
                if (self->b[i] != NULL) {
                    *self->b[i] |= 0x100000;
                }
            } else {
                if (self->a[i] != NULL) {
                    *self->a[i] &= ~0x100000;
                }
                if (self->b[i] != NULL) {
                    *self->b[i] &= ~0x100000;
                }
            }
        }
    }
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(self->f38);
    rotate_matrix_y(0, self->f60);
    TODoorFourLightBase__sub_802A0578((u8 *)self, self->fD4);
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

void *__dt__19TODoorFourLightBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TODoorFourLightBase;
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Door_802A0994 *TODoorFourLightBase__ct(Door_802A0994 *arg0, void *arg1, s32 arg2) {
    s32 i;
    init_door_base(arg0, arg1);
    *(void **)((u8 *)arg0 + 0x18) = ((s32 *)&__vt__19TODoorFourLightBase);
    arg0->f0 = lbl_805D3D60;
    arg0->m5(arg2);
    arg0->m17();
    for (i = 0; i < 8; i++) {
        arg0->a[i] = 0;
    }
    arg0->f = 0;
    return arg0;
}

}
