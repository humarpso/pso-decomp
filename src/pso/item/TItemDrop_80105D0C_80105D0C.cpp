#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_8030A7B0();
s32 get_instance__6TLobbyFv();
s32 TItemDrop__sub_80105D60(void);
void *memset(void *dst, int c, u32 n);
void init_drop_table__9TItemDropFv(void);
extern u8 *TItemDrop__data_805D5468;
extern u8 *TItemDrop__data_805D546C;
void TItemDrop__sub_801063D8(void);
s32 get_task_id__14TFontSmallTaskFPv(void *p);
s32 calc_drop_offset__9TItemDropFi(s32 arg0);
s32 TItemDrop__sub_80105D60(void);
void TItemDrop__vt0(void);
extern u8 TLobby__data_805011D8[];
extern s32 lbl_805D2B78;
extern s32 TItemDrop__data_805D5470;
extern s32 TItemDrop__data_805D5474;
void TItemDrop__sub_8010643C(void);
}

extern "C" {

void TItemDrop__sub_80105D0C(void);
void TItemDrop__sub_80105D10(void);
s32 calc_drop_offset__9TItemDropFi(s32 arg0);
u8 can_drop__9TItemDropFv(void);
void clear_item_if_player_picked_up__9TItemDropFPvPv(void* p, void* a1);
void init_drop_table__9TItemDropFv(void);
u8 is_enabled__9TItemDropFv(void);
u8 is_not_special__9TItemDropFv(void);
void set_drop_index__9TItemDropFPvPv(void *arg0, void *arg1);
int TItemData__sub_8010C638(void*, void*);
s8 TItemDrop__sub_80107790(s32, s32, s32, s32, s32);
s32 TLobby__sub_8030A7B0();
int is_unsealable_item(void*);
u8 TObjPlayer__sub_8011C914(s32);
s32 get_drop_flag__6TLobbyFv();
s32 get_instance__6TLobbyFv();

void TItemDrop__sub_80105D0C(void) {  }

    extern int lbl_805D5450;
void TItemDrop__sub_80105D10(void) { lbl_805D5450 = 0; }

void clear_item_if_player_picked_up__9TItemDropFPvPv(void* p, void* a1) { if (is_unsealable_item(a1) == 1) { TItemData__sub_8010C638(a1, (void*)0); } }

extern s32 lbl_805D5550;

s32 TItemDrop__sub_80105D60(void) {
    s32 f = 0;
    if (TLobby__sub_8030A7B0() == 1) {
        f |= 1;
    } else {
        f &= ~1;
    }
    if (get_instance__6TLobbyFv() == 1) {
        f |= 2;
    } else {
        f &= ~2;
    }
    return f;
}

s32 calc_drop_offset__9TItemDropFi(s32 arg0) {
    s32 var_r31;

    var_r31 = arg0 + (lbl_805D5550 * 0xA);
    if (TLobby__sub_8030A7B0() == 1) {
        var_r31 += 0x50;
    } else if (get_instance__6TLobbyFv() == 1) {
        var_r31 += 0x28;
    }
    return var_r31;
}

u8 is_enabled__9TItemDropFv(void) {
    return (u8) (TLobby__sub_8030A7B0() != 1);
}

u8 is_not_special__9TItemDropFv(void) {
    return (u8) (TLobby__sub_8030A7B0() != 1);
}

u8 can_drop__9TItemDropFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((TLobby__sub_8030A7B0() != 1) && (get_drop_flag__6TLobbyFv() == 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

extern void *TItemDrop__data_805D5460;

void set_drop_index__9TItemDropFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s8 *, 5) = TItemDrop__sub_80107790((s32)arg0, M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0x14), 0, 5, 1);
}

extern u8 *TItemDrop__data_805D5468;

void init_drop_table__9TItemDropFv(void) {
    s32 var_r31;
    s8 temp_r0;
    u8 *var_r30;
    u8 temp_r3;
    u8 temp_r4;
    u8 temp_r5;

    var_r31 = 0;
    var_r30 = TItemDrop__data_805D5468;
    do {
        temp_r3 = TObjPlayer__sub_8011C914(var_r31 + 0x2AF);
        temp_r5 = temp_r3;
        var_r31 += 1;
        temp_r4 = temp_r5 - 1;
        M2C_FIELD(var_r30, u8 *, 0) = temp_r4;
        temp_r0 = temp_r5 + 1;
        M2C_FIELD(var_r30, u8 *, 1) = temp_r4;
        M2C_FIELD(var_r30, u8 *, 2) = temp_r3;
        M2C_FIELD(var_r30, s8 *, 3) = temp_r0;
        M2C_FIELD(var_r30, s8 *, 4) = temp_r0;
        var_r30 += 5;
    } while (var_r31 != 0x10);
    while (var_r31 != 0x48) {
        *var_r30 = TObjPlayer__sub_8011C914(var_r31 + 0x2AF);
        var_r30 += 1;
        var_r31 += 1;
    }
}
void TItemDrop__sub_801063D8(void) {
    s32 i;
    u8 v;
    memset(TItemDrop__data_805D546C, 0, 0xD);
    init_drop_table__9TItemDropFv();
    for (i = 0; i < 0x88; i++) {
        v = TItemDrop__data_805D5468[i];
        if (v < 0xD) {
            TItemDrop__data_805D546C[v]++;
        }
    }
}
void TItemDrop__sub_8010643C(void) {
    if (lbl_805D2B78 != calc_drop_offset__9TItemDropFi(get_task_id__14TFontSmallTaskFPv(TLobby__data_805011D8)) ||
        TItemDrop__data_805D5470 != TItemDrop__sub_80105D60()) {
        TItemDrop__data_805D5474 = get_task_id__14TFontSmallTaskFPv(TLobby__data_805011D8);
        TItemDrop__vt0();
    }
}

}
