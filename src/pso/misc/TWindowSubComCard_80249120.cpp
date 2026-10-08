#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 __nw__7TObjectFUl(int);
int TWindowSubComCard__sub_80249220(void *, void *);
s32 TWindowChoiceSetting__ct(int, void *, void *);
s32 create_choice_setting_window__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
s32 get_field_74__17TWindowSubComCardFPv(void *);
extern const f32 lbl_805DCBB8;
extern const f32 lbl_805DCBBC;
void TWindowSubComCard__sub_80249144(void *arg0);
}

extern "C" {

void begin_scroll__17TWindowSubComCardFPvf(void *arg0, f32 farg0);
int fn_80268C5C(void*);

void begin_scroll__17TWindowSubComCardFPvf(void *arg0, f32 farg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x80);
    if (temp_r4 & 1) {
        M2C_FIELD(arg0, u16 *, 0x80) = (u16) (temp_r4 & 0xFFFE);
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

void TWindowSubComCard__sub_80249144(void *arg0) {
    u16 temp_r4;
    void *e;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x80);
    if (!(temp_r4 & 1)) {
        M2C_FIELD(arg0, u16 *, 0x80) = (u16) (temp_r4 | 1);
        e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, get_field_74__17TWindowSubComCardFPv(arg0));
        M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DCBB8 + M2C_FIELD(e, f32 *, 0x14);
        if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x40) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DCBBC);
        }
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

s32 create_choice_setting_window__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    TWindowSubComCard__sub_80249220((void *)((void *) (arg1)), (void *)((void *) (arg2)));
    temp_r3 = __nw__7TObjectFUl((int) (0x84));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TWindowChoiceSetting__ct((int) (temp_r3), (void *) (arg0), (void *) (arg2));
    }
    return var_r0;
}

int TWindowSubComCard__sub_80249220(void* p, void * _w1) { return fn_80268C5C(p); }

}
