#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowChoiceSetting__sub_8026886C(void *arg0);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_80266B18(void *, s32);
void TWindowChoiceSetting__sub_802688F8(void *arg0);
void TWindowChoiceSetting__sub_80268794(void *arg0);
s32 fn_80249604();
void fn_80268494(void *arg0);
M2C_UNK fn_80223B88(void *, s16);
M2C_UNK fn_80269064();
void fn_80268468(void* p);
void TWindowSubTradeMain__sub_80268478(void* p);
int fn_80268488(void* p);

void fn_80268468(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffffbf; }
void TWindowSubTradeMain__sub_80268478(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffff7f; }
int fn_80268488(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }
void fn_80268494(void *arg0) {
    fn_80223B88(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    fn_80269064();
}
int fn_802684BC(void) { return 0; }
int fn_8026853C(void) { return 0; }
int fn_802685C4(void) { return 0; }
int fn_80268650(void) { return 0; }
int fn_802686D4(void) { return 0; }
int fn_80268738(void) { return 0; }
void TWindowChoiceSetting__sub_80268794(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (fn_80249604() == 0)) {
        fn_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}
int fn_802687F8(void) { return 0; }
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
int fn_80268984(void) { return 0; }

}
