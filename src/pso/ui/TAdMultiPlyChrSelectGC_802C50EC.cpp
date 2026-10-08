#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802C658C_TAdMultiPlyChrSelectGC__data_804E0A48 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802C6848_lbl_804E0B00 {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef struct S_802C59EC {
    u8 pad0[0x444];
    s32 a[4][3];
    u8 pad474[0x4DC - 0x474];
    s32 f4DC[3];
    u8 pad4E8[0x500 - 0x4E8];
    s32 b[4][3];
} S_802C59EC;

typedef struct G_802C6A10 { s32 value; u8 remaining[0xC]; } G_802C6A10;

struct S_802C5594 {
    u8 pad0[0x4DC];
    s32 x[3];
    u8 pad4E8[0x500 - 0x4E8];
    s32 y[4][3];
    s32 f530;
};

struct E_802C5944 { f32 x; f32 y; u8 pad[0x18]; };

struct V_802C5944 { f32 x; f32 y; };

struct S_802C5944 {
    u8 pad0[0x24];
    E_802C5944 e[4][3];
    u8 pad1a4[0x384 - 0x1A4];
    V_802C5944 v[4][3];
    u8 pad3e4[0x444 - 0x3E4];
    s32 a[4][3];
    u8 pad474[0x4A4 - 0x474];
    f32 ox;
    f32 oy;
};

struct E_802C5314 { f32 x; f32 y; f32 z; f32 w; u8 pad[0x10]; };

struct S_802C5314 {
    u8 pad0[0x24];
    E_802C5314 e[4][3];
    u8 pad1a4[0x324 - 0x1A4];
    f32 r324[8];
    f32 r344[8];
    f32 r364[8];
    u8 pad384[0x474 - 0x384];
    s32 sel[4][3];
    u8 pad4a4[0x500 - 0x4A4];
    s32 y[4][3];
};

struct S_802C6008 {
    u8 pad0[0x1C];
    s32 f1C;
    u8 pad20[0x4AC - 0x20];
    s32 sel[4][3];
    s32 f4DC[4];
    s32 f4EC;
    u8 pad4f0[0x8];
    s32 f4F8;
};

struct S_802C61E4 {
    u8 pad0[0x1C];
    s32 f1C;
    u8 pad20[0x4AC - 0x20];
    s32 sel[4][3];
    s32 f4DC[4];
    s32 f4EC;
    u8 pad4f0[0x8];
    s32 f4F8;
};

typedef s32 M2C_UNK;
typedef struct Jump_802C5C84 {
    s32 v[4];
} Jump_802C5C84;

typedef struct Self_802C5C84 {
    u8 pad0[0x4AC];
    s32 f4AC[5][3];
    u8 pad4E8[0x4EC - 0x4E8];
    s32 f4EC;
} Self_802C5C84;

struct S_802C6AC8 {
    u8 pad0[0x20];
    s32 f20;
    u8 pad24[0x444 - 0x24];
    s32 alpha[4][3];
    s32 col[4][3];
    u8 pad4a4[8];
    s32 sel[4][3];
    s32 f4DC[4];
    s32 f4EC;
    u8 pad4f0[0x8];
    s32 f4F8;
    s32 f4FC;
    u8 pad500[0x530 - 0x500];
    s32 f530;
    s32 f534;
};

struct Pad_802C6AC8 { u8 pad[0x20]; u8 ctl[0x30]; };

extern "C" {
void split_slot_index__22TAdMultiPlyChrSelectGCFiPvPv(s32 arg0, s32 *arg1, s32 *arg2);
void TAdMultiPlyChrSelectGC__sub_802C65C0(s32 arg0);
int TAdMultiPlyChrSelectGC__sub_802C6920(void);
    extern int TAdMultiPlyChrSelectGC__data_805D67D8;
void init__22TAdMultiPlyChrSelectGCFv(void);
extern int TAdMultiPlyChrSelectGC__data_805D67D8;
extern s32 TAdMultiPlyChrSelectGC__select_mode;
extern s32 TAdMultiPlyChrSelectGC__selected_slot;
s32 get_status__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_80299454();
int TAdMultiPlyChrSelectGC__sub_802C6920(void);
s32 is_selection_confirmed__22TAdMultiPlyChrSelectGCFv(void);
s32 count_ready__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C658C(s32 arg0);
extern int TAdMultiPlyChrSelectGC__data_805D67D8;
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(s32);
s32 find_active_slot__22TAdMultiPlyChrSelectGCFv(void);
u8 * TKeyBoardControl__sub_803DEB74(u32);
extern RecoveredGlobal_802C6848_lbl_804E0B00 lbl_804E0B00;
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32 arg0);
s32 TAdMultiPlyChrSelectGC__sub_802C6558(void);
extern const f32 TAdMultiPlyChrSelectGC__data_805DE56C;
void clear_slot_entries__22TAdMultiPlyChrSelectGCFPvi(S_802C59EC *arg0, s32 arg1);
extern s32 lbl_80471A88[][5];
extern s32 TAdMultiPlyChrSelectGC__data_804E0A68[][5];
void reset_slot_selection_table__22TAdMultiPlyChrSelectGCFv(void);
extern s32 TAdMultiPlyChrSelectGC__data_804E0A68[][5];
void find_first_open_cell__22TAdMultiPlyChrSelectGCFiPv(s32 arg0, u32 *arg1);
extern int TAdMultiPlyChrSelectGC__data_805D67D8;
void add_selected_slot__22TAdMultiPlyChrSelectGCFv(void);
extern int TAdMultiPlyChrSelectGC__data_805D67D8;
void reset_slot_selection_table__22TAdMultiPlyChrSelectGCFv(void);
void reset_slot_selections__22TAdMultiPlyChrSelectGCFv(void);
extern int TAdMultiPlyChrSelectGC__data_805D67D8;
extern const f32 TAdMultiPlyChrSelectGC__data_805DE56C;
void reset_cursor_state__22TAdMultiPlyChrSelectGCFPv(S_802C5594 *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *);
void init_slot_position__22TAdMultiPlyChrSelectGCFPviii(S_802C5944 *arg0, s32 arg1, s32 arg2, s32 arg3);
void remove_selected_slot__22TAdMultiPlyChrSelectGCFi(s32 arg0);
s32 count_ready__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C6558(void);
s32 get_field_20__22TAdMultiPlyChrSelectGCFPv();
M2C_UNK get_state__22TAdMultiPlyChrSelectGCFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK abs__4cXyzCFv(int, int);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK set_draw_texture_and_color(int, int);
extern s32 lbl_805D67D4;
extern s32 TAdMultiPlyChrSelectGC__select_mode;
extern const f32 lbl_805DE57C;
extern const f32 lbl_805DE580;
void draw_selection_cursors__22TAdMultiPlyChrSelectGCFPv(S_802C5314 *self);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(void *, int, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5F1C(void *, int);
extern u8 lbl_8050E3B8[];
extern int TAdMultiPlyChrSelectGC__data_805D67D8;
extern s32 TAdMultiPlyChrSelectGC__selected_slot;
void update_option_cursor__22TAdMultiPlyChrSelectGCFPv(S_802C6008 *self);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(void *, int, int, int);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5F1C(void *, int);
s32 count_ready__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C6558(void);
extern u8 lbl_8050E3B8[];
extern int TAdMultiPlyChrSelectGC__data_805D67D8;
void handle_dpad_input__22TAdMultiPlyChrSelectGCFPv(S_802C61E4 *self);
M2C_UNK play_sound_effect(int, void *, int, int);
extern s32 TAdMultiPlyChrSelectGC__data_804E0A68[][5];
extern Jump_802C5C84 lbl_80471B00[][5];
extern int TAdMultiPlyChrSelectGC__data_805D67D8;
void move_cursor__22TAdMultiPlyChrSelectGCFPviiiii(Self_802C5C84 *self, s32 x_, s32 y_, s32 dx, s32 dy, s32 depth);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
void find_first_open_cell__22TAdMultiPlyChrSelectGCFiPv(s32 arg0, u32 *arg1);
void update_option_cursor__22TAdMultiPlyChrSelectGCFPv(S_802C6008 *self);
void handle_dpad_input__22TAdMultiPlyChrSelectGCFPv(S_802C61E4 *self);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(s32);
s32 count_ready__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C6558(void);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32 arg0);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void);
s32 find_active_slot__22TAdMultiPlyChrSelectGCFv(void);
extern u8 lbl_8050E3B8[];
extern int TAdMultiPlyChrSelectGC__data_805D67D8;
extern s32 TAdMultiPlyChrSelectGC__select_mode;
void update_selection__22TAdMultiPlyChrSelectGCFPv(S_802C6AC8 *o);
}

extern "C" {

void update__22TAdMultiPlyChrSelectGCFi(s32 arg0);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C50EC(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C522C(s32);
s32 get_state_flag__9TMainTaskFv();

extern s32 TAdMultiPlyChrSelectGC__select_mode;

void *TAdMultiPlyChrSelectGC__data_804E0A48[4] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};
void *TAdMultiPlyChrSelectGC__data_804E0A58[4] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};
s32 TAdMultiPlyChrSelectGC__data_804E0A68[6][5] = {
    0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
};
void *TAdMultiPlyChrSelectGC__data_804E0AE0[4] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};
void *TAdMultiPlyChrSelectGC__data_804E0AF0[4] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};
#define TAdMultiPlyChrSelectGC__data_804E0A48 (*(RecoveredGlobal_802C658C_TAdMultiPlyChrSelectGC__data_804E0A48 *)TAdMultiPlyChrSelectGC__data_804E0A48)
#define TAdMultiPlyChrSelectGC__data_804E0A58 ((s32 *)TAdMultiPlyChrSelectGC__data_804E0A58)
#define TAdMultiPlyChrSelectGC__data_804E0AE0 ((s32 *)TAdMultiPlyChrSelectGC__data_804E0AE0)
#define TAdMultiPlyChrSelectGC__data_804E0AF0 ((f32 *)TAdMultiPlyChrSelectGC__data_804E0AF0)

void draw_selection_cursors__22TAdMultiPlyChrSelectGCFPv(S_802C5314 *self) {
    u32 i;
    u32 j;
    s32 n;
    s32 m;
    if (TAdMultiPlyChrSelectGC__select_mode == 0) {
        n = count_ready__22TAdMultiPlyChrSelectGCFv();
        m = TAdMultiPlyChrSelectGC__sub_802C6558();
        if (m == n) {
            return;
        }
    }
    if (TAdMultiPlyChrSelectGC__select_mode == 1) {
        get_state__22TAdMultiPlyChrSelectGCFv();
        get_state__22TAdMultiPlyChrSelectGCFv();
        if (get_field_20__22TAdMultiPlyChrSelectGCFPv() < 0xD) {
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            if (self->y[i][j] != 0) {
                self->r324[0] = lbl_805DE57C + self->e[i][j].x;
                self->r324[2] = self->e[i][j].z - lbl_805DE57C;
                self->r324[1] = self->e[i][j].y;
                self->r324[3] = self->e[i][j].w;
                self->r344[0] = self->e[i][j].x;
                self->r344[2] = lbl_805DE57C + self->r344[0];
                self->r344[1] = self->e[i][j].y;
                self->r344[3] = self->e[i][j].w;
                self->r364[0] = self->e[i][j].z - lbl_805DE57C;
                self->r364[2] = lbl_805DE57C + self->r364[0];
                self->r364[1] = self->e[i][j].y;
                self->r364[3] = self->e[i][j].w;
                abs__4cXyzCFv(0, 8);
                abs__4cXyzCFv(1, 0xA);
                begin_screen_draw(1);
                set_global_param__8TObjFishFi(lbl_805D67D4);
                set_draw_texture_and_color(0, self->sel[i][j]);
                draw_textured_quad_at_depth(self->r324, lbl_805DE580);
                draw_textured_quad_at_depth(self->r344, lbl_805DE580);
                draw_textured_quad_at_depth(self->r364, lbl_805DE580);
                get_player__20TWindowSubStatusDispFv();
                abs__4cXyzCFv(0, 8);
                abs__4cXyzCFv(1, 6);
            }
        }
    }
}

void update__22TAdMultiPlyChrSelectGCFi(s32 arg0) {
    if (get_state_flag__9TMainTaskFv() != 1) {
        draw_selection_cursors__22TAdMultiPlyChrSelectGCFPv((S_802C5314 *)(arg0));
        switch ((s32) TAdMultiPlyChrSelectGC__select_mode) {
        case 0:
            TAdMultiPlyChrSelectGC__sub_802C522C(arg0);
            return;
        case 1:
            TAdMultiPlyChrSelectGC__sub_802C50EC(arg0);
            break;
        }
    }
}

void reset_cursor_state__22TAdMultiPlyChrSelectGCFPv(S_802C5594 *arg0) {
    u32 i;
    s32 j;
    for (i = 0; i < 4; i++) {
        TAdMultiPlyChrSelectGC__data_804E0AE0[i] = 0;
        TAdMultiPlyChrSelectGC__data_804E0AF0[i] = TAdMultiPlyChrSelectGC__data_805DE56C;
        for (j = 0; j < 3; j++) {
            arg0->y[i][j] = 0;
            arg0->x[j] = 0;
        }
    }
    (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8) = 0;
    arg0->f530 = 0;
}

void init_slot_position__22TAdMultiPlyChrSelectGCFPviii(S_802C5944 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&arg0->v[arg2][arg3]);
    arg0->e[arg2][arg3].x = arg0->v[arg2][arg3].x;
    arg0->e[arg2][arg3].y = arg0->v[arg2][arg3].y;
    arg0->e[arg2][arg3].x = arg0->v[arg2][arg3].x + arg0->ox;
    arg0->e[arg2][arg3].y = arg0->v[arg2][arg3].y + arg0->oy;
    arg0->a[arg2][arg3] = 0;
}

void clear_slot_entries__22TAdMultiPlyChrSelectGCFPvi(S_802C59EC *arg0, s32 arg1) {
    s32 i;
    for (i = 0; i < 4; i++) {
        arg0->a[i][arg1] = 0;
        TAdMultiPlyChrSelectGC__data_804E0AF0[i] = TAdMultiPlyChrSelectGC__data_805DE56C;
        arg0->b[i][arg1] = 0;
    }
    arg0->f4DC[arg1] = 0;
}

void reset_slot_selection_table__22TAdMultiPlyChrSelectGCFv(void) {
    u32 i;
    s32 j;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 5; j++) {
            TAdMultiPlyChrSelectGC__data_804E0A68[i][j] = lbl_80471A88[i][j];
        }
    }
}

void split_slot_index__22TAdMultiPlyChrSelectGCFiPvPv(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 var_r3;
    var_r3 = TAdMultiPlyChrSelectGC__sub_802C658C((s32)(arg0));
    *arg1 = var_r3 > 3;
    if (var_r3 > 3) {
        var_r3 -= 4;
    }
    *arg2 = var_r3;
}

void find_first_open_cell__22TAdMultiPlyChrSelectGCFiPv(s32 arg0, u32 *arg1) {
    u32 p;
    s32 q;
    for (p = 1; p < 3; p++) {
        for (q = 1; q < 5; q++) {
            if (TAdMultiPlyChrSelectGC__data_804E0A68[q][p] == 1) {
                arg1[0] = q;
                arg1[1] = p;
                return;
            }
        }
    }
}

#define WIN_802C6008 ((void *)(lbl_8050E3B8 + TAdMultiPlyChrSelectGC__selected_slot * 0x50 + 0x20))

void move_cursor__22TAdMultiPlyChrSelectGCFPviiiii(Self_802C5C84 *self, s32 x_, s32 y_, s32 dx, s32 dy, s32 depth) {
    s32 x = x_;
    s32 y = y_;
    s32 dir;
    s32 nx;
    s32 ny;
    s32 cnt;
    s32 k;
    x++;
    y++;
    if (dy == -1) dir = 0;
    if (dy == 1) dir = 1;
    if (dx == -1) dir = 2;
    if (dx == 1) dir = 3;
    ny = y + dy;
    nx = x + dx;
    if (TAdMultiPlyChrSelectGC__data_804E0A68[ny][nx] == 1) {
        x += dx;
        y += dy;
        play_sound_effect(0x54100, NULL, 0, 0);
        self->f4EC = x - 1;
        self->f4AC[TAdMultiPlyChrSelectGC__data_805D67D8][self->f4EC] = y - 1;
        return;
    }
    if (TAdMultiPlyChrSelectGC__data_804E0A68[ny][nx] == 0) {
        Jump_802C5C84 j = lbl_80471B00[ny][nx];
        switch (dir) {
        case 0:
        case 1:
            ny += j.v[dir];
            break;
        case 2:
        case 3:
            nx += j.v[dir];
            break;
        }
        ny -= dy;
        nx -= dx;
        move_cursor__22TAdMultiPlyChrSelectGCFPviiiii(self, nx - 1, ny - 1, dx, dy, depth - 1);
        return;
    }
    if (TAdMultiPlyChrSelectGC__data_804E0A68[ny][nx] == -1) {
        if (dy != 0) {
            cnt = 0;
            for (k = 0; k < 4; k++) {
                if (TAdMultiPlyChrSelectGC__data_804E0A68[k + 1][self->f4EC + 1] == -1) {
                    cnt++;
                }
            }
            if (cnt == 4) {
                nx = 3 - x;
                move_cursor__22TAdMultiPlyChrSelectGCFPviiiii(self, nx - 1, y - 1, dx, dy, 4);
            } else {
                move_cursor__22TAdMultiPlyChrSelectGCFPviiiii(self, nx - 1, ny - 1, dx, dy, 4);
            }
            return;
        }
        cnt = 0;
        for (k = 0; k < 4; k++) {
            if (TAdMultiPlyChrSelectGC__data_804E0A68[k + 1][nx] == -1) {
                cnt++;
            }
        }
        if (cnt == 4) {
            return;
        }
        switch (x) {
        case 0:
            nx = 1;
            break;
        case 3:
            nx = 2;
            break;
        default:
            nx = 3 - x;
            break;
        }
        if (y < 3) {
            ny = 0;
            dx = 0;
            dy = 1;
        } else {
            ny = 5;
            dx = 0;
            dy = -1;
        }
        move_cursor__22TAdMultiPlyChrSelectGCFPviiiii(self, nx - 1, ny - 1, dx, dy, 4);
    }
}

void update_option_cursor__22TAdMultiPlyChrSelectGCFPv(S_802C6008 *self) {
    TAdMultiPlyChrSelectGC__sub_802C5F1C(self, self->f1C++);
    if (self->f4DC[self->f4EC] != 0 && self->f4F8 == 0) {
        if (dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(WIN_802C6008, 0x10, 6, 1) != 0) {
            play_sound_effect(0x54100, 0, 0, 0);
            self->sel[TAdMultiPlyChrSelectGC__data_805D67D8][self->f4EC]--;
        }
        if (dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(WIN_802C6008, 0x20, 6, 1) != 0) {
            play_sound_effect(0x54100, 0, 0, 0);
            self->sel[TAdMultiPlyChrSelectGC__data_805D67D8][self->f4EC]++;
        }
        if (self->sel[TAdMultiPlyChrSelectGC__data_805D67D8][self->f4EC] > self->f4DC[self->f4EC] - 1) {
            self->sel[TAdMultiPlyChrSelectGC__data_805D67D8][self->f4EC] = 0;
        }
        if (self->sel[TAdMultiPlyChrSelectGC__data_805D67D8][self->f4EC] < 0) {
            self->sel[TAdMultiPlyChrSelectGC__data_805D67D8][self->f4EC] = self->f4DC[self->f4EC] - 1;
        }
    }
    if (TWindowShortListCtrl__check_controller_button(WIN_802C6008, 4) != 0 && self->f4F8 == 0) {
        self->f4F8 = 1;
    }
}

#define WIN_802C61E4 ((void *)(lbl_8050E3B8 + TAdMultiPlyChrSelectGC__data_805D67D8 * 0x50 + 0x20))
void handle_dpad_input__22TAdMultiPlyChrSelectGCFPv(S_802C61E4 *self) {
    s32 n;
    s32 m;
    TAdMultiPlyChrSelectGC__sub_802C5F1C(self, self->f1C++);
    n = count_ready__22TAdMultiPlyChrSelectGCFv();
    m = TAdMultiPlyChrSelectGC__sub_802C6558();
    if (m != n && self->f4DC[self->f4EC] != 0 && self->f4F8 == 0) {
        if (dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(WIN_802C61E4, 0x10, 6, 1) != 0) {
            move_cursor__22TAdMultiPlyChrSelectGCFPviiiii((Self_802C5C84 *)(self), (s32)(self->f4EC), (s32)(self->sel[TAdMultiPlyChrSelectGC__data_805D67D8][self->f4EC]), (s32)(0), (s32)(-1), (s32)(self->f4DC[self->f4EC]));
        }
        if (dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(WIN_802C61E4, 0x20, 6, 1) != 0) {
            move_cursor__22TAdMultiPlyChrSelectGCFPviiiii((Self_802C5C84 *)(self), (s32)(self->f4EC), (s32)(self->sel[TAdMultiPlyChrSelectGC__data_805D67D8][self->f4EC]), (s32)(0), (s32)(1), (s32)(self->f4DC[self->f4EC]));
        }
        if (dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(WIN_802C61E4, 0x80, 6, 1) != 0) {
            move_cursor__22TAdMultiPlyChrSelectGCFPviiiii((Self_802C5C84 *)(self), (s32)(self->f4EC), (s32)(self->sel[TAdMultiPlyChrSelectGC__data_805D67D8][self->f4EC]), (s32)(1), (s32)(0), (s32)(2));
        }
        if (dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(WIN_802C61E4, 0x40, 6, 1) != 0) {
            move_cursor__22TAdMultiPlyChrSelectGCFPviiiii((Self_802C5C84 *)(self), (s32)(self->f4EC), (s32)(self->sel[TAdMultiPlyChrSelectGC__data_805D67D8][self->f4EC]), (s32)(-1), (s32)(0), (s32)(2));
        }
    }
    if (TWindowShortListCtrl__check_controller_button(WIN_802C61E4, 4) != 0 && self->f4F8 == 0) {
        self->f4F8 = 1;
    }
}

void init__22TAdMultiPlyChrSelectGCFv(void) { TAdMultiPlyChrSelectGC__data_805D67D8 = TAdMultiPlyChrSelectGC__sub_802C6920(); TAdMultiPlyChrSelectGC__sub_802C6920(); ((int (*)(void))TAdMultiPlyChrSelectGC__sub_802C65C0)(); }
s32 get_status__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r3 = (s32) (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8);
    if (var_r3 == 0) {
        return 0;
    }
    switch ((s32) TAdMultiPlyChrSelectGC__select_mode) {
    case 0:
        return var_r3;
    case 1:
        return (s32) TAdMultiPlyChrSelectGC__selected_slot;
    default:
        return 0;
    }
}
s32 is_selection_confirmed__22TAdMultiPlyChrSelectGCFv(void) {
    if (TAdMultiPlyChrSelectGC__sub_80299454() != 0) {
        if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
            return ((s32)TAdMultiPlyChrSelectGC__sub_802C6920());
        }
        return 0;
    }
    return 0;
}
s32 count_ready__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r31;
    s32 var_r30;
    var_r31 = 0;
    var_r30 = 0;
    do {
        if (TAdMultiPlyChrSelectGC__sub_802C6848((s32)(var_r30)) != 0) {
            var_r31 += 1;
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    return var_r31;
}

s32 TAdMultiPlyChrSelectGC__sub_802C6558(void) {
    s32 n = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (((s32 *)&TAdMultiPlyChrSelectGC__data_804E0A48)[i] != -1) n++;
    }
    return n;
}

s32 TAdMultiPlyChrSelectGC__sub_802C658C(s32 arg0) {
    s32 temp_r3;
    s32 var_r3;
    var_r3 = arg0;
    if ((var_r3 > 3) || (var_r3 < 0)) {
        var_r3 = 3;
    }
    temp_r3 = M2C_FIELD(((u8 *)(&TAdMultiPlyChrSelectGC__data_804E0A48.value) + (var_r3 * 4)), s32 *, 0);
    if (temp_r3 == -1) {
        return 0;
    }
    return temp_r3;
}

void TAdMultiPlyChrSelectGC__sub_802C65C0(s32 arg0) {
    s32 c;
    s32 r;
    TAdMultiPlyChrSelectGC__data_804E0AE0[arg0] = 0;
    TAdMultiPlyChrSelectGC__data_804E0AF0[arg0] = TAdMultiPlyChrSelectGC__data_805DE56C;
    split_slot_index__22TAdMultiPlyChrSelectGCFiPvPv(arg0, &c, &r);
    s32 ri = r + 1;
    s32 ci = c + 1;
    TAdMultiPlyChrSelectGC__data_804E0A68[ri][ci] = lbl_80471A88[ri][ci];
    ((s32 *)&TAdMultiPlyChrSelectGC__data_804E0A48)[arg0] = -1;
    remove_selected_slot__22TAdMultiPlyChrSelectGCFi(arg0);
}

typedef char RecoveredGlobal_802C6848_lbl_804E0B00_size[sizeof(RecoveredGlobal_802C6848_lbl_804E0B00) == 0x10 ? 1 : -1];
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32 arg0) {
    if ((arg0 < 0) || (arg0 > 3)) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(TKeyBoardControl__sub_803DEB74(M2C_FIELD(((u8 *)(&lbl_804E0B00.value) + (arg0 * 4)), u32 *, 0)), s32 **, 0x30), s32 *, 0) & 1;
}

void remove_selected_slot__22TAdMultiPlyChrSelectGCFi(s32 arg0) {
    u32 i;
    u32 j;
    for (i = 0; i < 4; i++) {
        if (arg0 == TAdMultiPlyChrSelectGC__data_804E0A58[i]) {
            for (j = i; j < 4; j++) {
                if (j < 3) {
                    TAdMultiPlyChrSelectGC__data_804E0A58[j] = TAdMultiPlyChrSelectGC__data_804E0A58[j + 1];
                }
            }
            TAdMultiPlyChrSelectGC__data_804E0A58[3] = -1;
            return;
        }
    }
}

void add_selected_slot__22TAdMultiPlyChrSelectGCFv(void) {
    s32 i;
    if ((*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8) < 0 || (u32)(*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8) >= 4) {
        (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8) = 0;
    }
    for (i = 0; i < 4; i++) {
        if (TAdMultiPlyChrSelectGC__data_804E0A58[i] == -1) {
            TAdMultiPlyChrSelectGC__data_804E0A58[i] = (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8);
            return;
        }
    }
    TAdMultiPlyChrSelectGC__data_804E0A58[3] = (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8);
}

s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void) {
    if (((s32) (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8) < 0) || ((s32) (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8) > 3)) {
        (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8) = 0;
    }
    return (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8);
}

void reset_slot_selections__22TAdMultiPlyChrSelectGCFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TAdMultiPlyChrSelectGC__data_804E0A48)[i] = -1;
        TAdMultiPlyChrSelectGC__data_804E0A58[i] = -1;
    }
    reset_slot_selection_table__22TAdMultiPlyChrSelectGCFv();
    (*(s32 *)&TAdMultiPlyChrSelectGC__data_805D67D8) = 0;
}

s32 find_active_slot__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r31;
    var_r31 = 0;
loop_1:
    if ((TAdMultiPlyChrSelectGC__sub_802C6848((s32)(var_r31)) != 0) && (TAdMultiPlyChrSelectGC__sub_802C64D0(var_r31) == 0)) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 3;
    }
    goto loop_1;
}
#define FIND_SLOT(o) ((s32 (*)(void *))find_active_slot__22TAdMultiPlyChrSelectGCFv)(o)
void update_selection__22TAdMultiPlyChrSelectGCFPv(S_802C6AC8 *o) {
    u32 i;
    u32 j;
    u32 k;
    if (TAdMultiPlyChrSelectGC__sub_802C6848(get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()) == 0 && o->f20 < count_ready__22TAdMultiPlyChrSelectGCFv()) {
        TAdMultiPlyChrSelectGC__data_805D67D8 = FIND_SLOT(o);
        switch (TAdMultiPlyChrSelectGC__select_mode) {
        case 1:
            break;
        case 0: {
            u32 buf[2];
            find_first_open_cell__22TAdMultiPlyChrSelectGCFiPv((s32)o, buf);
            o->f4EC = buf[1] - 1;
            o->sel[TAdMultiPlyChrSelectGC__data_805D67D8][o->f4EC] = buf[0] - 1;
            break;
        }
        }
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(0) == 0 || count_ready__22TAdMultiPlyChrSelectGCFv() < 2) {
        o->f534 = 0;
    } else {
        o->f534 = 1;
    }
    if (o->f534 != 0) {
        switch (TAdMultiPlyChrSelectGC__select_mode) {
        case 0:
            handle_dpad_input__22TAdMultiPlyChrSelectGCFPv((S_802C61E4 *)o);
            if (get_clamped_cursor__22TAdMultiPlyChrSelectGCFv() == 3 && TAdMultiPlyChrSelectGC__sub_802C64D0(3) != 0) {
                s32 n = count_ready__22TAdMultiPlyChrSelectGCFv();
                if (TAdMultiPlyChrSelectGC__sub_802C6558() < n) {
                    TAdMultiPlyChrSelectGC__data_805D67D8 = FIND_SLOT(o);
                }
            }
            break;
        case 1:
            update_option_cursor__22TAdMultiPlyChrSelectGCFPv((S_802C6008 *)o);
            break;
        }
    }
    o->f530 = 0;
    if (o->f534 != 0) {
        for (i = 0; i < 4; i++) {
            if (TWindowShortListCtrl__check_controller_button(((Pad_802C6AC8 *)lbl_8050E3B8)[i].ctl, 8) != 0 && TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
                o->f530 = 1;
            }
        }
    }
    for (k = 0; k < 4; k++) {
        for (j = 0; j < 3; j++) {
            o->alpha[k][j] -= 0x16;
            if (o->alpha[k][j] < 0) {
                o->alpha[k][j] = 0;
            }
        }
    }
    o->alpha[o->sel[TAdMultiPlyChrSelectGC__data_805D67D8][o->f4EC]][o->f4EC] = 0xFF;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            o->col[i][j] = (o->alpha[i][j] << 24) | 0xFFFFFF;
        }
    }
    if (o->f4FC != 0) {
        o->f4F8 = 0;
        o->f4FC = 0;
    }
    o->f20 = count_ready__22TAdMultiPlyChrSelectGCFv();
}

typedef char RecoveredGlobal_802C658C_TAdMultiPlyChrSelectGC__data_804E0A48_size[sizeof(RecoveredGlobal_802C658C_TAdMultiPlyChrSelectGC__data_804E0A48) == 0x10 ? 1 : -1];

}
