#pragma push

#include "types.h"

extern "C" {
extern u8 lbl_805D533C;
extern u8 lbl_8049C61C[];
void TLobby__sub_803DA16C(void *p);
void release_menu_font__6TLobbyFv(void);
extern u8 lbl_805D533C;
extern u8 lbl_8049C61C[];
extern u8 lbl_80499AA0[];
extern const char lbl_8043D9F4[];
void *tmp_buf_use_req__6TLobbyFPv(const char *);
s32 prs_decompress_buffer(void *, void *);
s32 load_gvm_texture_archive(void *, void *);
void tmp_buf_release__6TLobbyFi(const char *s);
void load_font_texture__6TLobbyFv(void);
void set_global_param__8TObjFishFi(void *);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv();
void draw_textured_quad_at_depth(void *, f32);
void set_draw_texture_and_color(void *, int);
extern u8 lbl_8049C61C[];
void draw_fullscreen_texture_quad__6TLobbyFPv(void *arg0);
}

extern "C" {

void TLobby__sub_800F8DD8(void);
void TLobby__sub_800F8F34(void);
void set_read_params__6TLobbyFiii(int a0, int a1, int a2);

    extern int lbl_805D5340;
    extern int lbl_805D5344;
    extern int lbl_805D5348;
void set_read_params__6TLobbyFiii(int a0, int a1, int a2) { lbl_805D5340 = a0; lbl_805D5344 = a1; lbl_805D5348 = a2; }

    extern int lbl_805D534C;
void TLobby__sub_800F8DD8(void) { lbl_805D534C = 1; }

    extern unsigned char lbl_805D5358;

void draw_fullscreen_texture_quad__6TLobbyFPv(void *arg0) {
    f32 v[8];
    v[0] = 128.0f;
    v[1] = 48.0f;
    v[2] = 512.0f;
    v[3] = 432.0f;
    v[5] = v[4] = 0.0f;
    v[7] = v[6] = 1.0f;
    set_global_param__8TObjFishFi(lbl_8049C61C);
    begin_screen_draw(0);
    set_draw_texture_and_color(arg0, -1);
    draw_textured_quad_at_depth(v, (0.5f));
    get_player__20TWindowSubStatusDispFv();
}

void release_menu_font__6TLobbyFv(void) {
    if (lbl_805D533C) {
        TLobby__sub_803DA16C(lbl_8049C61C);
    }
    lbl_805D533C = 0;
}

void load_font_texture__6TLobbyFv(void) {
    void *file = tmp_buf_use_req__6TLobbyFPv(lbl_8043D9F4);
    if (file != 0) {
        s32 r;
        prs_decompress_buffer(lbl_80499AA0, file);
        r = load_gvm_texture_archive(file, lbl_8049C61C);
        tmp_buf_release__6TLobbyFi(lbl_8043D9F4);
        lbl_805D533C = 1;
        if (r == -1) {
            lbl_805D533C = 0;
        }
    }
}

void TLobby__sub_800F8F34(void) { lbl_805D5358 = 1; }

}

#pragma pop

#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state_byte__6TLobbyFv(void);

#define lbl_805D5358 (*(s8 *)&lbl_805D5358)
extern u8 lbl_805D5359;

void reset_state_byte__6TLobbyFv(void) {
    if ((u8) lbl_805D5359 == 0) {
        lbl_805D5358 = 0;
    }
}

}

#pragma pop

#undef lbl_805D5358
#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void wait_ready_loop__6TLobbyFv(void);
s32 run_disk_error_check__6TLobbyFv();
M2C_UNK TLobby__sub_801384E4();
M2C_UNK set_state__15TAdPlayerLoadGCFi(M2C_UNK);
s32 get_main_phase();
M2C_UNK render_tick__Fv();

#define lbl_805D5359 (*(s8 *)&lbl_805D5359)

void wait_ready_loop__6TLobbyFv(void) {
    lbl_805D5359 = 0;
loop_1:
    if (run_disk_error_check__6TLobbyFv() != 1) {
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
#define lbl_805D534C (*(s32 *)&lbl_805D534C)

#define show_msg_800F8FB8(arr, i) ((void (*)(f32, f32, u8 *, s32))draw_string__14TObjWarpStringFPviff)(arr[i].x, arr[i].y, arr[i].str, 0x8FFFFFFF)

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
s32 run_disk_error_check__6TLobbyFv(void) {
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
    pd->pos[0] = (0.0f);
    pd->pos[1] = (0.0f);
    pd->ids[0] = -1;
    pd->pos[2] = (6.4e+02f);
    pd->pos[3] = (0.0f);
    pd->ids[1] = -1;
    pd->pos[4] = (6.4e+02f);
    pd->pos[5] = (4.8e+02f);
    pd->ids[2] = -1;
    pd->pos[6] = (0.0f);
    pd->pos[7] = (4.8e+02f);
    pd->ids[3] = -1;
    set_depth_buffer_settings_1__Fv();
    draw_tri_fan_2d__14TObjCMHairMenuFPviif(&d, 4, 0x12, (-0.9f));
    status = DVDGetDriveStatus();
    restore_full_screen_view__11TCameraCtrlFv();
    if (DVDCheckDisk() == 0 && (check_reset_button__16TKeyBoardControlFv() != 0 || func_801A5E54__Fv() != 0)) {
        reset_system();
    }
    switch (status) {
    case -1:
        func_803DCDFC__Fv();
        set_perspective_projection_from_fov(0x3555, (1.1333334f), (1.0f), (2.1e+04f));
        if (lbl_805D533C != 0) {
            ((void (*)(s32))draw_fullscreen_texture_quad__6TLobbyFPv)(0);
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
        set_perspective_projection_from_fov(0x3555, (1.1333334f), (1.0f), (2.1e+04f));
        controller_stuff__Fv();
        if (lbl_805D533C != 0) {
            ((void (*)(s32))draw_fullscreen_texture_quad__6TLobbyFPv)(1);
        } else {
            show_msg_800F8FB8(lbl_80499A54, 1);
        }
        if (check_reset_button__16TKeyBoardControlFv() != 0 || func_801A5E54__Fv() != 0) {
            system_reset();
        }
        break;
    case 5:
        func_803DCDFC__Fv();
        set_perspective_projection_from_fov(0x3555, (1.1333334f), (1.0f), (2.1e+04f));
        controller_stuff__Fv();
        if (lbl_805D533C != 0) {
            ((void (*)(s32))draw_fullscreen_texture_quad__6TLobbyFPv)(2);
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
        set_perspective_projection_from_fov(0x3555, (1.1333334f), (1.0f), (2.1e+04f));
        controller_stuff__Fv();
        if (lbl_805D533C != 0) {
            ((void (*)(s32))draw_fullscreen_texture_quad__6TLobbyFPv)(3);
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
        set_perspective_projection_from_fov(0x3555, (1.1333334f), (1.0f), (2.1e+04f));
        if (lbl_805D533C != 0) {
            ((void (*)(s32))draw_fullscreen_texture_quad__6TLobbyFPv)(4);
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

#pragma pop

#undef lbl_805D5359
#undef lbl_805D534C
