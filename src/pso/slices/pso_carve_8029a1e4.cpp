#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TKeyBoardControl__sub_8000F950();
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TCameraCtrl__sub_8006B368();
M2C_UNK fn_801A3B84();
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8022727C(M2C_UNK *);
s32 fn_80291F9C();
M2C_UNK fn_80299E84(void *);
M2C_UNK fn_80299F44(void *);
M2C_UNK fn_80299F84(void *);
M2C_UNK fn_8029A038(void *);
M2C_UNK fn_8029A0A0(void *);
M2C_UNK fn_8029A0D8(void *);
M2C_UNK fn_8029A110();
extern M2C_UNK lbl_804651E8[];
extern s32 evt2_random_enemies_mode;

void giveup_window_handle_select(void *arg0) {
    s32 temp_r3;

    fn_8029A110();
    temp_r3 = fn_80291F9C();
    switch (temp_r3) {
    case 0:
        fn_8022727C(lbl_804651E8);
        fn_8029A038(arg0);
        fn_80299F44(arg0);
        fn_80299E84(arg0);
        queue_destruction__7TObjectFv(arg0);
        if (TCameraCtrl__sub_8006B368() == 1) {
            fn_801A3B84();
            evt2_random_enemies_mode = 0;
            TKeyBoardControl__sub_8000F950();
        }
        return;
    case 1:
        fn_8022675C(0x52812, 0, 0, 0);
        fn_8029A038(arg0);
        fn_8029A0D8(arg0);
        fn_80299E84(arg0);
        fn_80299F44(arg0);
        M2C_FIELD(arg0, s32 *, 0x28) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x1C) = 4;
        return;
    default:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0)) {
            fn_8029A038(arg0);
            fn_8029A0A0(arg0);
            fn_80299E84(arg0);
            fn_80299F84(arg0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
        break;
    }
}

}
