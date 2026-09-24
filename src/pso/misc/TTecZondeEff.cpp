#include "pso/TTecZondeEff.h"

TTecZondeEff::~TTecZondeEff() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8023D988___vt__12TTecZondeEff {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8023DADC___vt__12TTecZondeEff {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8023DA10___vt__12TTecZondeEff {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct P_8023DBB4 { void *vt; s32 n; u8 pad[4]; };

struct C_8023DBB4 { s32 v; };

struct B_8023DBB4 { u8 pad[0xc]; C_8023DBB4 *c; };

struct A_8023DBB4 { u8 pad[0xc8]; B_8023DBB4 *b; };

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8023D988___vt__12TTecZondeEff __vt__12TTecZondeEff;
extern s32 lbl_805D3840;
u8 *__ct__12TTecZondeEffFv(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, f32 farg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
void TTecZondeEff__sub_8023D4A8(void *);
void TTecZondeEff__sub_8023D568(void *);
extern RecoveredGlobal_8023D988___vt__12TTecZondeEff __vt__12TTecZondeEff;
extern s32 lbl_805D3840;
extern const f32 TTecZondeEff__data_805DC994;
u8 *TTecZondeEff__sub_8023DADC(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, f32 farg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
void TTecZondeEff__sub_8023D4A8(void *);
void TTecZondeEff__sub_8023D568(void *);
extern RecoveredGlobal_8023D988___vt__12TTecZondeEff __vt__12TTecZondeEff;
extern s32 lbl_805D3840;
u8 *TTecZonde__sub_8023DA10(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1);
extern P_8023DBB4 lbl_805161D8;
extern char lbl_804CC8C8[];
extern A_8023DBB4 *lbl_8048E5A0[];
extern s32 TTecZondeEff__data_805D63B8;
void TTecZondeEff__sub_8023DBB4(void);
}

extern "C" {

void TTecZondeEff__sub_8023DBA8(void);
s32 calc_dominant_axis__12TTecZondeEffFPv(void *arg0);
f32 get_random_float__8TObjFishFv(f32);

s32 calc_dominant_axis__12TTecZondeEffFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = get_random_float__8TObjFishFv(M2C_FIELD(arg0, f32 *, 0x28));
    temp_f31 = get_random_float__8TObjFishFv(M2C_FIELD(arg0, f32 *, 0x2C));
    temp_f1 = get_random_float__8TObjFishFv(M2C_FIELD(arg0, f32 *, 0x30));
    if (temp_f30 > temp_f31) {
        if (temp_f30 > temp_f1) {
            return 0;
        }
        return 2;
    }
    if (temp_f31 > temp_f1) {
        return 1;
    }
    return 2;
}

extern s32 TTecZondeEff__data_805D63B8;

typedef char RecoveredGlobal_8023D988___vt__12TTecZondeEff_size[sizeof(RecoveredGlobal_8023D988___vt__12TTecZondeEff) == 0x18 ? 1 : -1];
u8 *__ct__12TTecZondeEffFv(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TTecZondeEff.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3840;
    M2C_FIELD(arg0, f32 *, 0x244) = farg0;
    M2C_FIELD(arg0, s32 *, 0x254) = arg2;
    M2C_FIELD(arg0, s32 *, 0x258) = arg3;
    M2C_FIELD(arg0, s32 *, 0x250) = 0;
    M2C_FIELD(arg0, s16 *, 0x25C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0xD;
    M2C_FIELD(arg0, s32 *, 0x248) = 0;
    M2C_FIELD(arg0, s32 *, 0x24C) = 0xFF000000;
    M2C_FIELD(arg0, s16 *, 0x25E) = 0;
    return arg0;
}

typedef char RecoveredGlobal_8023DADC___vt__12TTecZondeEff_size[sizeof(RecoveredGlobal_8023DADC___vt__12TTecZondeEff) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8023DA10___vt__12TTecZondeEff_size[sizeof(RecoveredGlobal_8023DA10___vt__12TTecZondeEff) == 0x18 ? 1 : -1];
u8 *TTecZonde__sub_8023DA10(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8023DA10___vt__12TTecZondeEff *)&__vt__12TTecZondeEff).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3840;
    M2C_FIELD(arg0, f32 *, 0x244) = farg1;
    M2C_FIELD(arg0, s32 *, 0x254) = arg4;
    M2C_FIELD(arg0, s32 *, 0x258) = arg5;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg3);
    M2C_FIELD(arg0, f32 *, 0x34) = farg0;
    M2C_FIELD(arg0, s32 *, 0x250) = 0;
    M2C_FIELD(arg0, s16 *, 0x25C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0xD;
    TTecZondeEff__sub_8023D568(arg0);
    TTecZondeEff__sub_8023D4A8(arg0);
    M2C_FIELD(arg0, s32 *, 0x248) = 0;
    M2C_FIELD(arg0, s32 *, 0x24C) = 0xFF000000;
    M2C_FIELD(arg0, s16 *, 0x25E) = 0;
    return arg0;
}

u8 *TTecZondeEff__sub_8023DADC(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8023DADC___vt__12TTecZondeEff *)&__vt__12TTecZondeEff).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3840;
    M2C_FIELD(arg0, f32 *, 0x244) = (f32) TTecZondeEff__data_805DC994;
    M2C_FIELD(arg0, s32 *, 0x254) = 0x08000000;
    M2C_FIELD(arg0, s32 *, 0x258) = 0x14;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg3);
    M2C_FIELD(arg0, f32 *, 0x34) = farg0;
    M2C_FIELD(arg0, s32 *, 0x250) = 0;
    M2C_FIELD(arg0, s16 *, 0x25C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0xD;
    TTecZondeEff__sub_8023D568(arg0);
    TTecZondeEff__sub_8023D4A8(arg0);
    M2C_FIELD(arg0, s32 *, 0x248) = 0;
    M2C_FIELD(arg0, s32 *, 0x24C) = 0xFF000000;
    M2C_FIELD(arg0, s16 *, 0x25E) = 0;
    return arg0;
}

void TTecZondeEff__sub_8023DBA8(void) {
    TTecZondeEff__data_805D63B8 = 0;
}
void TTecZondeEff__sub_8023DBB4(void) {
    lbl_805161D8.vt = lbl_804CC8C8;
    lbl_805161D8.n = 0x10;
    TTecZondeEff__data_805D63B8 = lbl_8048E5A0[0]->b->c->v;
}

}
