#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_8322b3 { char pad[0x18]; };

struct VObj_18_8322b3 : VBase_18_8322b3 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(void *);
};

struct RecoveredGlobal_80194528___vt__9TObjLight {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_80194528_TObjLight__data_80506320 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

extern "C" {
s32 is_split_screen(void);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;
u8 *TObjLight__create(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 disallow_rendering__7TObjectFv(void *);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 TPhotonMagicSquare__sub_801A2640(void *);
extern M2C_UNK __vt__9TObjLight[];
extern RecoveredGlobal_80194528_TObjLight__data_80506320 TObjLight__data_80506320;
extern s32 lbl_805D33B8;
extern const f32 lbl_805DBEAC;
extern const f32 lbl_805DBEB8;
u8 *TObjLight__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
}

extern "C" {

void *__dt__9TObjLightFv(void *arg0, s16 arg1);
void render__9TObjLightFv(void);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void mask_object_set_row_flags(void *, int);

void render__9TObjLightFv(void) {  }

extern M2C_UNK __vt__9TObjLight[];

void *__dt__9TObjLightFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TObjLight;
        mask_object_set_row_flags(arg0, -3);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80194528___vt__9TObjLight_size[sizeof(RecoveredGlobal_80194528___vt__9TObjLight) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_80194528_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_80194528_TObjLight__data_80506320) == 0x50 ? 1 : -1];
u8 *TObjLight__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80194528___vt__9TObjLight *)&__vt__9TObjLight).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D33B8;
    ((VObj_18_8322b3 *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(arg2, s16 *, 8);
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DBEB8;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0xF8) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg0, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) lbl_805DBEAC;
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805DBEAC;
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) lbl_805DBEAC;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xBC), (void *) ((u8 *)&TObjLight__data_80506320.value + 0x24));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xD8), (void *) ((u8 *)&TObjLight__data_80506320.value + 0xC));
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DBEB8;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) lbl_805DBEAC;
    M2C_FIELD(arg0, f32 *, 0xF8) = (f32) lbl_805DBEAC;
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) lbl_805DBEAC;
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

u8 *TObjLight__create(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x100));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TObjLight__ct((u8 *)(temp_r3), (M2C_UNK)(tl_05), (u8 *)(arg0)));
    }
    return var_r0;
}

}
