#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct ItemData_801B7C78 {
    s8 kind;
    s8 group;
    u8 rest[0x16];
};

struct ItemData_801B7CEC {
    s8 kind;
    s8 group;
    s8 sub;
    u8 rest[0x15];
};

extern "C" {
s32 get_field_d8__10TObjPlayerFPv();
void init__9TItemDataFv(void *);
u32 TObjPlayer__sub_801D4DE8(int, void *);
u32 get_owner_if_alive__10TObjPlayerFPv();
s32 find_inventory_item_id__10TObjPlayerFPvcc(u8 *arg0, s8 arg1, s8 arg2);
s32 get_field_d8__10TObjPlayerFPv();
void init__9TItemDataFv(void *);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(int, void *);
u32 get_owner_if_alive__10TObjPlayerFPv();
s32 fn_801B7CEC(u8 *arg0, s8 arg1, s8 arg2, s8 arg3);
}

extern "C" {

s32 TObjPlayer__sub_801D4368(void * a0 = 0);
s32 is_locally_controlled__10TObjPlayerFPv(void * a0 = 0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 obj_testFlags30(s32, s32);
s32 check_player_flag1__6TLobbyFPv(s32);
s32 TLobby__sub_800822E8(s32, s32);
u32 is_action_active__10TObjPlayerFPv();
void handle_6x99(void);
void handle_6x98(void);

void handle_6x99(void) {  }

void handle_6x98(void) {  }

s32 find_inventory_item_id__10TObjPlayerFPvcc(u8 *arg0, s8 arg1, s8 arg2) {
    struct ItemData_801B7C78 item;
    init__9TItemDataFv(&item);
    item.kind = arg1;
    item.group = arg2;
    if (TObjPlayer__sub_801D4DE8(M2C_FIELD(arg0, s32 *, 0xD00), &item) == 0U) {
        return -1;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return -1;
    }
    return get_field_d8__10TObjPlayerFPv();
}
s32 fn_801B7CEC(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    struct ItemData_801B7CEC item;
    init__9TItemDataFv(&item);
    item.kind = arg1;
    item.group = arg2;
    item.sub = arg3;
    if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), &item) == 0U) {
        return -1;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return -1;
    }
    return get_field_d8__10TObjPlayerFPv();
}

}
