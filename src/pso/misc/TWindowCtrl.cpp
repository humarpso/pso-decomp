#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__11TWindowCtrlFv(void* p);
void render__11TWindowCtrlFv(void);
int update__11TWindowCtrlFPv(void*);
int update_open_sequence__11TWindowCtrlFPv(void*);
int update_game_modes__6TLobbyFv(void);

void render__11TWindowCtrlFv(void) {  }
void run_task__11TWindowCtrlFv(void* p) { update_open_sequence__11TWindowCtrlFPv(p); update__11TWindowCtrlFPv(p); update_game_modes__6TLobbyFv(); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8006E85C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_flag_bit3__11TWindowCtrlFv(void);

extern void *TWindowCtrl__data_805D63F8;

s32 get_flag_bit3__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return 0;
    }
    return ((u16) M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) >> 3U) & 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006E87C
#include "types.h"

extern "C" {

int is_player_flag_4000_set__11TWindowCtrlFPv(void* p);
s32 is_map_visible__11TWindowCtrlFv(void);
s32 is_level_capped__23TAdSinglePlyChrSelectGCFPv();
s32 is_active__19THunterGuildWarningFv();
s32 TLobby__sub_8030A770();
s32 get_game_play_mode();
u32 get_player_by_client_id(s32);
s32 has_player_active_menu__11TWindowCtrlFi(u16);
s32 is_slot_visible__11TWindowCtrlFi(u16);
int check_flag__10TObjPlayerFPvi(void*, int);
u32 get_card_window__17TWindowSubComCardFUi(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 obj_getField1c();

int is_player_flag_4000_set__11TWindowCtrlFPv(void* p) { return check_flag__10TObjPlayerFPvi(p, 16384); }
s32 is_map_visible__11TWindowCtrlFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() != 1) {
        return 1;
    }
    if (get_game_play_mode() != 1) {
        return 1;
    }
    return TLobby__sub_8030A770() != 0 ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FD868
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag_2__11TWindowCtrlFv(void);
void set_close_flag__11TWindowCtrlFv(void);

extern void *TWindowCtrl__data_805D63F8;

void clear_flag_2__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) & 0xFFFFFFFD);
    }
}

extern void *TWindowCtrl__data_805D63F8;

void set_close_flag__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) | 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80145A28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field24__11TWindowCtrlFv(void);

extern void *TWindowCtrl__data_805D63F8;

s32 get_field24__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return -0x1600;
    }
    return M2C_FIELD(TWindowCtrl__data_805D63F8, s32 *, 0x24);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FBA28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_flag_bit0__11TWindowCtrlFv(void);

extern void *TWindowCtrl__data_805D63F8;

s32 get_flag_bit0__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return 0;
    }
    return M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) & 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024A054
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag__11TWindowCtrlFv(void);
M2C_UNK clear_flag1e_bit8__11TWindowCtrlFPv(void*);

struct Obj054 { char pad[0x38]; u32 field38; };
extern struct Obj054 *TWindowCtrl__data_805D63F8;

void clear_flag__11TWindowCtrlFv(void) {
    if ((TWindowCtrl__data_805D63F8 != NULL) && (TWindowCtrl__data_805D63F8->field38 != 0U)) {
        clear_flag1e_bit8__11TWindowCtrlFPv((void*)TWindowCtrl__data_805D63F8->field38);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024A210
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field22__11TWindowCtrlFv(void);

extern void *TWindowCtrl__data_805D63F8;

void set_field22__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, s16 *, 0x22) = 0x2D;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024A294
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_focused__11TWindowCtrlFv(void);
s32 get_active_sub__11TWindowCtrlFv(void);
s32 TWindowCtrl__sub_8024C5C4(u32);
M2C_UNK update__11TWindowChatFPv(u32);

extern void *TWindowCtrl__data_805D63F8;

void update_focused__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x38) != 0U)) {
        update__11TWindowChatFPv(M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x38));
    }
}

extern void *TWindowCtrl__data_805D63F8;

s32 get_active_sub__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return 0;
    }
    if ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x38) == 0U) {
        return 0;
    }
    return TWindowCtrl__sub_8024C5C4(M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x38));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024A35C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_status_111__11TWindowCtrlFv(void);
void open_status_112__11TWindowCtrlFv(void);
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
u32 create_area_window();

extern void *TWindowCtrl__data_805D63F8;

void open_status_111__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) == 0U)) {
        get_message_10__20TWindowSubStatusDispFPv(0x111);
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) = create_area_window();
    }
}

extern void *TWindowCtrl__data_805D63F8;

void open_status_112__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) == 0U)) {
        get_message_10__20TWindowSubStatusDispFPv(0x112);
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) = create_area_window();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024A3EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_active_window__11TWindowCtrlFv(void);
M2C_UNK TWindow__close(void *);

extern void *TWindowCtrl__data_805D63F8;

void close_active_window__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) != 0U)) {
        TWindow__close(M2C_FIELD(TWindowCtrl__data_805D63F8, void **, 0x34));
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024A530
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_alt_timer__11TWindowCtrlFv(void);
u32 create_alt__12TWindowTimerFv();

extern void *TWindowCtrl__data_805D63F8;

void create_alt_timer__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x30) == 0U)) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x30) = create_alt__12TWindowTimerFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024AE34
#include "types.h"

extern "C" {

void init_all_slots__11TWindowCtrlFv(void);
void init_all_slots2__11TWindowCtrlFv(void);
int suppress_slot__11TWindowCtrlFi(s32);
int unsuppress_slot__11TWindowCtrlFi(s32);

void init_all_slots__11TWindowCtrlFv(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        suppress_slot__11TWindowCtrlFi(var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xC);
}

void init_all_slots2__11TWindowCtrlFv(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        unsuppress_slot__11TWindowCtrlFi(var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B048
#include "types.h"

extern "C" {

int TWindowCtrl__sub_8024B048(void* p);

int TWindowCtrl__sub_8024B048(void* p) { return (*(u16*)((char*)p + 0x1c) >> 2) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B0E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_message_by_type__11TWindowCtrlFci(s8 arg0, s32 arg1);
void release_slot__11TWindowCtrlFPv(s8 *arg0);
s32 get_window__11TWindowCtrlFi(s32);
s32 get_main_menu_message__15TWindowCtrlMainFPv();
s32 get_active_menu__11TWindowCtrlFPv(s32);
s32 get_window_layout_position(s32);

s32 get_message_by_type__11TWindowCtrlFci(s8 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = get_window__11TWindowCtrlFi(arg1);
    if (temp_r3 == 0) {
        return 0;
    }
    if (get_main_menu_message__15TWindowCtrlMainFPv() != 0) {
        var_r3 = 0x4D;
    } else if (get_active_menu__11TWindowCtrlFPv(temp_r3) != 0) {
        var_r3 = 0x48;
    } else {
        var_r3 = 0x43;
    }
    return get_window_layout_position(var_r3 + arg0);
}

extern void *TWindowCtrl__data_805D63F8;

void release_slot__11TWindowCtrlFPv(s8 *arg0) {
    s8 temp_r4;

    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        temp_r4 = *arg0;
        if ((temp_r4 >= 0) && (temp_r4 < 4)) {
            M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) & ~(0x40 << temp_r4));
            *arg0 = -1;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B558
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open__11TWindowCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
s32 show_chat_balloon__11TWindowCtrlFPviiPvPv(u32, s32, s32, s32, s32);
M2C_UNK set_text__15TWindowFukidasiFPvii(s32, s32, s32);
M2C_UNK post_chat_log_message();

extern s32 lbl_805D53A0;
extern u32 TWindowCtrl__data_805D63F8;

s32 open__11TWindowCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    if ((u32) TWindowCtrl__data_805D63F8 == 0U) {
        return 0;
    }
    if (arg2 & 0x40) {
        post_chat_log_message();
    }
    temp_r3 = show_chat_balloon__11TWindowCtrlFPviiPvPv(TWindowCtrl__data_805D63F8, arg0, arg2, arg1, lbl_805D53A0);
    if (temp_r3 == 0) {
        return 0;
    }
    set_text__15TWindowFukidasiFPvii(temp_r3, arg1, arg2);
    return temp_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B5E0
#include "types.h"

extern "C" {

int open_default__11TWindowCtrlFPvi(void* p, int a1);
int open__11TWindowCtrlFiii(void*, int, int);

int open_default__11TWindowCtrlFPvi(void* p, int a1) { return open__11TWindowCtrlFiii(p, a1, 15); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B604
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_level_up_window__11TWindowCtrlFii(s32 arg0, s32 arg1);
M2C_UNK __ct__17TWindowSetLevelUpFv(void *, s32, s32, s32);
void *__nw__7TObjectFUl(M2C_UNK);

extern s32 tl_07;

void create_level_up_window__11TWindowCtrlFii(s32 arg0, s32 arg1) {
    void *obj = __nw__7TObjectFUl(0x40);
    if (obj != NULL) {
        __ct__17TWindowSetLevelUpFv(obj, tl_07, arg0, arg1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B650
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_window_flags__11TWindowCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
u32 get_window__11TWindowCtrlFi();
M2C_UNK update_child_2c__15TWindowCtrlMainFPv(u32, s32, s32);

void set_window_flags__11TWindowCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;

    temp_r3 = get_window__11TWindowCtrlFi();
    if (temp_r3 != 0U) {
        update_child_2c__15TWindowCtrlMainFPv(temp_r3, arg1, arg2 | 0xE);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B694
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_window_flags_off__11TWindowCtrlFPvi(void *arg0, M2C_UNK arg1);
M2C_UNK set_window_flags__11TWindowCtrlFPvii(void *, M2C_UNK, M2C_UNK);

void set_window_flags_off__11TWindowCtrlFPvi(void *arg0, M2C_UNK arg1) {
    set_window_flags__11TWindowCtrlFPvii(arg0, arg1, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B6B8
#include "types.h"

extern "C" {

void init_all__11TWindowCtrlFPvPv(void* p, void* a1);
int set_window_flags__11TWindowCtrlFPvii(void*, void*, void*);

void init_all__11TWindowCtrlFPvPv(void* p, void* a1) { { int i; for (i = 0; i < 12; i++) { set_window_flags__11TWindowCtrlFPvii((void*)i, p, a1); } } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B704
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_all_default__11TWindowCtrlFPv(void *arg0);
M2C_UNK init_all__11TWindowCtrlFPvPv(void *, M2C_UNK);

void init_all_default__11TWindowCtrlFPv(void *arg0) {
    init_all__11TWindowCtrlFPvPv(arg0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B728
#include "types.h"

extern "C" {

void show_party_effect__11TWindowCtrlFPvPvPv(void* a0, void* a1, void* a2);
int create__18TWindowEffectPartyFPviiUi(void*, void*, void*, void*, void*);

    extern int tl_07;
void show_party_effect__11TWindowCtrlFPvPvPv(void* a0, void* a1, void* a2) { create__18TWindowEffectPartyFPviiUi((void*)(tl_07), a0, a1, a2, a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B760
#include "types.h"

extern "C" {

void create_party_effect__11TWindowCtrlFPvPv(void* a0, void* a1);
int create__18TWindowEffectPartyFPviiUi(void*, void*, void*, void*);

    extern int tl_07;
void create_party_effect__11TWindowCtrlFPvPv(void* a0, void* a1) { create__18TWindowEffectPartyFPviiUi((void*)(tl_07), a0, a1, (void*)0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B794
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_to_child__11TWindowCtrlFiPv(s32 arg0, void *arg1);
M2C_UNK spawn_palette_slot_light__15TWindowCtrlMainFPv(u32, void*);

extern u32* TWindowCtrl__data_805D63F8;

void dispatch_to_child__11TWindowCtrlFiPv(s32 arg0, void *arg1) {
    u32* p = TWindowCtrl__data_805D63F8;
    if (p != 0 && p[arg0 + 18] != 0U) {
        spawn_palette_slot_light__15TWindowCtrlMainFPv(p[arg0 + 18], arg1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024B9C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8024B9C0(void *arg0);
void update_trade_window__11TWindowCtrlFPv(void *arg0);
void handle_controller__11TWindowCtrlFi(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_active__13TRaderMapCoreFv();
s32 has_player_active_menu__11TWindowCtrlFi(s32);
s32 TWindowCtrl__sub_8024B000(void *, s32);
s32 is_slot_visible__11TWindowCtrlFi(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, M2C_UNK *);
M2C_UNK request_close__19TWindowSubTradeMainFPv(u32);
s32 is_split_screen();
s32 fn_8002AE08(s32);
M2C_UNK advance_card_status__15TWindowCtrlMainFi(s32);
M2C_UNK window_request_show(u32);

extern s32 lbl_805D53A0;

void TWindowCtrl__sub_8024B9C0(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        if (is_slot_visible__11TWindowCtrlFi(lbl_805D53A0) != 0) {
            request_close__19TWindowSubTradeMainFPv(M2C_FIELD(arg0, u32 *, 0x30));
            return;
        }
        window_request_show(M2C_FIELD(arg0, u32 *, 0x30));
    }
}

extern s32 lbl_805D53A0;

void update_trade_window__11TWindowCtrlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        if ((is_slot_visible__11TWindowCtrlFi(lbl_805D53A0) != 0) || (TWindowCtrl__sub_8024B000((void *)(arg0), (s32)(lbl_805D53A0)) != 0) || ((is_split_screen() != 0) && (is_active__13TRaderMapCoreFv() == 0))) {
            request_close__19TWindowSubTradeMainFPv(M2C_FIELD(arg0, u32 *, 0x34));
            return;
        }
        window_request_show(M2C_FIELD(arg0, u32 *, 0x34));
    }
}

extern u8 lbl_8050E208[];
extern s32 lbl_805D53A0;

void handle_controller__11TWindowCtrlFi(s32 arg0) {
    if ((get_global_state__14TOKeyMachine01Fv() == 0xF) && (is_slot_visible__11TWindowCtrlFi(lbl_805D53A0) == 0) && (TWindowCtrl__sub_8024B000((void *)(arg0), (s32)(lbl_805D53A0)) == 0) && (has_player_active_menu__11TWindowCtrlFi(lbl_805D53A0) == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, fn_8002AE08(lbl_805D53A0), (M2C_UNK *)lbl_8050E208) != 0)) {
        advance_card_status__15TWindowCtrlMainFi(lbl_805D53A0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024BBBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_trade_request_window__11TWindowCtrlFPv(void *arg0);
s32 has_player_active_menu__11TWindowCtrlFi(s32);
s32 is_slot_visible__11TWindowCtrlFi(s32);
void *TWindowTradeRequest__ct(void *, void *);
void *__nw__7TObjectFUl(M2C_UNK);
s32 is_trade_active();
s32 TWindowCtrl__sub_8024701C(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 lbl_805D53A0;

void update_trade_request_window__11TWindowCtrlFPv(void *arg0) {
    void *var_r0;

    if ((is_trade_active() == 0) || (has_player_active_menu__11TWindowCtrlFi(lbl_805D53A0) != 0) || (is_slot_visible__11TWindowCtrlFi(lbl_805D53A0) != 0) || ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) || (((u32) M2C_FIELD(arg0, void **, 0x38) != 0U) && (TWindowCtrl__sub_8024701C(M2C_FIELD(arg0, void **, 0x38)) != 0))) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
    } else if ((u32) M2C_FIELD(arg0, u32 *, 0x40) == 0U) {
        var_r0 = __nw__7TObjectFUl(0x24);
        if (var_r0 != NULL) {
            var_r0 = TWindowTradeRequest__ct(var_r0, arg0);
        }
        M2C_FIELD(arg0, void **, 0x40) = var_r0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024BD68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_window_visibility__11TWindowCtrlFPv(u8 *arg0);
u32 get_player_by_client_id(s32);
s32 has_player_active_menu__11TWindowCtrlFi(s32);
s32 TWindowCtrl__sub_8024AFB8(void *, s32);
s32 is_slot_visible__11TWindowCtrlFi(s32);
s32 get_display_flag__11TWindowCtrlFv();
s32 chat_accept_submission(void *);
s32 get_current_target_id__10TObjPlayerFv();
M2C_UNK update__11TWindowChatFPv(u32);
M2C_UNK open_input__11TWindowChatFPv(u32);
M2C_UNK TWindowChat__sub_80247DFC(u32);
s32 is_visible__11TWindowChatFPv(u32);
M2C_UNK TWindowChat__sub_80247E50(u32);
s32 is_mode_bit4__11TWindowChatFPv(u32);

extern s32 lbl_805D53A0;

void update_window_visibility__11TWindowCtrlFPv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s16 *, 0x22);
        if (temp_r3 > 0) {
            M2C_FIELD(arg0, s16 *, 0x22) = (s16) (temp_r3 - 1);
        }
        if (get_player_by_client_id(lbl_805D53A0) == 0U) {
            update__11TWindowChatFPv(M2C_FIELD(arg0, u32 *, 0x38));
            return;
        }
        temp_r31 = get_current_target_id__10TObjPlayerFv();
        if ((get_display_flag__11TWindowCtrlFv() != 0) || (has_player_active_menu__11TWindowCtrlFi(lbl_805D53A0) != 0) || (is_slot_visible__11TWindowCtrlFi(lbl_805D53A0) != 0) || (TWindowCtrl__sub_8024AFB8(arg0, lbl_805D53A0) != 0) || (((u16)temp_r31 != 0xffffU) && ((s32)(u16)temp_r31 != (s32) lbl_805D53A0))) {
            update__11TWindowChatFPv(M2C_FIELD(arg0, u32 *, 0x38));
            return;
        }
        open_input__11TWindowChatFPv(M2C_FIELD(arg0, u32 *, 0x38));
        if ((is_mode_bit4__11TWindowChatFPv(M2C_FIELD(arg0, u32 *, 0x38)) != 0) && (chat_accept_submission(arg0 + 0x94) != 0)) {
            TWindowChat__sub_80247E50(M2C_FIELD(arg0, u32 *, 0x38));
        }
        if (is_visible__11TWindowChatFPv(M2C_FIELD(arg0, u32 *, 0x38)) != 0) {
            TWindowChat__sub_80247DFC(M2C_FIELD(arg0, u32 *, 0x38));
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024BFB8
#include "types.h"

extern "C" {

void update__11TWindowCtrlFPv(void* p);
int TWindowCtrl__sub_8024B8A0(void*);
int TWindowCtrl__sub_8024B9C0(void*);
int update_trade_window__11TWindowCtrlFPv(void*);
int handle_controller__11TWindowCtrlFi(void*);
int TWindowCtrl__sub_8024BB30(void*);
int update_trade_request_window__11TWindowCtrlFPv(void*);
int update_com_card_window__11TWindowCtrlFPv(void*);
int update_window_visibility__11TWindowCtrlFPv(void*);
int update_party_status_rows__11TWindowCtrlFPv(void*);

void update__11TWindowCtrlFPv(void* p) { update_party_status_rows__11TWindowCtrlFPv(p); update_window_visibility__11TWindowCtrlFPv(p); update_com_card_window__11TWindowCtrlFPv(p); update_trade_request_window__11TWindowCtrlFPv(p); TWindowCtrl__sub_8024BB30(p); handle_controller__11TWindowCtrlFi(p); update_trade_window__11TWindowCtrlFPv(p); TWindowCtrl__sub_8024B9C0(p); TWindowCtrl__sub_8024B8A0(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C530
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void shutdown__11TWindowCtrlFv(void);
M2C_UNK TWindowMainMenu__sub_8024E3CC();
M2C_UNK fn_8026AC50();
void queue_destruction__7TObjectFv(void*);

extern u32 TWindowCtrl__data_805D63F8;

void shutdown__11TWindowCtrlFv(void) {
    if ((u32) TWindowCtrl__data_805D63F8 != 0U) {
        queue_destruction__7TObjectFv((void*)TWindowCtrl__data_805D63F8);
        TWindowCtrl__data_805D63F8 = 0U;
    }
    fn_8026AC50();
    TWindowMainMenu__sub_8024E3CC();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C56C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__11TWindowCtrlFv(void);
M2C_UNK TWindowMainMenu__sub_8024E3D0();
M2C_UNK TLobby__sub_8026ACDC();

extern s32 TWindowCtrl__data_805D63F8;

void close__11TWindowCtrlFv(void) {
    TWindowMainMenu__sub_8024E3D0();
    TLobby__sub_8026ACDC();
    TWindowCtrl__data_805D63F8 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C598
#include "types.h"

extern "C" {

int is_flag_2_set__11TWindowCtrlFPv(void* p);
void set_flag1e_bit8__11TWindowCtrlFPv(void* p);
void clear_flag1e_bit8__11TWindowCtrlFPv(void* p);
void set_flag1e_bit40__11TWindowCtrlFPv(void* p);
u16 get_flags__11TWindowCtrlFPv(void* p);
int get_flag_bit1__11TWindowCtrlFPv(void* p);

int is_flag_2_set__11TWindowCtrlFPv(void* p) { return *(u16*)((char*)p + 0x4) & 0x4; }
void set_flag1e_bit8__11TWindowCtrlFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x8; }
void clear_flag1e_bit8__11TWindowCtrlFPv(void* p) { *(u16*)((char*)p + 0x1e) &= 0xfffffff7; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C5D8
#include "types.h"

extern "C" {

int is_flag_2_set__11TWindowCtrlFPv(void* p);
void set_flag1e_bit8__11TWindowCtrlFPv(void* p);
void clear_flag1e_bit8__11TWindowCtrlFPv(void* p);
void set_flag1e_bit40__11TWindowCtrlFPv(void* p);
u16 get_flags__11TWindowCtrlFPv(void* p);
int get_flag_bit1__11TWindowCtrlFPv(void* p);

void set_flag1e_bit40__11TWindowCtrlFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x40; }
u16 get_flags__11TWindowCtrlFPv(void* p) { return *(u16*)((char*)p + 0x76); }
int get_flag_bit1__11TWindowCtrlFPv(void* p) { return (*(u8*)((char*)p + 0x71) >> 1) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C5FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_window__11TWindowCtrlFi(s32 arg0);

extern s8 *TWindowCtrl__data_805D63F8;

s32 get_window__11TWindowCtrlFi(s32 arg0) {
    if (TWindowCtrl__data_805D63F8 == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 0xC) {
        return 0;
    }
    return ((s32 *)(TWindowCtrl__data_805D63F8 + 0x48))[arg0];
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C640
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_flag_bit4__11TWindowCtrlFv(void);

extern void *TWindowCtrl__data_805D63F8;

s32 get_flag_bit4__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return 0;
    }
    return ((u16) M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) >> 4U) & 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C660
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_flag_bit5__11TWindowCtrlFv(void);

extern void *TWindowCtrl__data_805D63F8;

s32 get_flag_bit5__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return 0;
    }
    return ((u16) M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) >> 5U) & 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C680
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_display_flag__11TWindowCtrlFv(void);

s32 is_split_screen();
extern void *TWindowCtrl__data_805D63F8;

s32 get_display_flag__11TWindowCtrlFv(void) {
    if (is_split_screen() != 0) {
        return 0;
    }
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return 0;
    }
    return ((u16) M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) >> 1U) & 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C6CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 hide_radar__13TRaderMapCoreFv();
s32 show_radar__13TRaderMapCoreFv();
void TWindowCtrl__sub_8024C6CC(void* p);
void TWindowCtrl__sub_8024C6DC(void* p);
void TWindowCtrl__sub_8024C6EC(void* p);
void TWindowCtrl__sub_8024C6FC(void* p);
void TWindowCtrl__sub_8024C70C(void* p);
void TWindowCtrl__sub_8024C71C(void* p);
void TWindowCtrl__sub_8024C72C(void* p);
void TWindowCtrl__sub_8024C73C(void* p);
void TWindowCtrl__sub_8024C74C(void* p);
void TWindowCtrl__sub_8024C75C(void* p);
int TWindowCtrl__sub_8024C7D4(void* p);
int TWindowCtrl__sub_8024C7E0(void* p);
int is_enabled__11TWindowCtrlFPv(void* p);
int TWindowCtrl__sub_8024C7F8(void* p);
int is_visible__11TWindowCtrlFPv(void* p);
s16 get_field_20__11TWindowCtrlFPv(void* p);
s16 get_width__11TWindowCtrlFPv(void* p);

void TWindowCtrl__sub_8024C6CC(void* p) { *(u16*)((char*)p + 0x1c) |= 0x40; }
void TWindowCtrl__sub_8024C6DC(void* p) { *(u16*)((char*)p + 0x1c) &= 0xffffffbf; }
void TWindowCtrl__sub_8024C6EC(void* p) { *(u16*)((char*)p + 0x1c) |= 0x2; }
void TWindowCtrl__sub_8024C6FC(void* p) { *(u16*)((char*)p + 0x1c) &= 0xfffffffd; }
void TWindowCtrl__sub_8024C70C(void* p) { *(u16*)((char*)p + 0x1c) |= 0x4; }
void TWindowCtrl__sub_8024C71C(void* p) { *(u16*)((char*)p + 0x1c) &= 0xfffffffb; }
void TWindowCtrl__sub_8024C72C(void* p) { *(u16*)((char*)p + 0x1c) |= 0x8; }
void TWindowCtrl__sub_8024C73C(void* p) { *(u16*)((char*)p + 0x1c) &= 0xfffffff7; }
void TWindowCtrl__sub_8024C74C(void* p) { *(u16*)((char*)p + 0x1c) |= 0x10; }
void TWindowCtrl__sub_8024C75C(void* p) { *(u16*)((char*)p + 0x1c) &= 0xffffffef; }
void set_radar_dirty_flag__11TWindowCtrlFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C) | 1);
    hide_radar__13TRaderMapCoreFv();
}
void clear_flag_bit0__11TWindowCtrlFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C) & 0xFFFE);
    show_radar__13TRaderMapCoreFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C7D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 hide_radar__13TRaderMapCoreFv();
s32 show_radar__13TRaderMapCoreFv();
void TWindowCtrl__sub_8024C6CC(void* p);
void TWindowCtrl__sub_8024C6DC(void* p);
void TWindowCtrl__sub_8024C6EC(void* p);
void TWindowCtrl__sub_8024C6FC(void* p);
void TWindowCtrl__sub_8024C70C(void* p);
void TWindowCtrl__sub_8024C71C(void* p);
void TWindowCtrl__sub_8024C72C(void* p);
void TWindowCtrl__sub_8024C73C(void* p);
void TWindowCtrl__sub_8024C74C(void* p);
void TWindowCtrl__sub_8024C75C(void* p);
int TWindowCtrl__sub_8024C7D4(void* p);
int TWindowCtrl__sub_8024C7E0(void* p);
int is_enabled__11TWindowCtrlFPv(void* p);
int TWindowCtrl__sub_8024C7F8(void* p);
int is_visible__11TWindowCtrlFPv(void* p);
s16 get_field_20__11TWindowCtrlFPv(void* p);
s16 get_width__11TWindowCtrlFPv(void* p);

int TWindowCtrl__sub_8024C7D4(void* p) { return (*(u16*)((char*)p + 0x1c) >> 1) & 0x1; }
int TWindowCtrl__sub_8024C7E0(void* p) { return (*(u16*)((char*)p + 0x1c) >> 2) & 0x1; }
int is_enabled__11TWindowCtrlFPv(void* p) { return (*(u16*)((char*)p + 0x1c) >> 3) & 0x1; }
int TWindowCtrl__sub_8024C7F8(void* p) { return (*(u16*)((char*)p + 0x1c) >> 4) & 0x1; }
int is_visible__11TWindowCtrlFPv(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }
s16 get_field_20__11TWindowCtrlFPv(void* p) { return *(s16*)((char*)p + 0x20); }
s16 get_width__11TWindowCtrlFPv(void* p) { return *(s16*)((char*)p + 0x20); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024D960
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowMainMenu__sub_8024E3D4(void *);
s32 TWindowMainMenu__sub_8024E3E0(void *);
int TWindowCtrlMain__sub_8024D838(void);
void TWindowCtrlMain__sub_8024D85C(void* p);
void update_child_2c__15TWindowCtrlMainFPv(void* p);
void spawn_palette_slot_light__15TWindowCtrlMainFPv(void* p);
void update_field28__15TWindowCtrlMainFPv(void* p);
void free_member__15TWindowCtrlMainFPv(void* p);
int spawn_action_palette_slot_light(void*);
int reset_all__15TWindowCtrlMainFPv(void*);
int open_submenu__15TWindowSubEquipFii(void*);
int try_open_battle_menu__15TWindowMainMenuFPvs(void*);
int send_and_handle__6TLobbyFPvii(void*);

s32 get_active_menu__11TWindowCtrlFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x28);
    if (p == 0) {
        return 0;
    }
    return TWindowMainMenu__sub_8024E3E0(p);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024DAAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8024DAAC(void *arg0);

void TWindowCtrl__sub_8024DAAC(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x20);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s16 *, 0x20) = (s16) (temp_r4 - 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024DC58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void show_active_window__11TWindowCtrlFPv(void *arg0);
s32 is_visible__11TWindowCtrlFPv();
s32 get_window_layout_position(M2C_UNK);
M2C_UNK request_close__19TWindowSubTradeMainFPv(u32);
M2C_UNK window_request_show(u32);
s32 get_active_menu__11TWindowCtrlFPv(void *);
M2C_UNK set_position__11TWindowCtrlFPvPv(u32, s32);

void show_active_window__11TWindowCtrlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        if (is_visible__11TWindowCtrlFPv() != 0) {
            request_close__19TWindowSubTradeMainFPv(M2C_FIELD(arg0, u32 *, 0x2C));
            return;
        }
        window_request_show(M2C_FIELD(arg0, u32 *, 0x2C));
        if (get_active_menu__11TWindowCtrlFPv(arg0) != 0) {
            set_position__11TWindowCtrlFPvPv(M2C_FIELD(arg0, u32 *, 0x2C), get_window_layout_position(0x21));
            return;
        }
        set_position__11TWindowCtrlFPvPv(M2C_FIELD(arg0, u32 *, 0x2C), get_window_layout_position(0x20));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024E094
#include "types.h"

extern "C" {

int TWindowCtrl__sub_8024DAAC(void*);
int update_short_list_request__11TWindowCtrlFPv(void*);
int show_active_window__11TWindowCtrlFPv(void*);
int update_main_menu_request__11TWindowCtrlFPv(void*);
int update_target_info_window__11TWindowCtrlFPv(void* a0 = 0);
int update_child_window_visibility__11TWindowCtrlFPv(void* a0 = 0);
int update_trade_window_visibility__11TWindowCtrlFPv(void* a0 = 0);
int fn_8024E0F0(void* a0 = 0);
void run_all_updates__11TWindowCtrlFPv(void* p);
void run_task__17TWindowCtrlPlayerFv(void* p);
void render__17TWindowCtrlPlayerFv(void);

void run_all_updates__11TWindowCtrlFPv(void* p) { update_trade_window_visibility__11TWindowCtrlFPv(p); update_child_window_visibility__11TWindowCtrlFPv(p); update_target_info_window__11TWindowCtrlFPv(p); update_main_menu_request__11TWindowCtrlFPv(p); show_active_window__11TWindowCtrlFPv(p); update_short_list_request__11TWindowCtrlFPv(p); TWindowCtrl__sub_8024DAAC(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80269FB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_position__11TWindowCtrlFPvPv(void *arg0, void *arg1);

void set_position__11TWindowCtrlFPvPv(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg0, f32 *, 0x30) != M2C_FIELD(arg1, f32 *, 0)) || (M2C_FIELD(arg0, f32 *, 0x34) != M2C_FIELD(arg1, f32 *, 4))) {
        M2C_FIELD(arg0, f32 *, 0x30) = M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026AD44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field44__11TWindowCtrlFv(void);

extern void *TWindowCtrl__data_805D63F8;

s32 get_field44__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return 0;
    }
    return M2C_FIELD(TWindowCtrl__data_805D63F8, s32 *, 0x44);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026AD60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8026AD60(void);
void TWindowCtrl__sub_8026AD78(s32 arg0);

extern void *TWindowCtrl__data_805D63F8;

void TWindowCtrl__sub_8026AD60(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, s32 *, 0x44) = 0;
    }
}

extern void *TWindowCtrl__data_805D63F8;

void TWindowCtrl__sub_8026AD78(s32 arg0) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, s32 *, 0x44) = arg0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026D4E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8026D4E8(void);

extern void *TWindowCtrl__data_805D63F8;

void TWindowCtrl__sub_8026D4E8(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) | 0x20);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026F6A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_active__11TWindowCtrlFv(void);
void clear_flag_8__11TWindowCtrlFv(void);

extern void *TWindowCtrl__data_805D63F8;

void set_flag_active__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) | 8);
    }
}

extern void *TWindowCtrl__data_805D63F8;

void clear_flag_8__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) & 0xFFFFFFF7);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027D1F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8027D1F8(void);
void TWindowCtrl__sub_8027D214(void);

extern void *TWindowCtrl__data_805D63F8;

void TWindowCtrl__sub_8027D1F8(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) & 0xFFFFFFEF);
    }
}

extern void *TWindowCtrl__data_805D63F8;

void TWindowCtrl__sub_8027D214(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) | 0x10);
    }
}

}
#endif
#endif
