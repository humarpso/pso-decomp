#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {
f32 fn_801315A0(void *, void *);
M2C_UNK TParticleCtrl__sub_803D8D1C(int, void *, void *);
extern s32 lbl_805D4DF0;
extern const f32 lbl_805DBDDC;
s32 TObjDoor__sub_8018EA2C(s32 arg0, f32 farg0, f32 farg1);
}

extern "C" {

void update_anim__8TObjDoorFPv(void *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);

extern f32 lbl_805DBDD0;
extern f32 lbl_805DBDD4;

void update_anim__8TObjDoorFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC8) + 0x300);
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DBDD4 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0xC8)) + lbl_805DBDD0;
}
s32 TObjDoor__sub_8018EA2C(s32 arg0, f32 farg0, f32 farg1) {
    f32 sp8;
    f32 temp_f1;
    temp_f1 = fn_801315A0((void *) (arg0 + 0x38), (void *) (lbl_805D4DF0 + 0x178));
    if (temp_f1 > (farg0 * farg0)) {
        return 0;
    }
    if (temp_f1 < (farg1 * farg1)) {
        return 1;
    }
    TParticleCtrl__sub_803D8D1C((int) (0), (void *) (arg0 + 0x38), (void *) (&sp8));
    if ((-farg1 <= sp8) && (sp8 <= (lbl_805DBDDC + farg1))) {
        return 1;
    }
    return 0;
}

}
