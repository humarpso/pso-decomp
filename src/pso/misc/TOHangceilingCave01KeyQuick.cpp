#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__27TOHangceilingCave01KeyQuickFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *, int);

extern M2C_UNK __vt__27TOHangceilingCave01KeyQuick[];

void *__dt__27TOHangceilingCave01KeyQuickFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__27TOHangceilingCave01KeyQuick;
        destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80168C04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *arg0, s16 arg1);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804B2578[];

void *destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B2578;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80168D20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TOHangceilingCave01KeyQuick__sub_80168D20(void);
f32 TOHangceilingCave01KeyQuick__sub_80168D28(void);
void TOHangceilingCave01KeyQuick__sub_80168D30(void);
void set_scale__27TOHangceilingCave01KeyQuickFPvf(void* p, f32 v);

int TOHangceilingCave01KeyQuick__sub_80168D20(void) { return 1; }

extern f32 lbl_805DB650;

f32 TOHangceilingCave01KeyQuick__sub_80168D28(void) {
    return lbl_805DB650;
}

void TOHangceilingCave01KeyQuick__sub_80168D30(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80168D34
#include "types.h"

extern "C" {

void TOHangceilingCave01KeyQuick__sub_80168D30(void);
void set_scale__27TOHangceilingCave01KeyQuickFPvf(void* p, f32 v);

void set_scale__27TOHangceilingCave01KeyQuickFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x338) = v; }

}
#endif
#endif
