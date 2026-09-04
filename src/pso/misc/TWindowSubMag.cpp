#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_displayed_item__13TWindowSubMagFPv(void *arg0);
s32 count_slots__13TWindowSubMagFPv(void *arg0);
void set_mag_mode__13TWindowSubMagFPvi(void *arg0, s32 arg1);
M2C_UNK initialize_mag_data__9TItemDataFPv(M2C_UNK *);
M2C_UNK TItemData__sub_8010D614(s32, M2C_UNK *);
s32 TItemMag__sub_801143E8(M2C_UNK *, s32);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(s32, s32);
s32 select_cursor_entry__6TLobbyFPv(s32);

void update_displayed_item__13TWindowSubMagFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x34));
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        M2C_FIELD(arg0, s32 *, 0x24) = temp_r3;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, s32 *, 0x40), temp_r3);
    }
}

s32 count_slots__13TWindowSubMagFPv(void *arg0) {
    M2C_UNK sp8;
    s32 var_r31;

    initialize_mag_data__9TItemDataFPv(&sp8);
    TItemData__sub_8010D614(M2C_FIELD(arg0, s32 *, 0x2C), &sp8);
    var_r31 = 0;
loop_1:
    if (TItemMag__sub_801143E8(&sp8, var_r31) == -1) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 3) {
        return var_r31;
    }
    goto loop_1;
}

void set_mag_mode__13TWindowSubMagFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 1:
        M2C_FIELD(arg0, s8 *, 0x1C) = 5;
        return;
    case 0:
        M2C_FIELD(arg0, s8 *, 0x1C) = 0xE;
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801B7E78
#include "types.h"

extern "C" {

void feed_mag__13TWindowSubMagFPvPvPv(void* p, void* a1, void* a2);
int fn_801B7E14(void*);
int TObjPlayer__sub_801B8DE8(void*, void*, void*);

void feed_mag__13TWindowSubMagFPvPvPv(void* p, void* a1, void* a2) { fn_801B7E14(p); TObjPlayer__sub_801B8DE8(p, a2, (void*)1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802559F8
#include "types.h"

extern "C" {

void update_help_item__13TWindowSubMagFPv(void* p);
int TWindowHelpItem__sub_80255440(void*);
int fn_8026C7C0(void*);

void update_help_item__13TWindowSubMagFPv(void* p) { if (fn_8026C7C0(*(void**)((char*)p + 0x64)) != 0) { TWindowHelpItem__sub_80255440(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80255E14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 is_confirmed__18TWindowInputNumberFPv();
s32 TWindowHelpItem__sub_80255DDC(void* p);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s16 get_value__20TWindowSubStatusDispFPv(void* p);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);

void set_flag60_bit4__13TWindowSubMagFPv(void* p) { *(u8*)((char*)p + 0x60) |= 0x4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802627D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowSubMag__sub_802627D8(void* p);
int is_cursor_locked__13TWindowSubMagFPv(void* p);
int get_flag_bit6__13TWindowSubMagFPv(void* p);
int get_flag_bit5__13TWindowSubMagFPv(void* p);
int TWindowSubMag__sub_80262808(void* p);
s32 TItemTexLoad__sub_8011D098(s32 a0 = 0, s32 a1 = 0);
u16 * get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s32 a1 = 0);

int TWindowSubMag__sub_802627D8(void* p) { return *(u32*)((char*)p + 0x60) & 0x1; }
int is_cursor_locked__13TWindowSubMagFPv(void* p) { return (*(u32*)((char*)p + 0x60) >> 7) & 0x1; }
int get_flag_bit6__13TWindowSubMagFPv(void* p) { return (*(u32*)((char*)p + 0x60) >> 6) & 0x1; }
int get_flag_bit5__13TWindowSubMagFPv(void* p) { return (*(u32*)((char*)p + 0x60) >> 5) & 0x1; }
int TWindowSubMag__sub_80262808(void* p) { return *(u16*)((char*)p + 0x62) & 0x8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80262814
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 * get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s32 a1 = 0);
s32 TItemTexLoad__sub_8011D098(s32 a0 = 0, s32 a1 = 0);
int TWindowSubMag__sub_802627D8(void* p);
int is_cursor_locked__13TWindowSubMagFPv(void* p);
int get_flag_bit6__13TWindowSubMagFPv(void* p);
int get_flag_bit5__13TWindowSubMagFPv(void* p);
int TWindowSubMag__sub_80262808(void* p);

void set_mag_slot_state__13TWindowSubMagFPvi(void *arg0, s32 arg1) {
    u16 *temp_r3;

    temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    *temp_r3 |= 2;
    if (TItemTexLoad__sub_8011D098(M2C_FIELD(arg0, s32 *, 0x6C), arg1) != 0) {
        M2C_FIELD(arg0, s8 *, 0x60) = 1;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x60) = 2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80267BF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_scroll__13TWindowSubMagFPvf(void *arg0, f32 farg0);

void start_scroll__13TWindowSubMagFPvf(void *arg0, f32 farg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (temp_r4 & 0x20) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 & 0xFFFFFFDF);
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80278760
#include "types.h"

extern "C" {

void init_and_setup__13TWindowSubMagFPvPv(void* p, void* a1);
int TShopArmorListWindow__sub_80266CF8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int fn_80278CCC(void*, void*);

void init_and_setup__13TWindowSubMagFPvPv(void* p, void* a1) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); fn_80278CCC(p, a1); TShopArmorListWindow__sub_80266CF8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027B2B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_mag_help__13TWindowSubMagFPv(void *arg0);
M2C_UNK send_and_handle__6TLobbyFPvii(s32, M2C_UNK *, M2C_UNK);
M2C_UNK *TWindowHelpItem__sub_80255DC8(s32);
s32 TWindowSubMag__sub_8027C0C4(s32);
M2C_UNK fn_80263A20(s32, s32);

extern M2C_UNK lbl_805DD648;

void update_mag_help__13TWindowSubMagFPv(void *arg0) {
    s32 temp_r3;

    fn_80263A20(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x28));
    temp_r3 = TWindowSubMag__sub_8027C0C4(M2C_FIELD(arg0, s32 *, 0x48));
    if (temp_r3 != (s8) M2C_FIELD(arg0, u8 *, 0x1D)) {
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) temp_r3;
        if (temp_r3 == -1) {
            send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x4C), &lbl_805DD648, 0x80);
            return;
        }
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x4C), TWindowHelpItem__sub_80255DC8(temp_r3 + 0x27), 0x80);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027B5B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__13TWindowSubMagFPv(void *arg0);
M2C_UNK set_field_1c__6TLobbyFPvf(void *);
M2C_UNK call_if_split_screen(void *, s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
void *TLobby__sub_80269CC0(M2C_UNK, M2C_UNK *, s32, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_8044FA00[];

void *create__13TWindowSubMagFPv(void *arg0) {
    void *temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xB);
    temp_r31 = TLobby__sub_80269CC0(temp_r3, lbl_8044FA00, 1, M2C_FIELD(arg0, s32 *, 0x28));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 4);
    set_field_1c__6TLobbyFPvf(temp_r31);
    M2C_FIELD(temp_r31, s32 *, 0x5C) = 0x186A0;
    call_if_split_screen(temp_r31, M2C_FIELD(arg0, s32 *, 0x28));
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027B778
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_list__13TWindowSubMagFPv(void *arg0);
s32 setup_list__13TWindowSubMagFPv(void *arg0);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);
s32 TWindowShortListCtrl__sub_80278E48(s32, M2C_UNK *, s32);
M2C_UNK init_and_setup__13TWindowSubMagFPvPv(s32, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK close_list__20TShopArmorListWindowFPv(s32);

extern M2C_UNK lbl_8044F9F8[];

s32 create_list__13TWindowSubMagFPv(void *arg0) {
    s32 temp_r31;

    s32 temp_r3 = TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0xD));
    temp_r31 = TWindowShortListCtrl__sub_80278E48((s32)(temp_r3), (M2C_UNK *)(lbl_8044F9F8), (s32)(M2C_FIELD(arg0, s32 *, 0x28)));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x24));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 2);
    set_field_1c__6TLobbyFPvf(temp_r31);
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    close_list__20TShopArmorListWindowFPv(temp_r31);
    return temp_r31;
}

extern M2C_UNK lbl_8044F9F0[];

s32 setup_list__13TWindowSubMagFPv(void *arg0) {
    s32 temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = TWindowSubComCard__sub_8026CBB8((M2C_UNK)(7));
    temp_r31 = TWindowShortListCtrl__sub_80278E48((s32)(temp_r3), (M2C_UNK *)(lbl_8044F9F0), (s32)(M2C_FIELD(arg0, s32 *, 0x28)));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x29));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 0);
    set_field_1c__6TLobbyFPvf(temp_r31);
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    init_and_setup__13TWindowSubMagFPvPv(temp_r31, 2);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027B884
#include "types.h"

extern "C" {

void render__13TWindowSubMagFv(void);

void render__13TWindowSubMagFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027BF1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__13TWindowSubMagFv(void *arg0, s16 arg1);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__13TWindowSubMag[];

void *__dt__13TWindowSubMagFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowSubMag;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x48));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x44));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027C020
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubMag__ct(void *arg0, s32 arg1, s32 arg2);
s32 setup_list__13TWindowSubMagFPv(void *);
M2C_UNK __ct__7TObjectFP7TObject();

extern M2C_UNK __vt__13TWindowSubMag[];
extern s32 lbl_805D3A68;

void *TWindowSubMag__ct(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowSubMag;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3A68;
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = setup_list__13TWindowSubMagFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027C0DC
#include "types.h"

extern "C" {

int get_active_flag__13TWindowSubMagFPv(void* p);
int TWindowSubMag__sub_8027C0E8(void* p);

int get_active_flag__13TWindowSubMagFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubMag__sub_8027C0E8(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027C114
#include "types.h"

extern "C" {

void set_flag60_bit8__13TWindowSubMagFPv(void* p);
void clear_flag60_bit8__13TWindowSubMagFPv(void* p);
s32 get_mag_state__13TWindowSubMagFPv(void* p);

void set_flag60_bit8__13TWindowSubMagFPv(void* p) { *(u8*)((char*)p + 0x60) |= 0x8; }
void clear_flag60_bit8__13TWindowSubMagFPv(void* p) { *(u8*)((char*)p + 0x60) &= 0xfffffff7; }
s32 get_mag_state__13TWindowSubMagFPv(void* p) { return *(s32*)((char*)p + 0x68); }

}
#endif
#endif
