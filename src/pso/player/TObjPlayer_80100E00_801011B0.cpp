#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80101350_80100E00 { char pad[0x18]; };
struct VObj_80101350_80100E00 : Base_80101350_80100E00 {
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17(s32);
};

extern "C" {

s16 calc_equip_bonus__10TObjPlayerFUs(u16 arg0);
s16 calc_stat_bonus_sum__10TObjPlayerFUs(u16 arg0);
void copy_item_data_to_icon__10TObjPlayerFPv(void *arg0);
void handle_6x61_activate_mag_effect(void *arg0);
void TItemData__sub_8010CEF4(void *);
struct VObj_80101350_80100E00 *TLobby__sub_80101AB0(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void copy_to_item_data__5TItemFPvPv(void *, void *);
s16 *fn_8010A768();
u32 get_equip_field_d04__10TObjPlayerFPv(s32, s32);
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_stat__10TObjPlayerFPv(s32);
s32 get_stat_bonus__10TObjPlayerFPv(s32);
M2C_UNK swap_6x61_fields__10TObjPlayerFPv(void *);

void copy_item_data_to_icon__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    TItemData__sub_8010CEF4(&sp8);
}

s16 calc_stat_bonus_sum__10TObjPlayerFUs(u16 arg0) {
    s32 temp_r3;
    s32 var_acc;
    s32 var_cnt;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    var_acc = 0;
    if (temp_r3 != 0) {
        var_cnt = 9;
        do {
            if (get_equip_field_d04__10TObjPlayerFPv(temp_r3, var_cnt) != 0U) {
                var_acc += M2C_FIELD(fn_8010A768(), s16 *, 2);
            }
            var_cnt += 1;
        } while (var_cnt != 0xD);
        return (s16) (get_stat_bonus__10TObjPlayerFPv(temp_r3) - var_acc);
    }
    return 0;
}

s16 calc_equip_bonus__10TObjPlayerFUs(u16 arg0) {
    s32 temp_r3;
    s32 var_acc;
    s32 var_cnt;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    var_acc = 0;
    if (temp_r3 != 0) {
        var_cnt = 9;
        do {
            if (get_equip_field_d04__10TObjPlayerFPv(temp_r3, var_cnt) != 0U) {
                var_acc += *fn_8010A768();
            }
            var_cnt += 1;
        } while (var_cnt != 0xD);
        return (s16) (get_stat__10TObjPlayerFPv(temp_r3) - var_acc);
    }
    return 0;
}

void handle_6x61_activate_mag_effect(void *arg0) {
    struct VObj_80101350_80100E00 *obj;

    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
        swap_6x61_fields__10TObjPlayerFPv(arg0);
        obj = TLobby__sub_80101AB0(M2C_FIELD(arg0, s32 *, 4));
        if ((obj != NULL) && ((u32) M2C_FIELD(obj, u32 *, 0xF0) != 0U)) {
            obj->m17(M2C_FIELD(arg0, s32 *, 8));
        }
    }
}

}
