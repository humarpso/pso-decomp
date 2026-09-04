#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 compute_total_height__20TWindowSubSymbolChatFv(void);
s32 calc_remaining_slots__20TWindowSubSymbolChatFv(void);
void* get_keyboard_ptr__20TWindowSubSymbolChatFPv(void* p);
unsigned char get_global_4e54__20TWindowSubSymbolChatFv(void);
void set_flag_bit1__20TWindowSubSymbolChatFPv(s32 *arg0);
s32 commit__20TWindowSubSymbolChatFi(s32 arg0);
s32 refresh_parts__20TWindowSubSymbolChatFPv();
M2C_UNK TWindowSubSymbolChat__sub_80283850();
s32 update_layout__20TWindowSubSymbolChatFPv(void);

s32 compute_total_height__20TWindowSubSymbolChatFv(void) {
    s32 temp_r31;

    s32 temp_r3;
    temp_r31 = calc_remaining_slots__20TWindowSubSymbolChatFv();
    temp_r3 = update_layout__20TWindowSubSymbolChatFPv();
    return temp_r3 + temp_r31;
}
s32 calc_remaining_slots__20TWindowSubSymbolChatFv(void) {
    return 0xC - refresh_parts__20TWindowSubSymbolChatFPv();
}
void* get_keyboard_ptr__20TWindowSubSymbolChatFPv(void* p) { return (char*)p + 0x4; }

    extern unsigned char lbl_805D4E54;
unsigned char get_global_4e54__20TWindowSubSymbolChatFv(void) {  return lbl_805D4E54; }

void set_flag_bit1__20TWindowSubSymbolChatFPv(s32 *arg0) {
    *arg0 |= 1;
}

s32 commit__20TWindowSubSymbolChatFi(s32 arg0) {
    TWindowSubSymbolChat__sub_80283850();
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80076FE0
#include "types.h"

extern "C" {

int get_instance__20TWindowSubSymbolChatFv(void*);
void refresh_parts__20TWindowSubSymbolChatFPv(void* p);
void update_layout__20TWindowSubSymbolChatFPv(void* p);
int TWindowSubSymbolChat__sub_80076FE0(void* p);

int TWindowSubSymbolChat__sub_80076FE0(void* p) { return (*(u32*)((char*)p + 0x1c) >> 9) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077214
#include "types.h"

extern "C" {
int TWindowSubSymbolChat__sub_80077108(void* a0 = 0, void* a1 = 0);
int TWindowSubSymbolChat__sub_800771E4(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0, void* a4 = 0, void* a5 = 0, void* a6 = 0);

int get_instance__20TWindowSubSymbolChatFv(void*);
void refresh_parts__20TWindowSubSymbolChatFPv(void* p);
void update_layout__20TWindowSubSymbolChatFPv(void* p);
int TWindowSubSymbolChat__sub_80076FE0(void* p);

void add__20TWindowSubSymbolChatFPviiiii(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp;

    temp = TWindowSubSymbolChat__sub_80077108((void*)(arg0), (void*)(0));
    if (temp < 0xC) {
        TWindowSubSymbolChat__sub_800771E4((void*)(arg0), (void*)(temp), (void*)(arg1), (void*)(arg2), (void*)(arg3), (void*)(arg4), (void*)(arg5));
        *arg0 |= 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077310
#include "types.h"

extern "C" {
int TWindowSubSymbolChat__sub_80077098(void);
int TWindowSubSymbolChat__sub_800770D0(void);

int get_instance__20TWindowSubSymbolChatFv(void*);
void refresh_parts__20TWindowSubSymbolChatFPv(void* p);
void update_layout__20TWindowSubSymbolChatFPv(void* p);
int TWindowSubSymbolChat__sub_80076FE0(void* p);

void refresh_parts__20TWindowSubSymbolChatFPv(void* p) { get_instance__20TWindowSubSymbolChatFv(p); TWindowSubSymbolChat__sub_80077098(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077334
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_layout__20TWindowSubSymbolChatFPv(void* p);
void update_symbol_chat_result__20TWindowSubSymbolChatFv(void);
void update_selected_symbol__20TWindowSubSymbolChatFPv(void *arg0);
int TWindowSubSymbolChat__sub_80076FE0(void* p);
int TWindowSubSymbolChat__sub_80077098(void);
int TWindowSubSymbolChat__sub_800770D0(void);
void refresh_parts__20TWindowSubSymbolChatFPv(void* p);
M2C_UNK TWindowSubSymbolChat__sub_800773BC(s32);
int TWindowSubSymbolChat__sub_80077480(void);
int get_instance__20TWindowSubSymbolChatFv(void*);
s32 is_initialized__20TWindowSubSymbolChatFPv();

void update_layout__20TWindowSubSymbolChatFPv(void* p) { get_instance__20TWindowSubSymbolChatFv(p); TWindowSubSymbolChat__sub_800770D0(); }

    extern int lbl_805D4E50;
void update_symbol_chat_result__20TWindowSubSymbolChatFv(void) { lbl_805D4E50 = TWindowSubSymbolChat__sub_80077480(); }

void update_selected_symbol__20TWindowSubSymbolChatFPv(void *arg0) {
    if (is_initialized__20TWindowSubSymbolChatFPv() != 0) {
        TWindowSubSymbolChat__sub_800773BC(((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 5U) & 0xF);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077408
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *get_symbol_chat_data__20TWindowSubSymbolChatFPv(u8 *arg0);
u8 *get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 TWindowSubSymbolChat__sub_80077464();

u8 *get_symbol_chat_data__20TWindowSubSymbolChatFPv(u8 *arg0) {
    if (TWindowSubSymbolChat__sub_80077464() == 0) {
        return get_message_10__20TWindowSubStatusDispFPv(0xCC);
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 4) == 0) {
        return get_message_10__20TWindowSubStatusDispFPv(0xCD);
    }
    return arg0 + 4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007763C
#include "types.h"

extern "C" {

void* get_data_ptr__20TWindowSubSymbolChatFPv(void* p);
void bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv(void* p);
void byteswap_entry__20TWindowSubSymbolChatFPv(void* p);
void send_symbol_chat__20TWindowSubSymbolChatFPv(void* p);
void TWindowSubSymbolChat__sub_80077704(void* p);
int get_instance__20TWindowSubSymbolChatFv(void);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void* a0 = 0);
int update_players__6TLobbyFi(void*);

void* get_data_ptr__20TWindowSubSymbolChatFPv(void* p) { return (char*)p + 0x1c; }
void bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); byteswap_entry__20TWindowSubSymbolChatFPv((void*)((char*)p + 0x8)); }
void byteswap_entry__20TWindowSubSymbolChatFPv(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void send_symbol_chat__20TWindowSubSymbolChatFPv(void* p) { bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv((void*)(p)); update_players__6TLobbyFi(p); }
void TWindowSubSymbolChat__sub_80077704(void* p) { *(u8*)((char*)p + 0x0) = 7; *(u8*)((char*)p + 0x1) = 17; }

    extern int lbl_805D4E50;
int get_instance__20TWindowSubSymbolChatFv(void) {  return lbl_805D4E50; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077720
#include "types.h"

extern "C" {

int is_initialized__20TWindowSubSymbolChatFPv(void* p);
void bswap_entry__20TWindowSubSymbolChatFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int byteswap_entry__20TWindowSubSymbolChatFPv(void*);
int bswap_32__FPUl(void*);
int fn_80077788(void);
int fn_80077790(void);

int is_initialized__20TWindowSubSymbolChatFPv(void* p) { return *(u32*)((char*)p + 0x0) & 0x1; }
void bswap_entry__20TWindowSubSymbolChatFPv(void* p) { bswap_32__FPUl(p); byteswap_entry__20TWindowSubSymbolChatFPv((char*)p + 0x1c); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802483F0
#include "types.h"

extern "C" {

void TWindowSubSymbolChat__sub_802483F0(int a0, void* a1);

    extern const float lbl_805DCB94;
    extern const float lbl_805DCB98;
void TWindowSubSymbolChat__sub_802483F0(int a0, void* a1) { *(float*)((char*)a1 + 0x0) = lbl_805DCB94; *(float*)((char*)a1 + 0x4) = lbl_805DCB98; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248404
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(s32 arg0, void *arg1);
M2C_UNK TWindowSubSymbolChatPartsSet__sub_80248088(s32, void *, s32);
M2C_UNK fn_80248324(s32, u16, s32);
M2C_UNK fn_802483C8(s32, u8);

void set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(s32 arg0, void *arg1) {
    s32 i;
    s32 j;
    s32 off;

    fn_802483C8(arg0, (u8) M2C_FIELD(arg1, s32 *, 0));
    for (i = 0; i < 4; i += 1) {
        fn_80248324(arg0, ((u16 *)arg1)[i + 2], i);
    }
    j = 0;
    off = 0;
    do {
        TWindowSubSymbolChatPartsSet__sub_80248088(arg0, (s8 *)arg1 + off + 0xC, j);
        off += 4;
        j += 1;
    } while (j < 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248534
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_selection__20TWindowSubSymbolChatFPvUi(void *arg0, u32 arg1);
M2C_UNK TWindowSubSymbolChat__sub_802484C0();

void set_selection__20TWindowSubSymbolChatFPvUi(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != arg1) {
        M2C_FIELD(arg0, u32 *, 0x60) = arg1;
        TWindowSubSymbolChat__sub_802484C0();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248564
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1);
M2C_UNK set_selection__20TWindowSubSymbolChatFPvUi(s32, s32);
s32 TWindowSubSymbolChat__sub_80077480(s32);

void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)TWindowSubSymbolChat__sub_80077480(arg1);
    set_selection__20TWindowSubSymbolChatFPvUi(arg0, (s32)tmp);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80281814
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_child__20TWindowSubSymbolChatFv(void);
M2C_UNK TWindowSubSymbolChat__sub_80281840(void *);

extern void *lbl_805D6490;

void close_child__20TWindowSubSymbolChatFv(void) {
    void *temp_r3;
    temp_r3 = lbl_805D6490;
    if (temp_r3 != NULL) {
        TWindowSubSymbolChat__sub_80281840(temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028195C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_card_confirmed__20TWindowSubSymbolChatFPv(void *arg0);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 TWindowSubComCard__sub_80265660(s32, s32);
s32 get_cursor_pos__20TWindowShortListCtrlFPv(s32);

s32 is_card_confirmed__20TWindowSubSymbolChatFPv(void *arg0) {
    if (TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x38)) != 0x20) {
        return 0;
    }
    s32 temp;
    s32 ret;

    temp = get_cursor_pos__20TWindowShortListCtrlFPv(M2C_FIELD(arg0, s32 *, 0x38));
    ret = TWindowSubComCard__sub_80265660(M2C_FIELD(arg0, s32 *, 0x38), temp);
    return ret ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80281A94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__20TWindowSubSymbolChatFPv(void *arg0);
s32 TWindowSubComCard__sub_80265BF8(s32);
M2C_UNK TWindowSubSymbolChat__sub_802484C0(s32);
s32 compute_total_height__20TWindowSubSymbolChatFv();
M2C_UNK fn_80284CB8(s32);

void update_state__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x38));
    switch (temp_r3) {
    case 22:
        M2C_FIELD(arg0, s8 *, 0x1C) = 0x18;
        return;
    case 26:
        fn_80284CB8(M2C_FIELD(arg0, s32 *, 0x4C));
        TWindowSubSymbolChat__sub_802484C0(M2C_FIELD(arg0, s32 *, 0x30));
        if (compute_total_height__20TWindowSubSymbolChatFv() <= 0) {
            M2C_FIELD(arg0, s8 *, 0x1C) = 4;
            return;
        }
        M2C_FIELD(arg0, s8 *, 0x1C) = 0x14;
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80281D50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_keyboard_control__20TWindowSubSymbolChatFPv(void *arg0);
s32 TKeyBoardControl__ct(s32, void *, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 get_keyboard_ptr__20TWindowSubSymbolChatFPv(s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(s32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);
M2C_UNK get_keyboard_field_6c__15TWindowMakeTeamFPv(s32, s32);
M2C_UNK update_chat_window(s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK destroy_keyboard__17TWindowSubComCardFPv(s32);

extern s32 lbl_805D53A0;

s32 create_keyboard_control__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, arg0, 0x90, 1, 4, lbl_805D53A0);
    }
    update_chat_window(var_r31);
    get_keyboard_field_6c__15TWindowMakeTeamFPv(var_r31, get_keyboard_ptr__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, s32 *, 0x28)));
    set_sub_position__15TWindowMakeTeamFPvPv(var_r31, TWindowSubComCard__sub_8026CBB8(0xBB));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80281DE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_confirm_window__20TWindowSubSymbolChatFPv(void *arg0);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 TWindowSubSymbolChat__sub_80076FE0(s32);
M2C_UNK set_selected_index__20TWindowSubStatusDispFPvs(s32, M2C_UNK);
M2C_UNK add_menu_item__17TWindowOptionCtrlFiii(s32, s32, M2C_UNK);
s32 refresh_with_default_list__20TWindowSubStatusDispFii(M2C_UNK, M2C_UNK *);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_804D2B48[];

s32 create_confirm_window__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFii(TWindowSubComCard__sub_8026CBB8(0x79), lbl_804D2B48);
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAC));
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBF), 1);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xC0), 0);
    if (TWindowSubSymbolChat__sub_80076FE0(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
        set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, 0);
    } else {
        set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, 1);
    }
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80281F28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_menu__20TWindowSubSymbolChatFv(void);
s32 create_menu__20TWindowSubSymbolChatFPv(void *arg0);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 compute_total_height__20TWindowSubSymbolChatFv();
s32 is_initialized__20TWindowSubSymbolChatFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD740;

s32 create_menu__20TWindowSubSymbolChatFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(TWindowSubComCard__sub_8026CBB8(0x79), 9, get_message_10__20TWindowSubStatusDispFPv(0xAB));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB6), 0x26, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB7), 0x26, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB8), 0x26, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB9), 0x26, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBA), 0x26, 4);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBB), 0x26, 5);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBC), 0x26, 6);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBD), 0x26, 7);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xBE), 0x26, 8);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    set_scroll_target__17TWindowSubComCardFPvff(temp_r31, lbl_805DD73C, lbl_805DD740);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD740;

s32 create_menu__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(TWindowSubComCard__sub_8026CBB8(0x79), 3, get_message_10__20TWindowSubStatusDispFPv(0xAA));
    if (compute_total_height__20TWindowSubSymbolChatFv() <= 0) {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB0), 6, 0x16);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB1), 6, 0x1A);
    } else {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB0), 6, 0x16);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB1), 6, 0x1A);
    }
    if (is_initialized__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB2), 6, 0x1C);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB2), 6, 0x1C);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    set_scroll_target__17TWindowSubComCardFPvff(temp_r31, lbl_805DD73C, lbl_805DD740);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802821D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_parts_set__20TWindowSubSymbolChatFPv(void *arg0);
s32 create_parts__20TWindowSubSymbolChatFv(void);
s32 TWindowSubSymbolChatPartsSet__ct(s32, s32, s16, M2C_UNK *, M2C_UNK *);
s32 TWindowSubSymbolChatParts__ct(s32, s32, M2C_UNK *, M2C_UNK *);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern M2C_UNK TWindowSubSymbolChat__data_805D6498;
extern M2C_UNK TWindowSubSymbolChat__data_805D649C;

s32 create_parts_set__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x98);
    if (var_r31 != 0) {
        var_r31 = TWindowSubSymbolChatPartsSet__ct(var_r31, TWindowSubComCard__sub_8026CBB8(0x7D), M2C_FIELD(arg0, s16 *, 0x1E), &TWindowSubSymbolChat__data_805D6498, &TWindowSubSymbolChat__data_805D649C);
    }
    return var_r31;
}

extern M2C_UNK TWindowSubSymbolChat__data_805D6498;
extern M2C_UNK TWindowSubSymbolChat__data_805D649C;

s32 create_parts__20TWindowSubSymbolChatFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x90);
    if (var_r31 != 0) {
        var_r31 = TWindowSubSymbolChatParts__ct(var_r31, TWindowSubComCard__sub_8026CBB8(0x7D), &TWindowSubSymbolChat__data_805D6498, &TWindowSubSymbolChat__data_805D649C);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80282288
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_menu__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 refresh_parts__20TWindowSubSymbolChatFPv();
M2C_UNK TWindowSubComCard__sub_802655E4(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD744;

void open_menu__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1) {
    s32 temp_r3;
    TWindowSubComCard__sub_802655E4(arg1);
    temp_r3 = refresh_parts__20TWindowSubSymbolChatFPv();
    if (temp_r3 > 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(arg1, get_message_10__20TWindowSubStatusDispFPv(0xAE), 6, 0xC);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(arg1, get_message_10__20TWindowSubStatusDispFPv(0xAE), 6, 0xC);
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(arg1, get_message_10__20TWindowSubStatusDispFPv(0xAF), 6, 0x10);
    set_flag70_bit10__16TObjCityMainWarpFPv(arg1);
    set_scroll_target__17TWindowSubComCardFPvff(arg1, lbl_805DD73C, lbl_805DD744);
    TWindowSubComCard__sub_80265C30(arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028239C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open_edit_menu__20TWindowSubSymbolChatFPv(void *arg0);
s32 open_main_menu__20TWindowSubSymbolChatFv(void);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s8 get_global_4e54__20TWindowSubSymbolChatFv();
s32 is_initialized__20TWindowSubSymbolChatFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern const f32 lbl_805DD73C;
extern const f32 lbl_805DD740;

s32 open_edit_menu__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(TWindowSubComCard__sub_8026CBB8(0x79), 3, get_message_10__20TWindowSubStatusDispFPv(0xA8));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB3), 6, 8);
    if (is_initialized__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB4), 6, 0x1E);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB4), 6, 0x1E);
    }
    if (get_global_4e54__20TWindowSubSymbolChatFv() > 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB5), 6, 0x20);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xB5), 6, 0x20);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    set_scroll_target__17TWindowSubComCardFPvff(temp_r31, lbl_805DD73C, lbl_805DD740);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

extern const f32 lbl_805DD73C;

s32 open_main_menu__20TWindowSubSymbolChatFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(TWindowSubComCard__sub_8026CBB8(0x78), 6, get_message_10__20TWindowSubStatusDispFPv(0x1D));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xA8), 6, 6);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xA9), 6, 0xA);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAA), 6, 0x14);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAB), 6, 0x22);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAC), 6, 0x26);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xAD), 6, 0x28);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD73C);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802825D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_symbol__20TWindowSubSymbolChatFPv(void *arg0);
M2C_UNK TWindowSubComCard__sub_80265680(s32, s16);

void apply_symbol__20TWindowSubSymbolChatFPv(void *arg0) {
    TWindowSubComCard__sub_80265680(M2C_FIELD(arg0, s32 *, 0x38), (s16) M2C_FIELD(arg0, s32 *, 0x20));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80282740
#include "types.h"

extern "C" {

void render__20TWindowSubSymbolChatFv(void);

void render__20TWindowSubSymbolChatFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802836E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubSymbolChat__ct(void *arg0, s32 arg1, s32 arg2);
s32 update_display__20TWindowSubSymbolChatFi(M2C_UNK *);
M2C_UNK __ct__7TObjectFP7TObject();

extern M2C_UNK close_child__20TWindowSubSymbolChatFv[];
extern M2C_UNK __vt__20TWindowSubSymbolChat[];
extern s32 lbl_805D3AA8;
extern void *lbl_805D6490;
extern s8 TWindowSubSymbolChat__data_805D6494;
extern s32 TWindowSubSymbolChat__data_805D6498;
extern s32 TWindowSubSymbolChat__data_805D649C;

void *TWindowSubSymbolChat__ct(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowSubSymbolChat;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3AA8;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    TWindowSubSymbolChat__data_805D6494 = 0;
    TWindowSubSymbolChat__data_805D6498 = 0;
    TWindowSubSymbolChat__data_805D649C = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    lbl_805D6490 = arg0;
    M2C_FIELD(arg0, s32 *, 0x5C) = update_display__20TWindowSubSymbolChatFi(close_child__20TWindowSubSymbolChatFv);
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80284D4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_symbol_index__20TWindowSubSymbolChatFPv(void *arg0);

s32 calc_symbol_index__20TWindowSubSymbolChatFPv(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0x72) + ((s8) M2C_FIELD(arg0, u8 *, 0x73) * 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802859A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_height__20TWindowSubSymbolChatFPv(void *arg0);
s16 compute_total_height__20TWindowSubSymbolChatFv();
M2C_UNK fn_80284C04(void *);

void update_height__20TWindowSubSymbolChatFPv(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x76) = compute_total_height__20TWindowSubSymbolChatFv();
    fn_80284C04(arg0);
    M2C_FIELD(arg0, s8 *, 0x71) = 2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802859E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open__20TWindowSubSymbolChatFPvi(void *arg0, s32 arg1);
M2C_UNK fn_80284C04();

void open__20TWindowSubSymbolChatFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x78) = arg1;
    M2C_FIELD(arg0, s16 *, 0x76) = 0xC0;
    fn_80284C04();
    M2C_FIELD(arg0, s8 *, 0x71) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ACF5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_display__20TWindowSubSymbolChatFi(s32 arg0);
s32 fn_8026CB74();
M2C_UNK create_callback__22TAdEnterSerialAccessGCFPvPvPv(s32, s32, s32);

void update_display__20TWindowSubSymbolChatFi(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_8026CB74();
    create_callback__22TAdEnterSerialAccessGCFPvPvPv(fn_8026CB74(), temp_r31, arg0);
}

}
#endif
#endif
