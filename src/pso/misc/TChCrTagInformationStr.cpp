#include "pso/TChCrTagInformationStr.h"

TChCrTagInformationStr::~TChCrTagInformationStr() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK queue_destruction__7TObjectFv();
extern s32 lbl_805D40BC;
extern const f32 TChCrTagInformationStr__data_805DF108;
extern const f32 lbl_805DF110;
extern const f32 lbl_805DF124;
extern const f32 lbl_805DF128;
extern const f32 lbl_805DF12C;
void run_task__22TChCrTagInformationStrFv(u8 *arg0);
}

extern "C" {

void *__ct__22TChCrTagInformationStrFv(void *arg0, M2C_UNK arg1, s32 arg2);
void * create__22TChCrTagInformationStrFPvPv(void *arg0, void *arg1);
M2C_UNK __ct__7TObjectFP7TObject();
void *__nw__7TObjectFUl(int);

void * create__22TChCrTagInformationStrFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = __ct__22TChCrTagInformationStrFv((void *)(o), (M2C_UNK)(arg0), (s32)(arg1));
    }
    return o;
}

extern M2C_UNK __vt__22TChCrTagInformationStr[];
extern s32 lbl_805D40B8;
extern const f32 TChCrTagInformationStr__data_805DF108;

#pragma push
#pragma opt_common_subs off
void run_task__22TChCrTagInformationStrFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 2) && ((s32) M2C_FIELD(arg0, s32 *, 0x20) != (s32) lbl_805D40BC)) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x2C) - 1;
        M2C_FIELD(arg0, s32 *, 0x2C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            break;
        }
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) + lbl_805DF124);
        if (M2C_FIELD(arg0, f32 *, 0x30) > lbl_805DF110) {
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805DF110;
            break;
        }
        break;
    case 2:
        if ((s32) lbl_805D40BC == -1) {
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) + lbl_805DF128);
        } else {
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) + lbl_805DF12C);
        }
        if (M2C_FIELD(arg0, f32 *, 0x30) <= (*(f32 *)&TChCrTagInformationStr__data_805DF108)) {
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) (*(f32 *)&TChCrTagInformationStr__data_805DF108);
            queue_destruction__7TObjectFv();
        }
        break;
    }
}
#pragma pop

void *__ct__22TChCrTagInformationStrFv(void *arg0, M2C_UNK arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TChCrTagInformationStr;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D40B8;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) <= 2) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0x11;
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) * 7);
    } else {
        M2C_FIELD(arg0, s32 *, 0x24) = 0x12;
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((M2C_FIELD(arg0, s32 *, 0x20) - 3) * 7);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 5;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) TChCrTagInformationStr__data_805DF108;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

}
