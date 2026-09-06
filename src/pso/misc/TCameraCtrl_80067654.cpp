#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_800676A0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
void *__nw__7TObjectFUl(int);
void *TCameraCtrl__sub_800677D4(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *TCameraCtrl__sub_8003CFF4();
f32 TBoss6Kakusan__sub_803D8BD8(void *, int, f32, f32);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
extern const f32 lbl_805D8F28;
extern const f32 lbl_805D8F2C;
extern const f32 lbl_805D8F30;
extern const f32 lbl_805D8F34;
void TCameraCtrl__sub_800676A0(u8 *arg0);
}

extern "C" {

void TCameraCtrl__sub_80067654(void);
void TCameraCtrl__sub_80067658(void);
void TCameraCtrl__sub_8006765C(void);
void TCameraCtrl__sub_80067660(void);
void TCameraCtrl__sub_80067664(void);
void *__dt_deleting__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void TCameraCtrl__sub_800686BC(void *, int);
void __dl__7TObjectFPv(void *);

void TCameraCtrl__sub_80067654(void) {  }
void TCameraCtrl__sub_80067658(void) {  }
void TCameraCtrl__sub_8006765C(void) {  }
void TCameraCtrl__sub_80067660(void) {  }
void TCameraCtrl__sub_80067664(void) {  }

extern M2C_UNK lbl_804887C8[];

void * TCameraCtrl__vt11(void) {
    void *o;
    o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = TCameraCtrl__sub_800677D4(o);
    }
    return o;
}

#pragma push
#pragma fp_contract on
void TCameraCtrl__sub_800676A0(u8 *arg0) {
    Stack_800676A0 stack;
    f32 temp_f1;
    f32 temp_f2;
    u8 *temp_r3;
    u8 *temp_r4;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805D8F28;
    if ((void *) M2C_FIELD(arg0, u8 **, 0x1C) != NULL) {
        temp_r3 = (u8 *)(TCameraCtrl__sub_8003CFF4());
        if (temp_r3 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x48), (int) (temp_r3));
            temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
            stack.sp8 = M2C_FIELD(temp_r4, f32 *, 0x38) - M2C_FIELD(temp_r3, f32 *, 0);
            temp_f2 = M2C_FIELD(temp_r4, f32 *, 0x40);
            temp_f1 = temp_f2 - M2C_FIELD(temp_r3, f32 *, 8);
            stack.spC = lbl_805D8F2C;
            stack.sp10 = temp_f1;
            if (lbl_805D8F2C != TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp8), (int) (temp_r4), (f32) (temp_f1), (f32) (temp_f2))) {
                TNpcPlayer__sub_803D97B4((void *) (&stack.sp8));
                M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((lbl_805D8F30 * stack.sp8) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), f32 *, 0x38));
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) (lbl_805D8F34 + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), f32 *, 0x3C));
                M2C_FIELD(arg0, f32 *, 0x44) = (f32) ((lbl_805D8F30 * stack.sp10) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), f32 *, 0x40));
            }
        }
    }
}
#pragma pop

void *__dt_deleting__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804887C8;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
