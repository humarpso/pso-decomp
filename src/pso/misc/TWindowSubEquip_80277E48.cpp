#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(int);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(int);
M2C_UNK set_field_1c__6TLobbyFPvf(int);
M2C_UNK TWindowSubEquip__sub_80263AF8(int, int);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(int, int);
void *TWindowSubComCard__sub_8026CBB8(int);
M2C_UNK fn_80278460(int);
M2C_UNK save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv(int, int, int);
M2C_UNK init_and_setup__13TWindowSubMagFPvPv(int, int);
s32 TWindowShortListCtrl__sub_80278E48(void *, void *, int);
extern M2C_UNK lbl_8044F920[];
s32 TWindowSubEquip__sub_80277E48(u8 *arg0, u32 arg1);
}

extern "C" {

void *__dt__15TWindowSubEquipFv(void *arg0, s16 arg1);
void render__15TWindowSubEquipFv(void);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

s32 TWindowSubEquip__sub_80277E48(u8 *arg0, u32 arg1) {
    s32 temp_r31;
    temp_r31 = TWindowShortListCtrl__sub_80278E48(TWindowSubComCard__sub_8026CBB8(1), (void *) (lbl_8044F920), (int) (M2C_FIELD(arg0, s32 *, 0x28)));
    TWindowSubEquip__sub_80263AF8((int) (M2C_FIELD(arg0, s32 *, 0x2C)), (int) (1));
    set_field_1c__6TLobbyFPvf((int) (temp_r31));
    ensure_status_display__20TWindowSubStatusDispFPvi((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x24))));
    set_flag70_bit10__20TWindowShortListCtrlFPv((int) (temp_r31));
    switch (arg1) {
    case 6:
        init_and_setup__13TWindowSubMagFPvPv((int) (temp_r31), (int) (0));
        break;
    case 2:
        save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv((int) (temp_r31), (int) (1), (int) (1));
        break;
    case 9:
    case 10:
    case 11:
    case 12:
        save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv((int) (temp_r31), (int) (1), (int) (3));
        break;
    case 3:
        save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv((int) (temp_r31), (int) (1), (int) (2));
        break;
    case 1:
        init_and_setup__13TWindowSubMagFPvPv((int) (temp_r31), (int) (2));
        break;
    }
    fn_80278460((int) (temp_r31));
    return temp_r31;
}

void render__15TWindowSubEquipFv(void) {  }

extern M2C_UNK __vt__15TWindowSubEquip[];

void *__dt__15TWindowSubEquipFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowSubEquip;
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
