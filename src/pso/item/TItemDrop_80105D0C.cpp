#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TItemDrop__sub_80107A68(void);
int TItemDrop__sub_80107B04(void);
void TItemDrop__vt1(void);
void __dt__9TItemDropFv(void);
void apply_item_data__9TItemDropFPvPv(void *arg0, void *arg1);
void calc_drop_item__9TItemDropFiPvi(s32 arg0, void *arg1, s32 arg2);
void calc_drop_rarity__9TItemDropFiiPv(s32 arg0, s32 arg1, void *arg2);
s32 drop_item__9TItemDropFiii(s32 arg0, s32 arg1, s32 arg2);
s8 get_bool_from_1d6ddc__9TItemDropFPv(void* p);
void handle_type3__9TItemDropFPvPv(void* p, void* a1);
void init_rare_item_data__9TItemDropFPvPv(void *arg0, void *arg1);
void run_task__9TItemDropFv(void);
void set_flag__9TItemDropFPvPv(void *arg0, void *arg1);
M2C_UNK TItemData__sub_8010D510(void *, M2C_UNK *);
s32 TItemData__sub_8010DF68(void *);
M2C_UNK TItemDrop__sub_801063D8();
M2C_UNK TItemDrop__sub_80106D0C(s32, void *);
s32 TItemDrop__sub_80107460(s32, s32, s32);
s8 TItemDrop__sub_80107790(s32, s32, s32, M2C_UNK, M2C_UNK);
int TLobby__sub_801D6DDC(void*);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
s32 can_drop__9TItemDropFv();
s32 clamp_s32__10TObjPlayerFiii(s32, M2C_UNK, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK init__9TItemDataFv(void *);
M2C_UNK initialize_mag_data__9TItemDataFPv(M2C_UNK *);
s32 is_enabled__9TItemDropFv();
int set_stack_count__24TShopEquipmentListWindowFPvc(void*, void*);

extern s32 TItemDrop__data_805D5468;
extern s32 TItemDrop__data_805D546C;

void run_task__9TItemDropFv(void) {
    free__11TOBoss4RockFUi(TItemDrop__data_805D546C);
    TItemDrop__data_805D546C = 0;
    free__11TOBoss4RockFUi(TItemDrop__data_805D5468);
    TItemDrop__data_805D5468 = 0;
}

extern s32 TItemDrop__data_805D5468;
extern s32 TItemDrop__data_805D546C;

void __dt__9TItemDropFv(void) {
    TItemDrop__data_805D5468 = alloc_buffer__11TOBoss4RockFPv(0x88);
    TItemDrop__data_805D546C = alloc_buffer__11TOBoss4RockFPv(0xD);
    TItemDrop__sub_801063D8();
}

void TItemDrop__vt1(void) {  }

extern s32 *TItemDrop__data_805D5464;

s32 drop_item__9TItemDropFiii(s32 arg0, s32 arg1, s32 arg2) {
    if ((can_drop__9TItemDropFv() == 1) && ((s32 *) TItemDrop__data_805D5464 != NULL) && (arg1 > 0) && (arg1 < 0x58)) {
        return TItemDrop__sub_80107460(arg0, *TItemDrop__data_805D5464 + (arg1 * 4), arg2);
    }
    return 0;
}

extern void *TItemDrop__data_805D5460;

void calc_drop_rarity__9TItemDropFiiPv(s32 arg0, s32 arg1, void *arg2) {
    u8 temp_r3;
    u8 call_res;

    TItemDrop__sub_80106D0C(arg0, arg2);
    call_res = (u8) TItemDrop__sub_80107790((s32)(arg0), (s32)(M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0x10)), (s32)(0), (M2C_UNK)(5), (M2C_UNK)(1));
    M2C_FIELD(arg2, u8 *, 2) = (u8) (arg1 + call_res + M2C_FIELD(TItemDrop__data_805D5460, u8 *, 0x48));
    temp_r3 = M2C_FIELD(arg2, u8 *, 2);
    if (temp_r3 < 3U) {
        M2C_FIELD(arg2, u8 *, 2) = 0U;
    } else {
        M2C_FIELD(arg2, u8 *, 2) = (u8) (temp_r3 - 3);
    }
}

void init_rare_item_data__9TItemDropFPvPv(void *arg0, void *arg1) {
    if (((u8) M2C_FIELD(arg1, u8 *, 1) == 2) && (((u8) M2C_FIELD(arg1, u8 *, 4) >= 0x13U) || ((u8) M2C_FIELD(arg1, u8 *, 2) >= 0x1EU))) {
        init__9TItemDataFv(arg1);
    }
}

void handle_type3__9TItemDropFPvPv(void* p, void* a1) { if (*(unsigned char*)(a1) == 3) { set_stack_count__24TShopEquipmentListWindowFPvc(a1, (void*)1); } }

void apply_item_data__9TItemDropFPvPv(void *arg0, void *arg1) {
    M2C_UNK sp8;

    if ((u8) M2C_FIELD(arg1, u8 *, 0) == 2) {
        initialize_mag_data__9TItemDataFPv(&sp8);
        M2C_FIELD(arg1, s8 *, 1) = 0;
        TItemData__sub_8010D510(arg1, &sp8);
    }
}

extern u8 lbl_805DAAE0;

void set_flag__9TItemDropFPvPv(void *arg0, void *arg1) {
    u8 temp_r3;

    if ((is_enabled__9TItemDropFv() == 1) && ((u8) M2C_FIELD(arg1, u8 *, 0) == 0)) {
        if (TItemData__sub_8010DF68(arg1) != 0) {
            M2C_FIELD(arg1, u8 *, 4) = (u8) (M2C_FIELD(arg1, u8 *, 4) | lbl_805DAAE0);
            return;
        }
        temp_r3 = M2C_FIELD(arg1, u8 *, 4);
        if (temp_r3 != 0) {
            M2C_FIELD(arg1, u8 *, 4) = (u8) (temp_r3 | lbl_805DAAE0);
        }
    }
}

extern void *TItemDrop__data_805D5460;

void calc_drop_item__9TItemDropFiPvi(s32 arg0, void *arg1, s32 arg2) {
    if ((u8) M2C_FIELD(arg1, u8 *, 0) == 0) {
        M2C_FIELD(arg1, s8 *, 3) = TItemDrop__sub_80107790((s32)(arg0), (s32)(M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0xC)), (s32)(clamp_s32__10TObjPlayerFiii(arg2, 0, 3)), (M2C_UNK)(9), (M2C_UNK)(4));
    }
}

int TItemDrop__sub_80107A68(void) { return 0; }

s8 get_bool_from_1d6ddc__9TItemDropFPv(void* p) { return (s8)(TLobby__sub_801D6DDC(p)); }
int TItemDrop__sub_80107B04(void) { return 0; }

}
