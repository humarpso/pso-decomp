#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern const f32 lbl_805D7E94;
extern const f32 lbl_805D7E98;
extern const f32 TLoadingCur__data_805D7E9C;
extern const f32 lbl_805D7EA0;
extern const f32 lbl_805D7EA4;
s32 TLoadingCur__sub_8001CC28(M2C_UNK arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

void *__dt__11TLoadingCurFv(void *arg0, s16 arg1);
int render__11TLoadingCurFv(void* p);
int TLoadingCur__sub_8001CCD4(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

s32 TLoadingCur__sub_8001CC28(M2C_UNK arg0, u8 *arg1, u8 *arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    temp_f1_2 = M2C_FIELD(arg1, f32 *, 0);
    if (temp_f1_2 < lbl_805D7E94) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) (lbl_805D7E94 - temp_f1_2);
    } else if (temp_f1_2 > lbl_805D7E98) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) (lbl_805D7E98 - temp_f1_2);
    } else {
        M2C_FIELD(arg2, f32 *, 0) = (f32) TLoadingCur__data_805D7E9C;
    }
    temp_f1_3 = M2C_FIELD(arg1, f32 *, 4);
    if (temp_f1_3 < lbl_805D7EA0) {
        M2C_FIELD(arg2, f32 *, 4) = (f32) (lbl_805D7EA0 - temp_f1_3);
    } else if (temp_f1_3 > lbl_805D7EA4) {
        M2C_FIELD(arg2, f32 *, 4) = (f32) (lbl_805D7EA4 - temp_f1_3);
    } else {
        M2C_FIELD(arg2, f32 *, 4) = (f32) TLoadingCur__data_805D7E9C;
    }
    temp_f0 = M2C_FIELD(arg2, f32 *, 0);
    temp_f1 = M2C_FIELD(arg2, f32 *, 4);
    return (u32)__cntlzw((u32)((((temp_f0 * temp_f0) + (temp_f1 * temp_f1)) <= TLoadingCur__data_805D7E9C))) >> 5;
}

int render__11TLoadingCurFv(void* p) { return TLoadingCur__sub_8001CCD4(p); }

extern M2C_UNK __vt__11TLoadingCur[];

void *__dt__11TLoadingCurFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TLoadingCur;
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
