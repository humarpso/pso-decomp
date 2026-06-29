#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 __nw__7TObjectFUl(s32 a0 = 0);
s32 fn_80125AF8(u32 a0 = 0, s32 a1 = 0, u32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
s32 fn_8011E384();
s32 fn_8011E618(void *);
s32 fn_8011F5E0(void *);
s32 fn_801207E8(void *, s32, s32 *);
s32 fn_80121CA8(void *);
s16 fn_801251AC(s32);
s32 TTecGiFoie__sub_802314FC(s32, s32 *, s32);
s32 TItemProArmor__sub_80102C3C(void *);
s32 TItemProArmor__sub_80117D9C(s32, u32, s32, s32);
s32 TItemProArmor__sub_80364300(s32);
void fn_80125C70(void* p);

void fn_80125B80(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    if ((arg0 != 0) && (arg1 != 0U) && ((obj = __nw__7TObjectFUl(0x2C)) != 0U)) {
        fn_80125AF8(obj, arg0, arg1, arg2, arg3);
    }
}
void fn_80125BE4(void *arg0) {
    s32 sp8;

    if (fn_8011E384() != 0) {
        if ((fn_801251AC(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 0) && (fn_801207E8(arg0, 0, &sp8) != 0)) {
            TTecGiFoie__sub_802314FC(M2C_FIELD(arg0, s32 *, 0xF0), &sp8, fn_80121CA8(arg0));
            fn_8011E618(arg0);
        }
    } else {
        fn_8011F5E0(arg0);
    }
}
void fn_80125C70(void* p) { *(s32*)((char*)p + 0x1f8) = -1; }
void fn_80125C7C(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x1F8) = -1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = TItemProArmor__sub_80364300(0x2C);
        if (temp_r3 != 0) {
            TItemProArmor__sub_80117D9C(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x5A);
        }
    }
    fn_8011E618(arg0);
    fn_8011E618(arg0);
}

}
