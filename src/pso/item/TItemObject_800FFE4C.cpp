#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_field_d8__10TObjPlayerFPv(void *);
M2C_UNK notify_owner__5TItemFPvi(void *, M2C_UNK);
M2C_UNK apply_switch_attack__5TItemFPvi(void *, M2C_UNK);
M2C_UNK consume_item_by_id();
M2C_UNK TItem__sub_801008F0(u8 *, void *);
u32 TLobby__sub_80101AB0(s32);
M2C_UNK copy_to_item_data__5TItemFPvPv(void *, void *);
M2C_UNK add_item_flags__10TObjPlayerFPvUi(u32, M2C_UNK);
s32 has_flag_128__10TObjPlayerFPv(void *);
void *TItemData__sub_80104DAC(u32, void *);
void *fn_80104F4C(u32, void *);
M2C_UNK init__9TItemDataFv(u8 *);
void use_combination_recipe__5TItemFPv(void *arg0);
}

extern "C" {

int set_flag_1024__11TItemObjectFPv(void* p);
int TObjTailsTailsMove__sub_800FFE04(void);
void TObjTailsTailsMove__sub_800FFE0C(void);
void TObjTailsTailsMove__sub_800FFE10(void);
int TObjTailsTailsMove__sub_800FFE14(void);
int clear_item_flags__10TObjPlayerFPvUi(void*, int);
s32 test_item_flags__10TObjPlayerFPvUi(s32, s32);

int set_flag_1024__11TItemObjectFPv(void* p) { return clear_item_flags__10TObjPlayerFPvUi(p, 1024); }
void use_combination_recipe__5TItemFPv(void *arg0) {
    u8 sp1C[0x14];
    u8 sp8[0x14];
    s32 temp_r30_2;
    s32 temp_r31;
    u32 temp_r3_2;
    void *temp_r30;
    void *temp_r3;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        copy_to_item_data__5TItemFPvPv(arg0, sp1C);
        temp_r30 = fn_80104F4C(M2C_FIELD(arg0, u32 *, 0xF0), sp1C);
        temp_r3 = TItemData__sub_80104DAC(M2C_FIELD(arg0, u32 *, 0xF0), sp1C);
        if ((temp_r3 != NULL) && (temp_r30 != NULL)) {
            init__9TItemDataFv(sp8);
            sp8[0] = M2C_FIELD(temp_r3, u8 *, 6);
            sp8[1] = M2C_FIELD(temp_r3, u8 *, 7);
            sp8[2] = M2C_FIELD(temp_r3, u8 *, 8);
            temp_r31 = has_flag_128__10TObjPlayerFPv(temp_r30);
            temp_r30_2 = get_field_d8__10TObjPlayerFPv(temp_r30);
            TItem__sub_801008F0(sp8, temp_r30);
            temp_r3_2 = TLobby__sub_80101AB0(temp_r30_2);
            if ((temp_r31 != 0) && (temp_r3_2 != 0U)) {
                add_item_flags__10TObjPlayerFPvUi(temp_r3_2, 0x80);
            }
        }
        apply_switch_attack__5TItemFPvi(arg0, 0x8D);
        notify_owner__5TItemFPvi(arg0, 0x40001421);
        get_field_d8__10TObjPlayerFPv(arg0);
        consume_item_by_id();
    }
}

}
