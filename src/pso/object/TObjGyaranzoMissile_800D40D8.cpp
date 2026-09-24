#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <dolphin/mtx.h>
#include <stddef.h>

struct D_800D40FC { u8 pad[0x18]; s32 arr[1]; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjPlayer__sub_80156844(void *, void *, int);
extern const f32 lbl_805DA2A0;
extern const f32 lbl_805DA2A4;
void TObjGyaranzoMissile__sub_800D4110(u8 *arg0, M2C_UNK *arg1, f32 farg0);
extern s32 lbl_805D51EC;
f32 TObjGyaranzoMissile__sub_800D40EC(s32 arg0);
extern s32 lbl_805D51EC;
s32 TObjGyaranzoMissile__sub_800D40FC(s32 i);
}

extern "C" {

void TObjGyaranzoMissile__sub_800D40D8(void);
void TObjGyaranzoMissile__sub_800D40DC(void);
int TObjGyaranzoMissile__sub_800D40E0(void);
void TObjGyaranzoMissile__sub_800D40E8(void);
void draw__19TObjGyaranzoMissileFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);

void TObjGyaranzoMissile__sub_800D40D8(void) {  }
void TObjGyaranzoMissile__sub_800D40DC(void) {  }
int TObjGyaranzoMissile__sub_800D40E0(void) { return 0; }
void TObjGyaranzoMissile__sub_800D40E8(void) {  }

extern s32 some_id_805c6f74;

f32 TObjGyaranzoMissile__sub_800D40EC(s32 arg0) {
    return M2C_FIELD((lbl_805D51EC + (arg0 * 4)), f32 *, 0);
}

s32 TObjGyaranzoMissile__sub_800D40FC(s32 i) {
    return (*(D_800D40FC * *)&lbl_805D51EC)->arr[i];
}

void TObjGyaranzoMissile__sub_800D4110(u8 *arg0, M2C_UNK *arg1, f32 farg0) {
    Vec position;
    f32 temp_f1;
    s32 temp_r31;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x38));
    temp_r31 = TObjPlayer__sub_80156844((void *) (arg0), (void *) (&position.x), (int) (0));
    if (arg1 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (&position.x));
    }
    if (temp_r31 == 1) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + lbl_805DA2A0);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0xB0));
        temp_f1 = position.y + farg0;
        position.y = temp_f1;
        if (M2C_FIELD(arg0, f32 *, 0x3C) <= temp_f1) {
            M2C_FIELD(arg0, f32 *, 0x3C) = temp_f1;
            M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DA2A4;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800000);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
}

void draw__19TObjGyaranzoMissileFPv(u8 *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC8));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xBC));
    TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0xC0));
    some_id_805c6f74 &= 0xFFFFFBFF;
    TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0xC4));
    TObjPlayer__sub_803D9B78();
}

}
