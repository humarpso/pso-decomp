#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8001C8B8 { char pad[0x18]; };
struct VObj_8001C8B8 : Base_8001C8B8 {
    virtual void m0(s32);
};

extern "C" {

void TLoadCtrl__sub_8001C8B8(void);
M2C_UNK TCameraCtrl__sub_800692D0();
M2C_UNK TCameraCtrl__sub_80069318();
M2C_UNK TCameraCtrl__sub_800693F4();
M2C_UNK TCameraCtrl__sub_8006A31C();
M2C_UNK TCameraCtrl__sub_8006A35C();
M2C_UNK fn_8001D4D0();
M2C_UNK fn_80226D5C();
M2C_UNK fn_8030984C();
M2C_UNK fn_8034AD28();
M2C_UNK queue_destruction__7TObjectFv(u32);

extern u32 lbl_805D4A80;
extern s32 lbl_805D4A84;
extern void *lbl_805D4DF0;

void TLoadCtrl__sub_8001C8B8(void) {
    u32 t;

    t = lbl_805D4A80;
    if (t != 0U) {
        queue_destruction__7TObjectFv(t);
        lbl_805D4A80 = 0U;
    }
    switch (lbl_805D4A84) {
    case 0:
        fn_80226D5C();
        fn_8001D4D0();
        break;
    case 1:
        fn_80226D5C();
        fn_8030984C();
        break;
    case 3:
    case 4:
        fn_80226D5C();
        fn_8034AD28();
        break;
    }
    TCameraCtrl__sub_80069318();
    TCameraCtrl__sub_8006A31C();
    if (lbl_805D4DF0 != NULL) {
        if (lbl_805D4DF0 != NULL) {
            ((VObj_8001C8B8 *)lbl_805D4DF0)->m0(1);
        }
        lbl_805D4DF0 = NULL;
    }
    TCameraCtrl__sub_8006A35C();
    TCameraCtrl__sub_800693F4();
    TCameraCtrl__sub_800692D0();
}

}
