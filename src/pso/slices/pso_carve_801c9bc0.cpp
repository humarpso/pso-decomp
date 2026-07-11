#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8000FF4C(void *, M2C_UNK);
M2C_UNK fn_8001053C(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_8002AEB8(void *, M2C_UNK);
M2C_UNK fn_800660B8(void *);
M2C_UNK fn_801BA650(void *, M2C_UNK, s16);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
s32 ret_801D26AC();
s32 fn_802034EC();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TTecReverser__sub_80239E44(void *, void *, s32);
extern s32 tl_07;
extern const f32 lbl_805DC374;

void fn_801C9BC0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x12;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    fn_8001053C(arg0);
    fn_8002AEB8(arg0 + 0x644, 0x12C);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) lbl_805DC374;
    fn_8000FF4C(arg0, 0xFFFF);
    fn_801BA650(arg0, 0x12, (s16) ret_801D26AC());
    fn_800660B8(arg0);
    if (fn_802034EC() != 0) {
        void *new_obj = (void *)(size_t)__nw__7TObjectFUl(0x38);
        if (new_obj != 0U) {
            TTecReverser__sub_80239E44(new_obj, arg0, tl_07);
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x548) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x548));
        M2C_FIELD(arg0, u32 *, 0x548) = 0U;
    }
}

}
