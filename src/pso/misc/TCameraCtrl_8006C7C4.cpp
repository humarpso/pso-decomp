#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__11TCameraCtrlFPv(void *arg0);
void *TCameraCtrl__sub_8006C88C(void *arg0, s16 arg1);
void *TCameraCtrl__vt10(void);
void *TCameraCtrl__sub_8006A03C(u32);
void *TCameraCtrl__sub_8006C8E4(void *);
void *TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void fn_800686BC(void *, int);

void *TCameraCtrl__vt10(void) {
    void *o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = TCameraCtrl__sub_8006C8E4(o);
    }
    return o;
}

extern u32 lbl_805D4DF0;
extern const f32 lbl_805D9038;

void update__11TCameraCtrlFPv(void *arg0) {
    void *temp_r31;
    void *temp_r3;

    if ((u32) lbl_805D4DF0 != 0U) {
        temp_r31 = TCameraCtrl__sub_8006A03C(lbl_805D4DF0);
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(0);
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_r3, f32 *, 0x38);
            M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (lbl_805D9038 + M2C_FIELD(temp_r3, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(temp_r3, f32 *, 0x40);
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(temp_r31, f32 *, 0x1C);
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_r31, f32 *, 0x20);
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_r31, f32 *, 0x24);
            M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(temp_r31, f32 *, 0x10);
        }
    }
}

extern M2C_UNK lbl_80488D70[];

void *TCameraCtrl__sub_8006C88C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488D70;
        fn_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
