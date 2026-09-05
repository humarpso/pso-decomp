#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowDD__sub_803407F0(u8 *arg0, s32 arg1);
s32 TWindowDD__sub_803404A4(void *, int);
M2C_UNK spawn_window__9TWindowDDFv();
void TWindowDD__sub_80340828(u8 *arg0);
void TWindowDD__sub_8034091C(u8 *arg0, s32 arg1);
void TWindowDD__sub_80340E20(u8 *arg0, s32 arg1);
}

extern "C" {

s32 TWindowDD__sub_80340820(void* p);
void TWindowDD__sub_80340910(void* p);
void *TWindowDD__sub_8034094C(void *arg0, s16 arg1);
void *create__9TWindowDDFv(void);
void init__9TWindowDDFPv(void* p);
void set_scale__9TWindowDDFPvii(void *arg0, s32 arg1, s32 arg2);
void update_draw__9TWindowDDFPv(void* p);
void *TWindowDD__sub_803409A4(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
int initialize_subwindow__9TWindowDDFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);

void update_draw__9TWindowDDFPv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

void TWindowDD__sub_803407F0(u8 *arg0, s32 arg1) {
    if (arg1 < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        return;
    }
    if (arg1 >= 3) {
        M2C_FIELD(arg0, s32 *, 0x64) = 2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
}

s32 TWindowDD__sub_80340820(void* p) { return *(s32*)((char*)p + 0x68); }

void TWindowDD__sub_80340828(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r31;
    s32 temp_r3;
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x68);
    if (TWindowDD__sub_803404A4((void *) (arg0 + 0x60), (int) (0x10)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) - 1);
    } else if (TWindowDD__sub_803404A4((void *) (arg0 + 0x60), (int) (0x20)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 1);
    } else if (TWindowDD__sub_803404A4((void *) (arg0 + 0x60), (int) (0x20000)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
    } else if (TWindowDD__sub_803404A4((void *) (arg0 + 0x60), (int) (0x10000)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x68) = 2;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x68);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_r0 < temp_r3) {
        M2C_FIELD(arg0, s32 *, 0x68) = temp_r3;
    } else if (temp_r0 >= 3) {
        M2C_FIELD(arg0, s32 *, 0x68) = 2;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x68) != temp_r31) {
        spawn_window__9TWindowDDFv();
    }
}

void TWindowDD__sub_80340910(void* p) { *(s32*)((char*)p + 0x60) = 1; }

extern M2C_UNK lbl_804EFBAC[];

void TWindowDD__sub_8034091C(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;
    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x64);
    if (var_r4 < temp_r0) {
        var_r4 = temp_r0;
    } else if (var_r4 >= 3) {
        var_r4 = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x68) = var_r4;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}

void *TWindowDD__sub_8034094C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFBAC;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *create__9TWindowDDFv(void) {
    void *o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = TWindowDD__sub_803409A4(o);
    }
    return o;
}

void init__9TWindowDDFPv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

extern M2C_UNK lbl_804785D8;
extern const f32 lbl_805DFC6C;

void TWindowDD__sub_80340E20(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) arg1;
}

void set_scale__9TWindowDDFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) arg2;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) (lbl_805DFC6C / M2C_FIELD(arg0, f32 *, 0x64));
}

}
