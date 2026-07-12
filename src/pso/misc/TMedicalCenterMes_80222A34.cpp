#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 create_message_window__17TMedicalCenterMesFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
u32 create_window__17TMedicalCenterMesFPvii(void *arg0, s32 arg1, s32 arg2);
s32 is_camera_ctrl_active__6TLobbyFv();
M2C_UNK fn_8024422C(u32, f32, f32);
u32 TWindowMessagePage__sub_8026AE7C(s32, s32, M2C_UNK, s32);
u32 set_text__18TWindowMessagePageFiii(s32, s32, M2C_UNK);

extern f32 lbl_805DC71C;
extern f32 lbl_805DC720;

u32 create_message_window__17TMedicalCenterMesFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 var_f31;

    if (is_camera_ctrl_active__6TLobbyFv() > 2) {
        var_f31 = lbl_805DC71C;
    } else {
        var_f31 = lbl_805DC720;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x20C) = TWindowMessagePage__sub_8026AE7C(arg1, arg2, 1, arg3);
        fn_8024422C(M2C_FIELD(arg0, u32 *, 0x20C), var_f31, var_f31);
        return M2C_FIELD(arg0, u32 *, 0x20C);
    }
    return 0U;
}

extern f32 lbl_805DC71C;
extern f32 lbl_805DC720;

u32 create_window__17TMedicalCenterMesFPvii(void *arg0, s32 arg1, s32 arg2) {
    f32 var_f31;

    if (is_camera_ctrl_active__6TLobbyFv() > 2) {
        var_f31 = lbl_805DC71C;
    } else {
        var_f31 = lbl_805DC720;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x20C) = set_text__18TWindowMessagePageFiii(arg1, arg2, 1);
        fn_8024422C(M2C_FIELD(arg0, u32 *, 0x20C), var_f31, var_f31);
        return M2C_FIELD(arg0, u32 *, 0x20C);
    }
    return 0U;
}

}
