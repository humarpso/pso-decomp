#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u8 *lbl_805D553C;
s32 TWindowSubMag__sub_8027C0B0(s32 arg0);
extern const f32 lbl_805DD668;
bool TWindowSubMag__sub_8027C0F4(u8 *arg0);
}

extern "C" {

void *TWindowSubMag__ct(void *arg0, s32 arg1, s32 arg2);
int TWindowSubMag__sub_8027C0C4(s32);
int TWindowSubMag__sub_8027C0E8(void* p);
void *__dt__13TWindowSubMagFv(void *arg0, s16 arg1);
void clear_flag60_bit8__13TWindowSubMagFPv(void* p);
s32 count_slots__13TWindowSubMagFPv(void *arg0);
void *create__13TWindowSubMagFPv(void *arg0);
s32 create_list__13TWindowSubMagFPv(void *arg0);
int get_active_flag__13TWindowSubMagFPv(void* p);
s32 get_mag_state__13TWindowSubMagFPv(void* p);
void render__13TWindowSubMagFv(void);
void set_flag60_bit8__13TWindowSubMagFPv(void* p);
void set_mag_mode__13TWindowSubMagFPvi(void *arg0, s32 arg1);
s32 setup_list__13TWindowSubMagFPv(void *arg0);
void update_displayed_item__13TWindowSubMagFPv(void *arg0);
void update_mag_help__13TWindowSubMagFPv(void *arg0);
M2C_UNK TItemData__sub_8010D614(s32, M2C_UNK *);
s32 TItemMag__sub_801143E8(M2C_UNK *, s32);
void *TLobby__sub_80269CC0(M2C_UNK, M2C_UNK *, s32, M2C_UNK);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(s32, s32);
M2C_UNK *TWindowHelpItem__sub_80255DC8(s32);
s32 TWindowShortListCtrl__sub_80278E48(s32, M2C_UNK *, s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
M2C_UNK TWindow__close(void *);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK call_if_split_screen(void *, s32);
M2C_UNK close_list__20TShopArmorListWindowFPv(s32);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(s32, s32);
M2C_UNK fn_80263A20(s32, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK init_and_setup__13TWindowSubMagFPvPv(s32, M2C_UNK);
M2C_UNK initialize_mag_data__9TItemDataFPv(M2C_UNK *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 select_cursor_entry__6TLobbyFPv(s32);
M2C_UNK send_and_handle__6TLobbyFPvii(s32, M2C_UNK *, M2C_UNK);
M2C_UNK set_field_1c__6TLobbyFPvf(void *);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);

extern M2C_UNK lbl_805DD648;

void update_mag_help__13TWindowSubMagFPv(void *arg0) {
    s32 temp_r3;

    fn_80263A20(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x28));
    temp_r3 = TWindowSubMag__sub_8027C0C4((s32)(M2C_FIELD(arg0, s32 *, 0x48)));
    if (temp_r3 != (s8) M2C_FIELD(arg0, u8 *, 0x1D)) {
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) temp_r3;
        if (temp_r3 == -1) {
            send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x4C), &lbl_805DD648, 0x80);
            return;
        }
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x4C), TWindowHelpItem__sub_80255DC8(temp_r3 + 0x27), 0x80);
    }
}

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

extern M2C_UNK lbl_8044FA00[];

void *create__13TWindowSubMagFPv(void *arg0) {
    void *temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0xB));
    temp_r31 = TLobby__sub_80269CC0(temp_r3, lbl_8044FA00, 1, M2C_FIELD(arg0, s32 *, 0x28));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 4);
    set_field_1c__6TLobbyFPvf((void *)(temp_r31));
    M2C_FIELD(temp_r31, s32 *, 0x5C) = 0x186A0;
    call_if_split_screen(temp_r31, M2C_FIELD(arg0, s32 *, 0x28));
    return temp_r31;
}

extern M2C_UNK lbl_8044F9F8[];

s32 create_list__13TWindowSubMagFPv(void *arg0) {
    s32 temp_r31;

    s32 temp_r3 = TWindowSubComCard__sub_8026CBB8((M2C_UNK)((M2C_UNK)(0xD)));
    temp_r31 = TWindowShortListCtrl__sub_80278E48((s32)(temp_r3), (M2C_UNK *)(lbl_8044F9F8), (s32)(M2C_FIELD(arg0, s32 *, 0x28)));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x24));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 2);
    set_field_1c__6TLobbyFPvf((void *)(temp_r31));
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    close_list__20TShopArmorListWindowFPv(temp_r31);
    return temp_r31;
}

extern M2C_UNK lbl_8044F9F0[];

s32 setup_list__13TWindowSubMagFPv(void *arg0) {
    s32 temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = TWindowSubComCard__sub_8026CBB8((M2C_UNK)((M2C_UNK)(7)));
    temp_r31 = TWindowShortListCtrl__sub_80278E48((s32)(temp_r3), (M2C_UNK *)(lbl_8044F9F0), (s32)(M2C_FIELD(arg0, s32 *, 0x28)));
    ensure_status_display__20TWindowSubStatusDispFPvi(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x29));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 0);
    set_field_1c__6TLobbyFPvf((void *)(temp_r31));
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    init_and_setup__13TWindowSubMagFPvPv(temp_r31, 2);
    return temp_r31;
}

void render__13TWindowSubMagFv(void) {  }

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

extern M2C_UNK __vt__13TWindowSubMag[];
extern s32 lbl_805D3A68;

void *TWindowSubMag__ct(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowSubMag;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3A68;
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = setup_list__13TWindowSubMagFPv((void *)(arg0));
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

s32 TWindowSubMag__sub_8027C0B0(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(lbl_805D553C, s32 *, 0x20), M2C_UNK *, (arg0 * 4));
}

int TWindowSubMag__sub_8027C0C4(s32) { return 0; }

int get_active_flag__13TWindowSubMagFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubMag__sub_8027C0E8(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

bool TWindowSubMag__sub_8027C0F4(u8 *arg0) {
    return (M2C_FIELD(arg0, f32 *, 0x194) < lbl_805DD668) == 0;
}

void set_flag60_bit8__13TWindowSubMagFPv(void* p) { *(u8*)((char*)p + 0x60) |= 0x8; }
void clear_flag60_bit8__13TWindowSubMagFPv(void* p) { *(u8*)((char*)p + 0x60) &= 0xfffffff7; }
s32 get_mag_state__13TWindowSubMagFPv(void* p) { return *(s32*)((char*)p + 0x68); }

}
