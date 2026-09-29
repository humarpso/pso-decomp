#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_field_ed__10TObjPlayerFPv(void *);
u8 get_field_ec__12TOSwitchItemFPv(void *, int);
u8 get_slot_count__14TItemProShieldFPv(void *);
s32 TObjPlayer__sub_801C1A70(void *, int);
void TObjPlayer__sub_801D45B0(s32 *arg0, s32 arg1);
s32 copy_to_item_data__5TItemFPvPv(void *, void *);
s8 TObjPlayer__sub_80102C30(void *);
s32 get_item_flags__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801D4308(s32 arg0, u8 *arg1);
s32 start_inventory_update__10TObjPlayerFPvi(void *, void *);
s32 get_owner_if_alive__10TObjPlayerFPv(int);
s32 set_field_1c__10TObjPlayerFPvi(int, int);
s32 TObjPlayer__sub_801D47EC(s32 arg0, s32 arg1, s32 arg2);
u8 *get_ptr_4__10TObjPlayerFPv();
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(int);
s32 fn_801D4270(s32 arg0);
void __dl__FPv(void *);
void free__11TOBoss4RockFUi(int);
u8 *TObjPlayer__sub_801D4678(u8 *arg0, s16 arg1);
void *alloc_buffer__11TOBoss4RockFPv(void *);
s32 TCheckRoomSequence__sub_80396920(void *, void *, int, int, int);
void TObjPlayer__sub_801D4730(void* p);
u8 *TObjPlayer__sub_801D46D4(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjPlayer__sub_801D4730(void* p);
int TObjPlayer__sub_801D4744(void);
void TObjPlayer__sub_801D47D8(void* p, void* q);
s32 check_player_action_allowed(void);
int fn_801D40D4(void);
int fn_801D41B4(void);
int reset(void* p);
s32 TCameraCtrl__sub_8006B368();
s32 TLobby__sub_8030A7B0();
s32 get_game_mode__23TAdSinglePlyChrSelectGCFv();
s32 get_main_phase();
s32 is_technique_ready__8TTecCtrlFv();
int memset(void*, int, int);

int fn_801D40D4(void) { return 0; }
s32 check_player_action_allowed(void) {
    if ((get_main_phase() == 0xE) || (is_technique_ready__8TTecCtrlFv() != 0) || ((TCameraCtrl__sub_8006B368() == 1) && (TLobby__sub_8030A7B0() == 1))) {
        return 0;
    }
    return get_game_mode__23TAdSinglePlyChrSelectGCFv();
}
int fn_801D41B4(void) { return 0; }

s32 fn_801D4270(s32 arg0) {
    s32 i;
    u8 *p;
    if ((u32)get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) == 0) {
        return 0;
    }
    p = get_ptr_4__10TObjPlayerFPv();
    for (i = 0; i < 30; i++, p += 0x1C) {
        if (*(s32 *)(p + 0x14) == arg0) {
            return 1;
        }
    }
    return 0;
}

int reset(void* p) { return memset(p, 0, 28); }

s32 TObjPlayer__sub_801D4308(s32 arg0, u8 *arg1) {
    if (copy_to_item_data__5TItemFPvPv((void *)(arg0), (void *) (arg1 + 8)) != 0) {
        M2C_FIELD(arg1, s8 *, 0) = TObjPlayer__sub_80102C30((void *) (arg0));
        M2C_FIELD(arg1, s32 *, 4) = get_item_flags__10TObjPlayerFPv((void *) (arg0));
        return 1;
    }
    return 0;
}

void TObjPlayer__sub_801D45B0(s32 *arg0, s32 arg1) {
    s32 temp_r4;
    u8 temp_r3;
    *arg0 = 0;
    temp_r4 = get_field_ec__12TOSwitchItemFPv((void *) (arg1), (int) (arg1)) << 0x19;
    *arg0 |= temp_r4;
    if (get_field_ec__12TOSwitchItemFPv((void *) (arg1), (int) (temp_r4)) == 1) {
        *arg0 |= (get_field_ed__10TObjPlayerFPv((void *) (arg1)) << 0x11) & 0x01FE0000;
    } else {
        *arg0 |= (get_field_ed__10TObjPlayerFPv((void *) (arg1)) << 8) & 0xFF00;
    }
    temp_r3 = get_slot_count__14TItemProShieldFPv((void *) (arg1));
    *arg0 |= temp_r3;
    if (TObjPlayer__sub_801C1A70((void *) (arg1), (int) (temp_r3)) == 0) {
        *arg0 |= 0x10000;
    }
}

u8 *TObjPlayer__sub_801D4678(u8 *arg0, s16 arg1) {
    u8 *q;
    if (arg0 != NULL) {
        q = *(u8 **)(arg0 + 4);
        if (q != NULL) {
            if (q != NULL) {
                free__11TOBoss4RockFUi((int)(q - 0x10));
            }
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjPlayer__sub_801D46D4(u8 *arg0, s32 arg1) {
    s32 n;
    *(s32 *)arg0 = arg1;
    n = *(s32 *)arg0;
    *(s32 *)(arg0 + 4) = TCheckRoomSequence__sub_80396920(alloc_buffer__11TOBoss4RockFPv((void *)(n * 8 + 0x10)), TObjPlayer__sub_801D4730, 0, 8, n);
    return arg0;
}

void TObjPlayer__sub_801D4730(void* p) { *(s32*)((char*)p + 0x0) = -1; *(s32*)((char*)p + 0x4) = 0; }

int TObjPlayer__sub_801D4744(void) { return 0; }

void TObjPlayer__sub_801D47D8(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
s32 TObjPlayer__sub_801D47EC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    temp_r3 = start_inventory_update__10TObjPlayerFPvi((void *) (arg0), (void *) (arg1));
    if (temp_r3 == 0) {
        return 0;
    }
    temp_r3_2 = start_inventory_update__10TObjPlayerFPvi((void *) (arg0), (void *) (arg2));
    if (temp_r3_2 == 0) {
        return 0;
    }
    temp_r3_3 = get_owner_if_alive__10TObjPlayerFPv((int) (temp_r3));
    if (temp_r3_3 == 0) {
        return 0;
    }
    temp_r3_4 = get_owner_if_alive__10TObjPlayerFPv((int) (temp_r3_2));
    if (temp_r3_4 == 0) {
        return 0;
    }
    set_field_1c__10TObjPlayerFPvi((int) (temp_r3), (int) (temp_r3_4));
    set_field_1c__10TObjPlayerFPvi((int) (temp_r3_2), (int) (temp_r3_3));
    return 1;
}

}
