#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__17TMedicalCenterMesFPv(void* p);
u32 create_message_window__17TMedicalCenterMesFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
u32 create_window__17TMedicalCenterMesFPvii(void *arg0, s32 arg1, s32 arg2);
void *destroy__17TMedicalCenterMesFPvs(void *arg0, s16 arg1);
void show_message__17TMedicalCenterMesFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 get_shop_text(s32);
M2C_UNK TQuestVmDownLoadServer__sub_80222774(void *, s32, void *);
M2C_UNK TWindowMessagePage__sub_8026AE20(u32, void *, s32);
u32 TWindowMessagePage__sub_8026AE7C(s32, s32, M2C_UNK, s32);
int TWindow__close(void*);
M2C_UNK __dl__FPv(void *);
s32 is_camera_ctrl_active__6TLobbyFv();
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_position_xy(u32, f32, f32);
u32 set_text__18TWindowMessagePageFiii(s32, s32, M2C_UNK);

void show_message__17TMedicalCenterMesFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) != 0U) {
        temp_r31 = get_shop_text(arg1);
        memset(arg0 + 4, 0, 0x200);
        TQuestVmDownLoadServer__sub_80222774(arg0, temp_r31, arg0 + 4);
        TWindowMessagePage__sub_8026AE20(M2C_FIELD(arg0, u32 *, 0x20C), arg0 + 4, arg2 | 0x80);
    }
}

void close__17TMedicalCenterMesFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20c) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x20c))); *(int*)((char*)p + 0x20c) = 0; } }

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
        set_position_xy(M2C_FIELD(arg0, u32 *, 0x20C), var_f31, var_f31);
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
        set_position_xy(M2C_FIELD(arg0, u32 *, 0x20C), var_f31, var_f31);
        return M2C_FIELD(arg0, u32 *, 0x20C);
    }
    return 0U;
}

extern M2C_UNK lbl_804CA27C[];

void *destroy__17TMedicalCenterMesFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0) = lbl_804CA27C;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) != 0U) {
            TWindow__close((void*)(M2C_FIELD(arg0, void **, 0x20C)));
            M2C_FIELD(arg0, u32 *, 0x20C) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
