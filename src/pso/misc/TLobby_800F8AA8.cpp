#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void wait_ready_loop__6TLobbyFv(void);
s32 TLobby__sub_800F8FB8();
M2C_UNK TLobby__sub_801384E4();
M2C_UNK set_state__15TAdPlayerLoadGCFi(M2C_UNK);
s32 get_main_phase();
M2C_UNK render_tick__Fv();

extern s8 lbl_805D5359;

void wait_ready_loop__6TLobbyFv(void) {
    lbl_805D5359 = 0;
loop_1:
    if (TLobby__sub_800F8FB8() != 1) {
        if (get_main_phase() == 0xF) {
            TLobby__sub_801384E4();
        }
        set_state__15TAdPlayerLoadGCFi(1);
        lbl_805D5359 = 1;
        render_tick__Fv();
        goto loop_1;
    }
}

typedef struct {
    f32 *pos;
    s32 *ids;
    s32 a;
    s32 n;
} Desc_800F8FB8;

typedef struct {
    u8 *str;
    f32 x;
    f32 y;
} Msg_800F8FB8;

s32 DVDGetDriveStatus(void);
void TCameraCtrl__sub_80068EF0(void);
void restore_full_screen_view__11TCameraCtrlFv(void);
void flush_pending__6TLobbyFv(void);
void TLobby__sub_800F8DD8(void);
void draw_fullscreen_texture_quad__6TLobbyFPv(s32);
void set_depth_buffer_settings_1__Fv(void);
void restore_saved_depth_alpha_state(void);
void draw_string__14TObjWarpStringFPviff(u8 *arg0, s32 arg1, f32 farg0, f32 farg1);
s32 check_reset_button__16TKeyBoardControlFv(void);
s8 func_801A5E54__Fv(void);
void controller_stuff__Fv(void);
void reset_system(void);
void system_reset(void);
void draw_tri_fan_2d__14TObjCMHairMenuFPviif(Desc_800F8FB8 *, s32, s32, f32);
s32 DVDCheckDisk(void);
void set_perspective_projection_from_fov(s32, f32, f32, f32);
void abs__4cXyzCFv(s32, s32);
void func_803DCDFC__Fv(void);
extern Msg_800F8FB8 lbl_80499A54[];
extern Msg_800F8FB8 lbl_80499A90[];
extern u8 lbl_805D533C;
extern s32 lbl_805D534C;
extern const f32 lbl_805DA928;
extern const f32 lbl_805DA92C;
extern const f32 lbl_805DA934;
extern const f32 lbl_805DA938;
extern const f32 lbl_805DA93C;
extern const f32 lbl_805DA940;
extern const f32 lbl_805DA944;

#define show_msg_800F8FB8(arr, i) ((void (*)(f32, f32, u8 *, s32))draw_string__14TObjWarpStringFPviff)(arr[i].x, arr[i].y, arr[i].str, 0x8FFFFFFF)

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
s32 TLobby__sub_800F8FB8(void) {
    f32 pos[8];
    Desc_800F8FB8 d;
    s32 ids[4];
    s32 status;
    Desc_800F8FB8 *pd = &d;

    abs__4cXyzCFv(0, 8);
    abs__4cXyzCFv(1, 6);
    d.pos = pos;
    d.ids = ids;
    d.a = 0;
    d.n = 4;
    pd->pos[0] = lbl_805DA928;
    pd->pos[1] = lbl_805DA928;
    pd->ids[0] = -1;
    pd->pos[2] = lbl_805DA934;
    pd->pos[3] = lbl_805DA928;
    pd->ids[1] = -1;
    pd->pos[4] = lbl_805DA934;
    pd->pos[5] = lbl_805DA938;
    pd->ids[2] = -1;
    pd->pos[6] = lbl_805DA928;
    pd->pos[7] = lbl_805DA938;
    pd->ids[3] = -1;
    set_depth_buffer_settings_1__Fv();
    draw_tri_fan_2d__14TObjCMHairMenuFPviif(&d, 4, 0x12, lbl_805DA93C);
    status = DVDGetDriveStatus();
    restore_full_screen_view__11TCameraCtrlFv();
    if (DVDCheckDisk() == 0 && (check_reset_button__16TKeyBoardControlFv() != 0 || func_801A5E54__Fv() != 0)) {
        reset_system();
    }
    switch (status) {
    case -1:
        func_803DCDFC__Fv();
        set_perspective_projection_from_fov(0x3555, lbl_805DA940, lbl_805DA92C, lbl_805DA944);
        if (lbl_805D533C != 0) {
            draw_fullscreen_texture_quad__6TLobbyFPv(0);
        } else {
            show_msg_800F8FB8(lbl_80499A54, 0);
        }
        break;
    case 1:
        controller_stuff__Fv();
        if (lbl_805D534C != 0 && (check_reset_button__16TKeyBoardControlFv() != 0 || func_801A5E54__Fv() != 0)) {
            system_reset();
        }
        break;
    case 4:
        func_803DCDFC__Fv();
        set_perspective_projection_from_fov(0x3555, lbl_805DA940, lbl_805DA92C, lbl_805DA944);
        controller_stuff__Fv();
        if (lbl_805D533C != 0) {
            draw_fullscreen_texture_quad__6TLobbyFPv(1);
        } else {
            show_msg_800F8FB8(lbl_80499A54, 1);
        }
        if (check_reset_button__16TKeyBoardControlFv() != 0 || func_801A5E54__Fv() != 0) {
            system_reset();
        }
        break;
    case 5:
        func_803DCDFC__Fv();
        set_perspective_projection_from_fov(0x3555, lbl_805DA940, lbl_805DA92C, lbl_805DA944);
        controller_stuff__Fv();
        if (lbl_805D533C != 0) {
            draw_fullscreen_texture_quad__6TLobbyFPv(2);
        } else if (get_main_phase() == 0xF) {
            show_msg_800F8FB8(lbl_80499A90, 0);
        } else {
            show_msg_800F8FB8(lbl_80499A54, 2);
        }
        if (check_reset_button__16TKeyBoardControlFv() != 0 || func_801A5E54__Fv() != 0) {
            system_reset();
        }
        break;
    case 6:
        func_803DCDFC__Fv();
        set_perspective_projection_from_fov(0x3555, lbl_805DA940, lbl_805DA92C, lbl_805DA944);
        controller_stuff__Fv();
        if (lbl_805D533C != 0) {
            draw_fullscreen_texture_quad__6TLobbyFPv(3);
        } else {
            show_msg_800F8FB8(lbl_80499A54, 3);
        }
        if (check_reset_button__16TKeyBoardControlFv() != 0 || func_801A5E54__Fv() != 0) {
            system_reset();
        } else {
            TLobby__sub_800F8DD8();
        }
        break;
    case 11:
        func_803DCDFC__Fv();
        set_perspective_projection_from_fov(0x3555, lbl_805DA940, lbl_805DA92C, lbl_805DA944);
        if (lbl_805D533C != 0) {
            draw_fullscreen_texture_quad__6TLobbyFPv(4);
        } else {
            show_msg_800F8FB8(lbl_80499A54, 4);
        }
        if (check_reset_button__16TKeyBoardControlFv() != 0 || func_801A5E54__Fv() != 0) {
            system_reset();
        } else {
            TLobby__sub_800F8DD8();
        }
        break;
    }
    restore_saved_depth_alpha_state();
    TCameraCtrl__sub_80068EF0();
    if (status == 4 || status == 5 || status == 6 || status == -1 || status == 11) {
        return 0;
    }
    if (status == 0) {
        flush_pending__6TLobbyFv();
    }
    return 1;
}
#pragma pop

}
