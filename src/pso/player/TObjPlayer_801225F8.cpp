#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801225F8(void* p, s16 v);
void cast_tech_gibarta__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80122680(void* p);
void TObjPlayer__sub_801226C0(void *arg0);
void TObjPlayer__sub_80122748(void *arg0);
s32 TOBoss4Rock__sub_8039C880();
int TObjContainerIdo__sub_803D96A8(void*, void*);
s32 TObjPlayer__sub_8011E384();
M2C_UNK TObjPlayer__sub_8011E618(void *);
M2C_UNK TObjPlayer__sub_8011F5E0(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
int TObjPlayer__sub_80121200(void*);
s32 TObjPlayer__sub_80121CA8(void *);
M2C_UNK create_ex__11TTecGiBartaFPvPvPvPv(void *, M2C_UNK *, s32, s32);

void TObjPlayer__sub_801225F8(void* p, s16 v) { *(s16*)((char*)p + 0x1cc) = v; }
void cast_tech_gibarta__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r31;

    if (TObjPlayer__sub_8011E384() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 0, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            create_ex__11TTecGiBartaFPvPvPvPv(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), TObjPlayer__sub_80121CA8(arg0));
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        TObjPlayer__sub_8011F5E0(arg0);
    }
}
void TObjPlayer__sub_80122680(void* p) { if (TObjPlayer__sub_80121200(p) == 1) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern M2C_UNK lbl_8043E870;
extern f32 lbl_805DACF0;
extern f32 lbl_805DACF4;

void TObjPlayer__sub_801226C0(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 3) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 0) && ((lbl_805DACF0 * (f32) TOBoss4Rock__sub_8039C880()) < lbl_805DACF4)) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 2;
    }
}

void TObjPlayer__sub_80122748(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1FC);
    if ((temp_r0 == 1) || (temp_r0 == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 2;
    }
}

}
