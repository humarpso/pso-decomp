#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 check_can_add_item__10TObjPlayerFPvcc(void *arg0, s8 arg1, s8 arg2);
s32 TObjPlayer__sub_801B89B0(void *, int);
s32 reset_slots__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801B3A18(s32 arg0, u32 arg1);
s32 fn_801B7F4C(void *, s32);
s32 get_field_d8__10TObjPlayerFPv();
u32 get_owner_if_alive__10TObjPlayerFPv();
s32 init__9TItemDataFv(s8 *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(s32, s8 *);
int TObjPlayer__sub_801B3674(void *arg0, int arg1, int arg2, int arg3);
s32 obj_testFlags30(void *, int);
u8 get_field_ed__10TObjPlayerFPv(void *);
u8 get_field_ec__12TOSwitchItemFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
u16 get_type_id__10TObjPlayerFPv();
s32 TObjPlayer__sub_80116620(void *, int);
u32 find_by_pos__11TMainCursorFiss(u32, int, int);
s32 is_technique_ready__8TTecCtrlFv();
int is_flag_clear__17TObjWarpBossMultiFPv(void* p);
s32 TObjPlayer__sub_801B4684(void *);
u8 fn_801D7168(void *);
extern u8 lbl_8050EA40[];
s32 TObjPlayer__sub_801B3814(u8 *arg0, void *arg1);
}

extern "C" {

void TObjPlayer__sub_801B35AC(void* p);
void TObjPlayer__sub_801B35E4(void* p);
void TObjPlayer__sub_801B3620(void* p);
s32 can_use_camera_field__10TObjPlayerFi(s32 arg0);
s32 check_can_add_item__10TObjPlayerFPvcc(void *arg0, s8 arg1, s8 arg2);
int check_technique_flag__10TObjPlayerFPv(void* p);
int has_item_flag_4096__10TObjPlayerFPv(void* p);
int is_flag_400_set__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8011E204(void* a0 = 0, void* a1 = 0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 check_flag_100__10TObjPlayerFPv();
int check_flag__10TObjPlayerFPvi(void*, int);
s32 fn_801B7F4C(void *, s32);
s32 get_camera_field__10TObjPlayerFPv(s32);
s32 get_field_d8__10TObjPlayerFPv();
u32 get_owner_if_alive__10TObjPlayerFPv();
int get_player_rank__18TChallenge4PResultFPv(void* a0 = 0);
int get_player_result__18TChallenge4PResultFPv(void* a0 = 0, void* a1 = 0);
s32 init__9TItemDataFv(s8 *);
int is_flag_clear__17TObjWarpBossMultiFPv(void* p);
s32 reset_key_machine_state__10TObjPlayerFv();
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(s32, s8 *);
int set_state_flags__10TObjPlayerFPvUi(void* a0 = 0, void* a1 = 0);

int has_item_flag_4096__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8011E204((void*)(p), (void*)(4096)); }
int check_technique_flag__10TObjPlayerFPv(void* p) { return set_state_flags__10TObjPlayerFPvUi((void*)(p), (void*)(4096)); }

int is_flag_400_set__10TObjPlayerFPv(void* p) { return check_flag__10TObjPlayerFPvi(p, 1024); }

void TObjPlayer__sub_801B35AC(void* p) { TObjPlayer__sub_8011E204((void*)(p), (void*)((void*)1024)); get_player_rank__18TChallenge4PResultFPv(p); }
void TObjPlayer__sub_801B35E4(void* p) { set_state_flags__10TObjPlayerFPvUi((void*)(p), (void*)((void*)1024)); get_player_result__18TChallenge4PResultFPv(p, (void*)1); }
void TObjPlayer__sub_801B3620(void* p) { set_state_flags__10TObjPlayerFPvUi((void*)(p), (void*)((void*)1024)); get_player_result__18TChallenge4PResultFPv(p, (void*)1); get_player_result__18TChallenge4PResultFPv(p, (void*)2); get_player_result__18TChallenge4PResultFPv(p, (void*)3); }

int TObjPlayer__sub_801B3674(void *arg0, int arg1, int arg2, int arg3) {
    s8 sp8[24];
    init__9TItemDataFv(sp8);
    sp8[0] = arg1;
    sp8[1] = arg2;
    sp8[2] = arg3;
    if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return 0;
    }
    if (fn_801B7F4C(arg0, get_field_d8__10TObjPlayerFPv()) == 0) {
        return 0;
    }
    if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return 0;
    }
    return all_parents_unqueued_for_destruction__7TObjectFv() != 0 ? 1 : 0;
}

s32 check_can_add_item__10TObjPlayerFPvcc(void *arg0, s8 arg1, s8 arg2) {
    s8 sp8[24];

    init__9TItemDataFv(sp8);
    sp8[0] = arg1;
    sp8[1] = arg2;
    if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return 0;
    }
    if (fn_801B7F4C(arg0, get_field_d8__10TObjPlayerFPv()) == 0) {
        return 0;
    }
    if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return 0;
    }
    return all_parents_unqueued_for_destruction__7TObjectFv() != 0 ? 1 : 0;
}

s32 TObjPlayer__sub_801B3814(u8 *arg0, void *arg1) {
    u32 p;
    if (is_technique_ready__8TTecCtrlFv() != 0 && fn_801D7168(lbl_8050EA40) == 2) {
        return 0;
    }
    switch (get_field_ec__12TOSwitchItemFPv(arg1)) {
    case 3:
        switch (get_field_ed__10TObjPlayerFPv(arg1)) {
        case 0:
            if (M2C_FIELD(arg0, s16 *, 0x32C) >= M2C_FIELD(arg0, s16 *, 0x2B8)) {
                return 0;
            }
            break;
        case 1:
            if (M2C_FIELD(arg0, s16 *, 0x32E) >= M2C_FIELD(arg0, s16 *, 0x2BA)) {
                return 0;
            }
            break;
        case 6:
            switch (get_slot_count__14TItemProShieldFPv(arg1)) {
            case 0:
                if (obj_testFlags30(arg0, 1) == 0) {
                    return 0;
                }
                break;
            case 1:
                if (obj_testFlags30(arg0, 2) == 0) {
                    return 0;
                }
                break;
            }
            break;
        case 3:
            if (!(TObjPlayer__sub_801B4684(arg0) & 4)) {
                return 0;
            }
            break;
        case 4:
            if (M2C_FIELD(arg0, u32 *, 0x424) != 0) {
                p = find_by_pos__11TMainCursorFiss(M2C_FIELD(arg0, u32 *, 0x424), 4, 9);
                if (p == 0) {
                    return 0;
                }
                TObjPlayer__sub_80116620((void *)(p + 0x9C), 0);
                if (get_type_id__10TObjPlayerFPv() == 0xFFFF) {
                    return 0;
                }
            }
            break;
        case 7:
            if (is_flag_clear__17TObjWarpBossMultiFPv(arg0) == 0) {
                return 0;
            }
            break;
        }
        break;
    }
    return 1;
}

s32 can_use_camera_field__10TObjPlayerFi(s32 arg0) {
    if ((check_flag_100__10TObjPlayerFPv() != 0) || (get_camera_field__10TObjPlayerFPv(arg0) == 0) || (reset_key_machine_state__10TObjPlayerFv() == 0)) {
        return 0;
    }
    return 1;
}
s32 TObjPlayer__sub_801B3A18(s32 arg0, u32 arg1) {
    switch (arg1) {
    case 0:
        return ((s32)TObjPlayer__sub_801B3674((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (0))), (int)((int)((int) (0)))));
    case 1:
        return ((s32)TObjPlayer__sub_801B3674((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (0))), (int)((int)((int) (1)))));
    case 2:
        return ((s32)TObjPlayer__sub_801B3674((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (0))), (int)((int)((int) (2)))));
    case 3:
        return ((s32)TObjPlayer__sub_801B3674((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (1))), (int)((int)((int) (0)))));
    case 4:
        return ((s32)TObjPlayer__sub_801B3674((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (1))), (int)((int)((int) (1)))));
    case 5:
        return ((s32)TObjPlayer__sub_801B3674((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (1))), (int)((int)((int) (2)))));
    case 6:
        return ((s32)TObjPlayer__sub_801B3674((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (6))), (int)((int)((int) (0)))));
    case 7:
        return ((s32)TObjPlayer__sub_801B3674((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (6))), (int)((int)((int) (1)))));
    case 8:
        return check_can_add_item__10TObjPlayerFPvcc((void *)((void *) (arg0)), (s8)((int) (3)), (s8)((int) (3)));
    case 9:
        return check_can_add_item__10TObjPlayerFPvcc((void *)((void *) (arg0)), (s8)((int) (3)), (s8)((int) (4)));
    case 10:
        reset_slots__10TObjPlayerFPv((void *) (arg0 + 0x428));
        return check_can_add_item__10TObjPlayerFPvcc((void *)((void *) (arg0)), (s8)((int) (3)), (s8)((int) (5)));
    case 11:
        return check_can_add_item__10TObjPlayerFPvcc((void *)((void *) (arg0)), (s8)((int) (3)), (s8)((int) (7)));
    case 12:
        return check_can_add_item__10TObjPlayerFPvcc((void *)((void *) (arg0)), (s8)((int) (3)), (s8)((int) (8)));
    case 13:
        return TObjPlayer__sub_801B89B0((void *) (arg0), (int) (0));
    case 14:
        return TObjPlayer__sub_801B89B0((void *) (arg0), (int) (1));
    case 15:
        return TObjPlayer__sub_801B89B0((void *) (arg0), (int) (2));
    case 16:
        return TObjPlayer__sub_801B89B0((void *) (arg0), (int) (3));
    default:
        return 0;
    }
}

}
