#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TCameraCtrl__vt5(void);
void cache_target_and_forward__11TCameraCtrlFii(s32 arg0, s32 arg1);
s32 clamp_distance__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
void* init_defaults__11TCameraCtrlFPv(void* a0);
int TCameraCtrl__sub_80068714(void);
M2C_UNK TCameraCtrl__sub_8006C140(s32, s32);
s32 TObjPlayer__sub_80141F84(s32, s32);
s32 TObjPlayer__sub_801423A4(s32, s32, s32);
void *__nw__7TObjectFUl(int);
void *reset__11TCameraCtrlFPv(void *);

    extern unsigned char lbl_80488B38[];
    extern const float lbl_805D900C;
void* init_defaults__11TCameraCtrlFPv(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B38; *(float*)((char*)a0 + 0x6c) = lbl_805D900C; *(int*)((char*)a0 + 0x38) = 0; return a0; }

s32 clamp_distance__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (TObjPlayer__sub_80141F84(arg1, arg0) < (s32) (arg2 * 0x7F)) {
        return arg1;
    }
    return TObjPlayer__sub_801423A4(arg0, arg1, arg2 * 0x7F);
}

extern void *lbl_805D4DF0;
extern s32 lbl_805D4E18;
extern s32 lbl_805D4E1C;

void cache_target_and_forward__11TCameraCtrlFii(s32 arg0, s32 arg1) {
    if ((void *) lbl_805D4DF0 != NULL) {
        lbl_805D4E18 = M2C_FIELD(lbl_805D4DF0, s32 *, 0x19C);
        lbl_805D4E1C = arg1;
    }
    TCameraCtrl__sub_8006C140(arg0, arg1);
}

void *TCameraCtrl__vt5(void) {
    void *o = __nw__7TObjectFUl(0xA4);
    if (o != NULL) {
        o = reset__11TCameraCtrlFPv(o);
    }
    return o;
}

}
