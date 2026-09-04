#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void render__20TWindowChoiceSettingFv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
M2C_UNK draw_setting__20TWindowChoiceSettingFPvi(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);
extern M2C_UNK lbl_804D0658[];
void render__20TWindowChoiceSettingFv(u8 *arg0);
}

extern "C" {

void *TWindowChoiceSetting__ct(void *arg0);
void *__dt__20TWindowChoiceSettingFv(void *arg0, s16 arg1);
int TWindowSubComCard__sub_80249220(void* p);
void __dl__7TObjectFPv(void *);
void destroy_children__20TWindowSubStatusDispFPvs(void *, int);
int fn_80268C5C(void*);
void fn_80269004(void *);

extern M2C_UNK __vt__20TWindowChoiceSetting[];

void render__20TWindowChoiceSettingFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    draw_setting__20TWindowChoiceSettingFPvi(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x78), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, u32 *, 0x7C), temp_r3, arg0 + 0x68);
    }
}

void *__dt__20TWindowChoiceSettingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowChoiceSetting;
        destroy_children__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__20TWindowChoiceSetting[];
extern void *lbl_805D38B8;

void *TWindowChoiceSetting__ct(void *arg0) {
    fn_80269004(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowChoiceSetting;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D38B8;
    M2C_FIELD(arg0, u16 *, 0x80) = 0;
    return arg0;
}

}
