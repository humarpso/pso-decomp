#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8025B514(s32, s32, s32, s32);
s32 fn_8025B5AC(s32, s32, s32);
u32 fn_8007EB94(s32);
u32 fn_802880BC(u32, s32, s16);
s32 fn_8028783C(s32 a0 = 0, s32 a1 = 0);
s32 fn_8026906C(void);
void TWindowChoiceSetting__sub_8026886C(void *arg0);
s32 fn_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 fn_80266B18(void *, s32);
void TWindowChoiceSetting__sub_802688F8(void *arg0);
void TWindowChoiceSetting__sub_80268794(void *arg0);
s32 TWindowSubComCard__sub_80249604();
void TWindowSubComCard__sub_80268494(void *arg0);
s32 TWindowSubStatusDisp__sub_80223B88(void * a0 = 0, s16 a1 = 0);
M2C_UNK fn_80269064();
void fn_80268468(void* p);
void TWindowSubTradeMain__sub_80268478(void* p);
int fn_80268488(void* p);

void fn_80268468(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffffbf; }
void TWindowSubTradeMain__sub_80268478(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffff7f; }
int fn_80268488(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }
void TWindowSubComCard__sub_80268494(void *arg0) {
    TWindowSubStatusDisp__sub_80223B88(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    fn_80269064();
}
int fn_802684BC(void) { return 0; }
int fn_8026853C(void) { return 0; }
int fn_802685C4(void) { return 0; }
int TWindowMakeTeam__sub_80268650(void) { return 0; }
void fn_802686D4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x72);
    if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        fn_8025B514(TWindowSubStatusDisp__sub_80223B88(arg0, temp_r4), arg1, arg2, arg3);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}
void fn_80268738(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x72);
    if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        fn_8025B5AC(TWindowSubStatusDisp__sub_80223B88(arg0, temp_r4), arg1, arg2);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}
void TWindowChoiceSetting__sub_80268794(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (TWindowSubComCard__sub_80249604() == 0)) {
        fn_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}
void fn_802687F8(void *arg0) {
    TWindowSubStatusDisp__sub_80223B88(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if (fn_8026906C() == 0) {
        fn_8022675C(0x52D01, 0, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 2);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            fn_8028783C(M2C_FIELD(arg0, s32 *, 0x78), 2);
        }
    }
}
void TWindowChoiceSetting__sub_8026886C(void *arg0) {
    s16 var_r31;

    fn_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (fn_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}
void TWindowChoiceSetting__sub_802688F8(void *arg0) {
    s16 var_r31;

    fn_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = M2C_FIELD(arg0, s16 *, 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (fn_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}
void fn_80268984(void *arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) == 0U) {
        var_r0 = fn_8007EB94(0x24);
        if (var_r0 != 0U) {
            var_r0 = fn_802880BC(var_r0, arg1, M2C_FIELD(arg0, s16 *, 0x20));
        }
        M2C_FIELD(arg0, u32 *, 0x78) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x40);
    }
}

}
