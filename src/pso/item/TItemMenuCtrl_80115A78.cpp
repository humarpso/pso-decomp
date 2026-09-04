#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_menu__13TItemMenuCtrlFUi(u32 arg0);
M2C_UNK TItemMenuCtrl__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80115AF0(u32, s32);
M2C_UNK queue_destruction__7TObjectFv(u32);

extern u32 TItemMenuCtrl__data_805D54C0;
extern s32 tl_05;

void open_menu__13TItemMenuCtrlFUi(u32 arg0) {
    u32 obj;
    if (((u32) TItemMenuCtrl__data_805D54C0 == 0U) && ((obj = __nw__7TObjectFUl(0x20)) != 0U)) {
        TItemMenuCtrl__ct(obj, tl_05);
    }
    if (arg0 < 7U) {
        if (arg0 == 0) {
            queue_destruction__7TObjectFv(TItemMenuCtrl__data_805D54C0);
            return;
        }
        fn_80115AF0(TItemMenuCtrl__data_805D54C0, 1 << arg0);
    }
}

}
