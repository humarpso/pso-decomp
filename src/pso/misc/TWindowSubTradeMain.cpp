#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TWindowSubTradeMain__sub_803323C8(void* p);
void TWindowSubTradeMain__sub_803323A8(void* p);
void TWindowSubTradeMain__sub_803323B8(void* p);

void TWindowSubTradeMain__sub_803323A8(void* p) { *(u16*)((char*)p + 0x60) |= 0x40; }
void TWindowSubTradeMain__sub_803323B8(void* p) { *(u16*)((char*)p + 0x60) &= 0xffffffbf; }
void TWindowSubTradeMain__sub_803323C8(void* p) { *(u16*)((char*)p + 0x70) &= 0xfffffffb; }

}
#else
#if PSO_CLASS_PACKAGE == 0x80187C98
#include "types.h"

extern "C" {

void send_60_update__19TWindowSubTradeMainFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TWindowSubTradeMain__sub_80187CCC(void*);
void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void* p);

void send_60_update__19TWindowSubTradeMainFPv(void* p) { TWindowSubTradeMain__sub_80187CCC(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80187D08
#include "types.h"

extern "C" {

void send_60_update__19TWindowSubTradeMainFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TWindowSubTradeMain__sub_80187CCC(void*);
void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void* p);

void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void* p) { *(u8*)((char*)p + 0x0) = 106; *(u8*)((char*)p + 0x1) = 2; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80187D1C
#include "types.h"

extern "C" {

int get_warp_state__19TWindowSubTradeMainFv(void);

    extern int lbl_805D3458;
int get_warp_state__19TWindowSubTradeMainFv(void) {  return lbl_805D3458; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80187D24
#include "types.h"

extern "C" {

void set_close_flag__19TWindowSubTradeMainFPv(void* p);
void set_visible__19TWindowSubTradeMainFPv(void* p);

void set_close_flag__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x80; }
void set_visible__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x40; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80266C44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_trade_state__19TWindowSubTradeMainFPv(void *arg0);
void close__19TWindowSubTradeMainFPv(void *arg0);
M2C_UNK clear_flag70_bit80__19TWindowSubTradeMainFPv(void *);
s32 get_status_flag__6TLobbyFPv();
M2C_UNK set_close_flag__19TWindowSubTradeMainFPv(void *);
M2C_UNK set_visible__19TWindowSubTradeMainFPv();
M2C_UNK clear_flag__19TWindowSubTradeMainFPv(void *);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(u32, M2C_UNK);

void update_trade_state__19TWindowSubTradeMainFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        if (get_status_flag__6TLobbyFPv() != 0) {
            set_entry_state__20TWindowSubStatusDispFPvc((u32)(M2C_FIELD(arg0, u32 *, 0x80)), (M2C_UNK)(2));
        } else {
            set_entry_state__20TWindowSubStatusDispFPvc((u32)(M2C_FIELD(arg0, u32 *, 0x80)), (M2C_UNK)(1));
        }
    }
    clear_flag70_bit80__19TWindowSubTradeMainFPv(arg0);
    clear_flag__19TWindowSubTradeMainFPv(arg0);
}

void close__19TWindowSubTradeMainFPv(void *arg0) {
    set_visible__19TWindowSubTradeMainFPv();
    set_close_flag__19TWindowSubTradeMainFPv(arg0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc((u32)(M2C_FIELD(arg0, u32 *, 0x80)), (M2C_UNK)(0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80268468
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag__19TWindowSubTradeMainFPv(void* p);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 is_open__17TWindowSubComCardFPv();
M2C_UNK get_entry_id__17TWindowSubComCardFPv();
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
s32 set_text__20TWindowSubStatusDispFPvUiii(s32, s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFPvUii(s32, s32, s32);
int is_flag80_set__20TWindowSubStatusDispFPv(void* p);
s32 TWindowSubComCard__sub_8026906C(void);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);

void clear_flag__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffffbf; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80268478
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_text__20TWindowSubStatusDispFPvUiii(s32, s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFPvUii(s32, s32, s32);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 TWindowSubComCard__sub_8026906C(void);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
s32 is_open__17TWindowSubComCardFPv();
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
M2C_UNK get_entry_id__17TWindowSubComCardFPv();
void clear_flag__19TWindowSubTradeMainFPv(void* p);
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
int is_flag80_set__20TWindowSubStatusDispFPv(void* p);

void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffff7f; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80278300
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_trade_state__19TWindowSubTradeMainFPvs(void *arg0, s16 arg1);

void set_trade_state__19TWindowSubTradeMainFPvs(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x88) = arg1;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x88) == 3) {
        M2C_FIELD(arg0, s16 *, 0x8A) = 0x3C;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802785B0
#include "types.h"

extern "C" {

void refresh_item_list__19TWindowSubTradeMainFPvPv(void* p, void* a1);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int TShopArmorListWindow__sub_80266CF8(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int fn_802787F0(void*, void*);

void refresh_item_list__19TWindowSubTradeMainFPvPv(void* p, void* a1) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); fn_802787F0(p, a1); TShopArmorListWindow__sub_80266CF8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D220C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TLobby__sub_802D2334(void);
void TLobby__sub_802D22F0(void* p, void* q);
void* get_trade_obj_ptr__6TLobbyFPv(void* p);

s32 get_state__19TWindowSubTradeMainFv(void) {
    void *temp_r3;

    temp_r3 = TLobby__sub_802D2334();
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 4);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D2824
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubTradeMain__sub_802D2824(void);
void TWindowSubTradeMain__sub_802D2834(void);

extern u16 lbl_805D6888;

void TWindowSubTradeMain__sub_802D2824(void) {
    lbl_805D6888 &= 0xFFFFFF7F;
}

extern u16 lbl_805D6888;

void TWindowSubTradeMain__sub_802D2834(void) {
    lbl_805D6888 |= 0x80;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D2844
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubTradeMain__sub_802D2844(void);

extern u16 lbl_805D6888;

s32 TWindowSubTradeMain__sub_802D2844(void) {
    return ((u16) lbl_805D6888 >> 4U) & 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D2850
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubTradeMain__sub_802D2850(void);
void TWindowSubTradeMain__sub_802D2860(void);

extern u16 lbl_805D6888;

void TWindowSubTradeMain__sub_802D2850(void) {
    lbl_805D6888 &= 0xFFFFFFEF;
}

extern u16 lbl_805D6888;

void TWindowSubTradeMain__sub_802D2860(void) {
    lbl_805D6888 |= 0x10;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D28CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void draw_offer__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1);
void draw_request__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1);
void TLobby__sub_802D3228(int, void *, void *);
void TLobby__sub_802D1DE4(void *, void *, void *);
void TLobby__sub_802D1E64(void *, void *, void *);
void draw_item_slot__19TWindowSubTradeMainFPv(void *);

extern M2C_UNK TLobby__data_80540BD0[];
extern void *TLobby__data_805D6898;

void draw_offer__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1) {
    TLobby__sub_802D3228(2, arg0, arg1);
    TLobby__sub_802D1DE4(TLobby__data_80540BD0, arg0, arg1);
    if (TLobby__data_805D6898 != NULL) {
        draw_item_slot__19TWindowSubTradeMainFPv(TLobby__data_805D6898);
    }
}

extern M2C_UNK TLobby__data_80540BD0[];
extern void *TLobby__data_805D6898;

void draw_request__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1) {
    TLobby__sub_802D3228(1, arg0, arg1);
    TLobby__sub_802D1E64(TLobby__data_80540BD0, arg0, arg1);
    if (TLobby__data_805D6898 != NULL) {
        draw_item_slot__19TWindowSubTradeMainFPv(TLobby__data_805D6898);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D3940
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubTradeMain__sub_802D3940(s32 arg0);
void TWindowSubTradeMain__sub_802D3958(s32 arg0);

extern u16 lbl_805D6888;

void TWindowSubTradeMain__sub_802D3940(s32 arg0) {
    lbl_805D6888 &= ~(1 << arg0);
}

extern u16 lbl_805D6888;

void TWindowSubTradeMain__sub_802D3958(s32 arg0) {
    lbl_805D6888 |= 1 << arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80330A84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 refresh_item_list__19TWindowSubTradeMainFPvPv(u32, s32);
s32 TLobby__sub_802D29AC();
s32 set_trade_state__19TWindowSubTradeMainFPvs(u32, s32);
s32 TLobby__sub_802D299C();
void TWindowSubTradeMain__sub_80330A84(void* p);

void TWindowSubTradeMain__sub_80330A84(void* p) { *(u8*)((char*)p + 0x1c) = 30; }
void forward_to_child__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    u32 temp = M2C_FIELD(arg0, u32 *, 0x40);
    if (temp != 0U) {
        set_trade_state__19TWindowSubTradeMainFPvs(temp, (s16) arg1);
    }
}
void notify_child_if_present__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    u32 temp = M2C_FIELD(arg0, u32 *, 0x3C);
    if (temp != 0U) {
        set_trade_state__19TWindowSubTradeMainFPvs(temp, (s16) arg1);
    }
}
void draw_item_slot__19TWindowSubTradeMainFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        refresh_item_list__19TWindowSubTradeMainFPvPv(M2C_FIELD(arg0, u32 *, 0x40), TLobby__sub_802D29AC());
    }
}
void update_trade_window__19TWindowSubTradeMainFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        refresh_item_list__19TWindowSubTradeMainFPvPv(M2C_FIELD(arg0, u32 *, 0x3C), TLobby__sub_802D299C());
        set_trade_state__19TWindowSubTradeMainFPvs(M2C_FIELD(arg0, u32 *, 0x3C), 3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80330D74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_labels__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1);
s32 TWindowSubComCard__sub_8026CBB8(s32);
M2C_UNK TWindowSubComCard__sub_802A5628(u32, s32);
M2C_UNK TWindowSubTradeMain__sub_80330B84(void *, u32, s32);

void set_labels__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindowSubTradeMain__sub_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x30), TWindowSubComCard__sub_8026CBB8(arg1 + 0x5C));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindowSubTradeMain__sub_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x34), TWindowSubComCard__sub_8026CBB8(arg1 + 0x5E));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindowSubComCard__sub_802A5628(M2C_FIELD(arg0, u32 *, 0x38), TWindowSubComCard__sub_8026CBB8(arg1 + 0x5F));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindowSubTradeMain__sub_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x3C), TWindowSubComCard__sub_8026CBB8(arg1 + 0x62));
        } else {
            TWindowSubTradeMain__sub_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x3C), TWindowSubComCard__sub_8026CBB8(arg1 + 0x60));
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindowSubTradeMain__sub_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x40), TWindowSubComCard__sub_8026CBB8(arg1 + 0x63));
        } else {
            TWindowSubTradeMain__sub_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x40), TWindowSubComCard__sub_8026CBB8(arg1 + 0x61));
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        TWindowSubTradeMain__sub_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x44), TWindowSubComCard__sub_8026CBB8(arg1 + 0x64));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        TWindowSubTradeMain__sub_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x48), TWindowSubComCard__sub_8026CBB8(arg1 + 0x5D));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        TWindowSubTradeMain__sub_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x4C), TWindowSubComCard__sub_8026CBB8(arg1 + 0x65));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80330F0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_displayed_item__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1);
s32 create_help_item__19TWindowSubTradeMainFPv(void *arg0);
s32 TWindowHelpItem__ct(s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(u32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);

void set_displayed_item__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x24))) {
        M2C_FIELD(arg0, s32 *, 0x24) = arg1;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, u32 *, 0x4C));
    }
}

s32 create_help_item__19TWindowSubTradeMainFPv(void *arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0xBC);
    if (var_r31 != 0) {
        var_r31 = TWindowHelpItem__ct(var_r31, TWindowSubComCard__sub_8026CBB8(2), M2C_FIELD(arg0, s32 *, 0x28));
    }
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80330FAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_input_number__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1);
s32 TWindowInputNumber__ct(s32, s32, M2C_UNK, s32, M2C_UNK, s16);
M2C_UNK set_value__18TWindowInputNumberFPvf(s32, f32);
M2C_UNK create__18TWindowInputNumberFPvi(s32, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern f32 TWindowSubTradeMain__data_805DF858;

s32 create_input_number__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x7C);
    if (var_r31 != 0) {
        var_r31 = TWindowInputNumber__ct(var_r31, TWindowSubComCard__sub_8026CBB8(0x5D), 1, arg1, 1, (s16) M2C_FIELD(arg0, s32 *, 0x28));
    }
    create__18TWindowInputNumberFPvi(var_r31, get_message_10__20TWindowSubStatusDispFPv(0x28));
    set_value__18TWindowInputNumberFPvf(var_r31, TWindowSubTradeMain__data_805DF858);
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80331038
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_list__19TWindowSubTradeMainFPv(void *arg0);
s32 TWindowShortListCtrl__sub_80278E48(M2C_UNK, M2C_UNK *, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK refresh_item_list__19TWindowSubTradeMainFPvPv(s32, s32);
s32 TLobby__sub_802D298C();

extern M2C_UNK lbl_80477494[];

s32 create_list__19TWindowSubTradeMainFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = TWindowShortListCtrl__sub_80278E48(TWindowSubComCard__sub_8026CBB8(0x64), lbl_80477494, M2C_FIELD(arg0, s32 *, 0x28));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x24));
    refresh_item_list__19TWindowSubTradeMainFPvPv(temp_r31, TLobby__sub_802D298C());
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 2);
    set_field_1c__6TLobbyFPvf(temp_r31);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033133C
#include "types.h"

extern "C" {

s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 TLobby__sub_802D268C();
int TWindowSubTradeMain__sub_8033131C(void* p);
int TWindowSubTradeMain__sub_803312BC(void*, void* a1 = 0);

void open_status_window__19TWindowSubTradeMainFi(s32 arg0) {
    TWindowSubTradeMain__sub_803312BC((void*)(arg0), (void*)(get_message_10__20TWindowSubStatusDispFPv(0xF7)));
}
void update_from_lobby__19TWindowSubTradeMainFi(s32 arg0) {
    TWindowSubTradeMain__sub_803312BC((void*)(arg0), (void*)(TLobby__sub_802D268C()));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80331628
#include "types.h"

extern "C" {

void render__19TWindowSubTradeMainFv(void);

void render__19TWindowSubTradeMainFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80332148
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TWindowSubTradeMainFv(void *arg0, s16 arg1);
M2C_UNK check_flags_and_proceed__6TLobbyFv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowCtrl__sub_8024ADF0(s32);
M2C_UNK TWindowSubComCard__sub_8024AB98(s32);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK cleanup__13TWindowSubLogFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK end_camera_pan__10TObjPlayerFPv();
M2C_UNK TLobby__sub_802D29E8(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern void* __vt__19TWindowSubTradeMain[];

void *__dt__19TWindowSubTradeMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__19TWindowSubTradeMain;
        TLobby__sub_802D29E8(arg0);
        check_flags_and_proceed__6TLobbyFv();
        if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x28)) != 0U) {
            end_camera_pan__10TObjPlayerFPv();
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x50));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x4C));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x48));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x44));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            cleanup__13TWindowSubLogFPv(M2C_FIELD(arg0, void **, 0x2C));
        }
        TWindowCtrl__sub_8024ADF0(M2C_FIELD(arg0, s32 *, 0x28));
        TWindowSubComCard__sub_8024AB98(M2C_FIELD(arg0, s32 *, 0x28));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803322B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubTradeMain__ct(void *arg0, void *arg1, void *arg2);
void *TPlayerBattleCtrl4P__sub_801BA74C(void *);
void *TWindowChat__ct(void *, void *, void *);
void TWindowCtrl__sub_8024ADAC(void *);
void TWindowSubTradeMain__sub_802D2870(void);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void start_freeze__10TObjPlayerFPv(void *);
void fn_8024AB54(void *);
void fn_8027B288(void *);
void fn_8027B2A8(void *);
void TLobby__sub_802D2A0C(void *);

extern M2C_UNK __vt__19TWindowSubTradeMain[];
extern void *lbl_805D4228;

void *TWindowSubTradeMain__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    void *x;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubTradeMain;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4228;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    M2C_FIELD(arg0, u8 *, 0x1D) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x28) = arg2;
    M2C_FIELD(arg0, void **, 0x2C) = arg1;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    M2C_FIELD(arg0, u32 *, 0x4C) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = -1;
    fn_8024AB54(M2C_FIELD(arg0, void **, 0x28));
    TWindowCtrl__sub_8024ADAC(M2C_FIELD(arg0, void **, 0x28));
    TLobby__sub_802D2A0C(arg0);
    TWindowSubTradeMain__sub_802D2870();
    fn_8027B288(M2C_FIELD(arg0, void **, 0x2C));
    o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = TWindowChat__ct(o, arg0, (void *)((char *)arg0 + 84));
    }
    M2C_FIELD(arg0, void **, 0x50) = o;
    fn_8027B2A8(M2C_FIELD(arg0, void **, 0x50));
    x = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, void **, 0x28));
    if (x != NULL) {
        start_freeze__10TObjPlayerFPv(x);
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80187CCC
#include "types.h"

extern "C" {

void TWindowSubTradeMain__sub_80187CCC(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void* a0 = 0);
void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
void send_60_update__19TWindowSubTradeMainFPv(void* p);

void TWindowSubTradeMain__sub_80187CCC(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#endif
