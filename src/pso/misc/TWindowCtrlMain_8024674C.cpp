#include "types.h"
#include "pso/misc/TWindowCtrlMain.h"
#include "pso/misc/TWindowFukidasi.h"

struct Obj_80246948 { u8 pad[0x2c]; u32 f2c; };

extern "C" {
u32 get_array_entry__20TWindowSubStatusDispFi(void *, int);
s32 clear_visible_flag__20TWindowSubStatusDispFv(int);
s32 set_flag0_bit2__15TWindowHelpItemFv(int);
s32 is_trade_active();
s32 is_active__19TWindowSubShortMailFv();
s32 is_com_card_active();
s32 is_guild_card_receive_active();
void update_entry_visibility__20TWindowSubStatusDispFi(s32 arg0);
u8 TWindowSubAreaMapDisp__sub_80246948(Obj_80246948 *self);
s32 tmp_buf_release__6TLobbyFv(void *);
s32 tmp_buf_use_req__6TLobbyFPCc(void *);
s32 draw_string__9TLanguageFPvPvl(void *, void *, int);
s32 TLobby__sub_8023E554(void *, void *);
s32 set_global_param__8TObjFishFl(void *);
s32 set_entry_index__9TLanguageFll(int, int);
extern s32 lbl_8044E658[];
extern s32 lbl_8044E688[];
extern s32 hud_palette_texture_filename[];
extern s32 lbl_8044E6B0[];
extern s32 lbl_8044E6C4[];
extern s32 lbl_8044E6D8[];
extern s32 lbl_8044E6F0[];
extern s32 lbl_8044E708[];
extern s32 lbl_8044E720[];
extern s32 lbl_8044E734[];
extern s32 lbl_8044E748[];
extern s32 lbl_8044E758[];
extern s32 lbl_804D2F3C[];
extern u32 lbl_805D63F0;
extern s16 window_ui_theme_index;
void load_hud_palette_textures(void);
}

extern "C" {

int TWindowFukidasi__sub_8024695C(void* p);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D63F0;

void TWindowCtrlMain::free_window() {
    if ((u32) lbl_805D63F0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D63F0);
        lbl_805D63F0 = 0U;
    }
}

void load_hud_palette_textures(void) {
    s32 sp8[3];
    sp8[0] = tmp_buf_use_req__6TLobbyFPCc((void *) (lbl_8044E658));
    draw_string__9TLanguageFPvPvl((void *) (lbl_8044E688), (void *) (sp8), (int) (0x40));
    draw_string__9TLanguageFPvPvl((void *) (hud_palette_texture_filename), (void *) (sp8), (int) (0x41));
    draw_string__9TLanguageFPvPvl((void *) (lbl_8044E6B0), (void *) (sp8), (int) (0x42));
    draw_string__9TLanguageFPvPvl((void *) (lbl_8044E6C4), (void *) (sp8), (int) (0x44));
    draw_string__9TLanguageFPvPvl((void *) (lbl_8044E6D8), (void *) (sp8), (int) (0x45));
    draw_string__9TLanguageFPvPvl((void *) (lbl_8044E6F0), (void *) (sp8), (int) (0x46));
    draw_string__9TLanguageFPvPvl((void *) (lbl_8044E708), (void *) (sp8), (int) (0x47));
    draw_string__9TLanguageFPvPvl((void *) (lbl_8044E720), (void *) (sp8), (int) (1));
    draw_string__9TLanguageFPvPvl((void *) (lbl_8044E734), (void *) (sp8), (int) (0x4A));
    draw_string__9TLanguageFPvPvl((void *) (lbl_8044E748), (void *) (sp8), (int) (0x43));
    tmp_buf_release__6TLobbyFv((void *) (lbl_8044E658));
    TLobby__sub_8023E554((void *) (lbl_8044E758), (void *) (lbl_804D2F3C));
    lbl_805D63F0 = (u32)lbl_804D2F3C;
    set_global_param__8TObjFishFl((void *) (lbl_804D2F3C));
    set_entry_index__9TLanguageFll((int) (0), (int) (0x40));
    set_entry_index__9TLanguageFll((int) (1), (int) (0x41));
    set_entry_index__9TLanguageFll((int) (2), (int) (0x42));
    set_entry_index__9TLanguageFll((int) (3), (int) (0x45));
    set_entry_index__9TLanguageFll((int) (4), (int) (0x46));
    set_entry_index__9TLanguageFll((int) (5), (int) (0x47));
    set_entry_index__9TLanguageFll((int) (0xB), (int) (0x44));
    set_entry_index__9TLanguageFll((int) (0xC), (int) (0x43));
    set_entry_index__9TLanguageFll((int) (6), (int) (0x4A));
    set_entry_index__9TLanguageFll((int) (7), (int) (1));
    set_entry_index__9TLanguageFll((int) (8), (int) (1));
    set_entry_index__9TLanguageFll((int) (9), (int) (1));
    set_entry_index__9TLanguageFll((int) (0xA), (int) (1));
    window_ui_theme_index = 0;
}

u8 TWindowSubAreaMapDisp__sub_80246948(Obj_80246948 *self) {
    return !(self->f2c & 1);
}

int TWindowFukidasi__sub_8024695C(void* p) { return (*(u32*)((char*)p + 0x2c) >> 8) & 0x1; }

int TWindowFukidasi::get_visible_flag() { return (*(u32*)((char*)this + 0x2c) >> 9) & 0x1; }

int TWindowFukidasi::is_bit10_set() { return (*(u32*)((char*)this + 0x2c) >> 10) & 0x1; }
void update_entry_visibility__20TWindowSubStatusDispFi(s32 arg0) {
    u32 temp_r31;
    u32 temp_r30;
    u32 temp_r29;
    u32 temp_r28;
    u32 temp_r27;
    u32 temp_r26;
    u32 temp_r25;
    u32 temp_r24;
    temp_r31 = get_array_entry__20TWindowSubStatusDispFi((void *) (arg0), (int) (7));
    temp_r30 = get_array_entry__20TWindowSubStatusDispFi((void *) (arg0), (int) (6));
    temp_r29 = get_array_entry__20TWindowSubStatusDispFi((void *) (arg0), (int) (5));
    temp_r28 = get_array_entry__20TWindowSubStatusDispFi((void *) (arg0), (int) (4));
    temp_r27 = get_array_entry__20TWindowSubStatusDispFi((void *) (arg0), (int) (3));
    temp_r26 = get_array_entry__20TWindowSubStatusDispFi((void *) (arg0), (int) (2));
    temp_r25 = get_array_entry__20TWindowSubStatusDispFi((void *) (arg0), (int) (1));
    temp_r24 = get_array_entry__20TWindowSubStatusDispFi((void *) (arg0), (int) (0));
    if (is_guild_card_receive_active() != 0) {
        if (temp_r31 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFv((int) (temp_r31));
        }
        if (temp_r30 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFv((int) (temp_r30));
        }
    } else {
        if (temp_r31 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFv((int) (temp_r31));
        }
        if (temp_r30 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFv((int) (temp_r30));
        }
    }
    if (is_com_card_active() != 0) {
        if (temp_r29 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFv((int) (temp_r29));
        }
        if (temp_r28 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFv((int) (temp_r28));
        }
    } else {
        if (temp_r29 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFv((int) (temp_r29));
        }
        if (temp_r28 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFv((int) (temp_r28));
        }
    }
    if (is_active__19TWindowSubShortMailFv() != 0) {
        if (temp_r27 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFv((int) (temp_r27));
        }
        if (temp_r26 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFv((int) (temp_r26));
        }
    } else {
        if (temp_r27 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFv((int) (temp_r27));
        }
        if (temp_r26 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFv((int) (temp_r26));
        }
    }
    if (is_trade_active() != 0) {
        if (temp_r25 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFv((int) (temp_r25));
        }
        if (temp_r24 != 0U) {
            clear_visible_flag__20TWindowSubStatusDispFv((int) (temp_r24));
        }
    } else {
        if (temp_r25 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFv((int) (temp_r25));
        }
        if (temp_r24 != 0U) {
            set_flag0_bit2__15TWindowHelpItemFv((int) (temp_r24));
        }
    }
}

}
