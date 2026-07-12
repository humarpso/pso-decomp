#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_8012192C(void *arg0, s16 arg1);
void TObjPlayer__sub_80121984(void *arg0);
void release_container_if_active__10TObjPlayerFPv(void* p);
void update_freeze_state__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80121ACC(void *arg0);
s32 TOBoss4Rock__sub_8039C880();
int TObjContainerIdo__sub_803D96A8(void*, void*);
s32 TObjPlayer__sub_8011E384();
M2C_UNK TObjPlayer__sub_8011E618(void *);
M2C_UNK TObjPlayer__sub_8011F5E0(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
int TObjPlayer__sub_80121200(void*);
s32 TObjPlayer__sub_80121CA8(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);
M2C_UNK create__8TTecFoieFPvPvPvPv(void *, M2C_UNK *, s32, s32);

extern M2C_UNK lbl_804A0AA8[];

void *TObjPlayer__sub_8012192C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0AA8;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_80121984(void *arg0) {
    M2C_UNK sp8;
    void *temp_r31;

    if (TObjPlayer__sub_8011E384() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 0, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), TObjPlayer__sub_80121CA8(arg0));
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        TObjPlayer__sub_8011F5E0(arg0);
    }
}

void release_container_if_active__10TObjPlayerFPv(void* p) { if (TObjPlayer__sub_80121200(p) == 1) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern M2C_UNK lbl_8043E868;
extern f32 lbl_805DACC8;
extern f32 lbl_805DACCC;

void update_freeze_state__10TObjPlayerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 3) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 0) && ((lbl_805DACC8 * (f32) TOBoss4Rock__sub_8039C880()) < lbl_805DACCC)) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 2;
    }
}

void TObjPlayer__sub_80121ACC(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1FC);
    if ((temp_r0 == 1) || (temp_r0 == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 2;
    }
}

}
