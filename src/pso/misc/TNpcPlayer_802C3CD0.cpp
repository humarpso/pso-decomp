#include "types.h"

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct EqBase_802C3D38 { u8 pad[0x18]; };

struct Eq_802C3D38 : EqBase_802C3D38 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void off(s32); virtual void on(s32);
};

struct E_802C4698 { u8 pad[0x1c]; };

struct O_802C4698 { u8 pad[6]; E_802C4698 e[1]; };

struct O_802C4688 { u8 pad[0x408]; u8 buf[1]; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Eq_802C3D38;
struct E_802C4698;
struct O_802C4698;
struct O_802C4688;
struct VBase_802C3F74 { char pad[0x18]; };

struct Item_802C3F74 : VBase_802C3F74 {
    virtual void m0();
    virtual void m1();
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
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20(s32);
    virtual void m21(s32);
};

extern "C" {
s8 get_tp_materials_clamped__10TObjPlayerFPv(void *);
s8 get_hp_material_points__10TObjPlayerFPv(void *);
void set_hp_clamped__10TObjPlayerFPvs(void *, s16);
s16 obj_getS16_32E(void *);
s16 obj_getS16_32C(void *);
void copy_data__6TLobbyFPvPv(void *, void *);
void copy_player_visual_record(void *, void *);
s32 get_quest_id__12TQuestListVMFPv(void *);
void set_facing__10TObjPlayerFPvs(void *, s16);
Eq_802C3D38 *get_equip_field_d04__10TObjPlayerFPv(void *, s32);
void TObjPlayer__sub_8013A748(void *, void *);
void clamp_stats__10TObjPlayerFiPv(void *, void *, s32);
s8 TObjPlayer__sub_801AFD8C(void *);
s8 query_state_if_present__10TObjPlayerFPv(void *, s32);
u8 TObjPlayer__sub_801BE7BC(void *);
u8 get_equip_flags__10TObjPlayerFPv(void *);
u8 get_inventory_state__10TObjPlayerFPv(void *);
u8 get_field_374_state__10TObjPlayerFPv(void *);
u8 get_field_374__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C0124(void *, s16);
s32 get_ptr_4__10TObjPlayerFPv(s8 *);
s32 get_class_stat_entry__10TObjPlayerFPv(void *);
void split_capped_value__10TObjPlayerFUcPvPv(s32, u8 *, E_802C4698 *);
void copy_battle_mode__10TObjPlayerFPvPv(void *, void *);
void copy_byte_339_to_record__10TObjPlayerFPvPv(void *, void *);
void copy_mag_level_to_record__10TObjPlayerFPvPv(void *, void *);
void apply_pending_action__10TObjPlayerFii(void *, void *);
void set_field_157__10TObjPlayerFPvUc(void *p, u8 v);
void set_byte_13b__10TObjPlayerFPvUc(void *p, u8 v);
void set_action_flags__10TObjPlayerFPvUc(void *p, u8 v);
void set_flag_103__10TObjPlayerFPvUc(void *p, u8 v);
void set_flag_e7__10TObjPlayerFPvUc(void *p, u8 v);
u8 *TObjPlayer__sub_802C4688(O_802C4688 *self, s32 i);
E_802C4698 *TObjPlayer__sub_802C4698(O_802C4698 *self, s32 i);
void set_flag_524288__10TObjPlayerFPv(void *p);
void set_flag_80000__10TObjPlayerFPv(void *p);
void export_character_data__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
s8 get_tp_materials_clamped__10TObjPlayerFPv(void *);
s8 get_hp_material_points__10TObjPlayerFPv(void *);
void set_hp_clamped__10TObjPlayerFPvs(void *, s16);
s16 obj_getS16_32E(void *);
s16 obj_getS16_32C(void *);
void copy_player_visual_record(void *, void *);
void set_facing__10TObjPlayerFPvs(void *, s16);
Eq_802C3D38 *get_equip_field_d04__10TObjPlayerFPv(void *, s32);
void TObjPlayer__sub_8013A748(void *, void *);
void clamp_stats__10TObjPlayerFiPv(void *, void *, s32);
s8 TObjPlayer__sub_801AFD8C(void *);
s8 query_state_if_present__10TObjPlayerFPv(void *, s32);
u8 TObjPlayer__sub_801BE7BC(void *);
u8 get_equip_flags__10TObjPlayerFPv(void *);
u8 get_inventory_state__10TObjPlayerFPv(void *);
u8 get_field_374_state__10TObjPlayerFPv(void *);
u8 get_field_374__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C0124(void *, s16);
s32 get_ptr_4__10TObjPlayerFPv(s8 *);
M2C_UNK reset(s32);
M2C_UNK export_inventory_entry__10TObjPlayerFiPv(Item_802C3F74 *, s32);
s32 get_class_stat_entry__10TObjPlayerFPv(void *);
void split_capped_value__10TObjPlayerFUcPvPv(s32, u8 *, E_802C4698 *);
s32 TObjPlayer__sub_802A1018();
void copy_battle_mode__10TObjPlayerFPvPv(void *, void *);
void copy_byte_339_to_record__10TObjPlayerFPvPv(void *, void *);
void copy_mag_level_to_record__10TObjPlayerFPvPv(void *, void *);
void apply_pending_action__10TObjPlayerFii(void *, void *);
void set_field_157__10TObjPlayerFPvUc(void *p, u8 v);
void set_byte_13b__10TObjPlayerFPvUc(void *p, u8 v);
void set_action_flags__10TObjPlayerFPvUc(void *p, u8 v);
void set_flag_103__10TObjPlayerFPvUc(void *p, u8 v);
void set_flag_e7__10TObjPlayerFPvUc(void *p, u8 v);
u8 *TObjPlayer__sub_802C4688(O_802C4688 *self, s32 i);
E_802C4698 *TObjPlayer__sub_802C4698(O_802C4698 *self, s32 i);
void set_flag_40__10TObjPlayerFPv(void *);
void set_flag_524288__10TObjPlayerFPv(void *p);
void set_flag_80000__10TObjPlayerFPv(void *p);
void export_state_to_record__10TObjPlayerFPvPv(u8 *arg0, s8 *arg1);
}

extern "C" {

s32 send_command__10TNpcPlayerFiciiPv(s32 arg0, s8 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 get_ptr_4__10TObjPlayerFPv(s8 *);
int init_character_stats_for_level(s32, s8 *, s32);
int copy_item_entry_array(s8, s32, s32);

s32 send_command__10TNpcPlayerFiciiPv(s32 arg0, s8 arg1, s32 arg2, s32 arg3, s8 *arg4) {
    *arg4 = arg1;
    copy_item_entry_array(arg1, arg2, get_ptr_4__10TObjPlayerFPv(arg4));
    init_character_stats_for_level(arg0, arg4, arg3);
    return 1;
}
void export_character_data__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    s32 i;
    s16 hp;
    s16 facing;
    Eq_802C3D38 *eq;
    E_802C4698 *e;
    s32 j;
    s32 k;
    set_flag_80000__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg1, s8 *, 0) = query_state_if_present__10TObjPlayerFPv(arg0, get_ptr_4__10TObjPlayerFPv((s8 *)arg1));
    hp = obj_getS16_32C(arg0);
    facing = obj_getS16_32E(arg0);
    for (i = 0; i != 0xD; i++) {
        eq = get_equip_field_d04__10TObjPlayerFPv(arg0, i);
        if (eq != NULL) {
            eq->on(1);
        }
    }
    M2C_FIELD(arg1, s8 *, 1) = get_hp_material_points__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg1, s8 *, 2) = get_tp_materials_clamped__10TObjPlayerFPv(arg0);
    set_flag_e7__10TObjPlayerFPvUc(arg1, get_field_374__10TObjPlayerFPv(arg0));
    set_flag_103__10TObjPlayerFPvUc(arg1, get_field_374_state__10TObjPlayerFPv(arg0));
    set_action_flags__10TObjPlayerFPvUc(arg1, get_inventory_state__10TObjPlayerFPv(arg0));
    set_byte_13b__10TObjPlayerFPvUc(arg1, get_equip_flags__10TObjPlayerFPv(arg0));
    set_field_157__10TObjPlayerFPvUc(arg1, TObjPlayer__sub_801BE7BC(arg0));
    copy_data__6TLobbyFPvPv(arg1 + 0x34C, (void *)get_quest_id__12TQuestListVMFPv(arg0));
    clamp_stats__10TObjPlayerFiPv(arg0, arg1 + 0x34C, get_class_stat_entry__10TObjPlayerFPv(arg0));
    copy_player_visual_record(arg1 + 0x370, arg0 + 0x85C);
    TObjPlayer__sub_8013A748(arg1 + 0x3C0, arg0 + 0x500);
    for (j = 0; j < 0x13; j++) {
        e = TObjPlayer__sub_802C4698((O_802C4698 *)arg1, j);
        split_capped_value__10TObjPlayerFUcPvPv(TObjPlayer__sub_801C0124(arg0 + 0x428, j),
            TObjPlayer__sub_802C4688((O_802C4688 *)arg1, j), e);
    }
    for (k = 0; k != 0xD; k++) {
        eq = get_equip_field_d04__10TObjPlayerFPv(arg0, k);
        if (eq != NULL) {
            eq->off(1);
        }
    }
    set_hp_clamped__10TObjPlayerFPvs(arg0, hp);
    set_facing__10TObjPlayerFPvs(arg0, facing);
    M2C_FIELD(arg1, s8 *, 3) = TObjPlayer__sub_801AFD8C(arg0);
    apply_pending_action__10TObjPlayerFii(arg0, arg1);
    copy_mag_level_to_record__10TObjPlayerFPvPv(arg0, arg1);
    copy_byte_339_to_record__10TObjPlayerFPvPv(arg0, arg1);
    copy_battle_mode__10TObjPlayerFPvPv(arg0, arg1);
    set_flag_524288__10TObjPlayerFPv(arg0);
}
void export_state_to_record__10TObjPlayerFPvPv(u8 *arg0, s8 *arg1) {
    Item_802C3F74 *items[30];
    s16 hp;
    s16 facing;
    Item_802C3F74 *item;
    s32 i;
    s32 n;
    Item_802C3F74 **p;
    s32 k;
    s32 b;
    s32 i2;
    s32 rec;
    s32 a;
    s32 m;
    set_flag_80000__10TObjPlayerFPv(arg0);
    arg1[0] = query_state_if_present__10TObjPlayerFPv(arg0, get_ptr_4__10TObjPlayerFPv(arg1));
    hp = obj_getS16_32C(arg0);
    facing = obj_getS16_32E(arg0);
    p = items;
    for (i = 0; i < 30; i++) {
        *p++ = NULL;
    }
    p = items;
    n = 0;
    for (i2 = 0; i2 != 13; i2++) {
        item = (Item_802C3F74 *)get_equip_field_d04__10TObjPlayerFPv(arg0, i2);
        if (item != NULL) {
            item->m21(1);
            *p++ = item;
            n++;
        }
    }
    arg1[0] = n;
    rec = get_ptr_4__10TObjPlayerFPv(arg1);
    p = items;
    for (i = 0; i < 30; i++) {
        if (*p != NULL) {
            export_inventory_entry__10TObjPlayerFiPv(*p, rec);
            p++;
        } else {
            reset(rec);
        }
        rec += 0x1C;
    }
    arg1[1] = get_hp_material_points__10TObjPlayerFPv(arg0);
    arg1[2] = get_tp_materials_clamped__10TObjPlayerFPv(arg0);
    set_flag_e7__10TObjPlayerFPvUc(arg1, get_field_374__10TObjPlayerFPv(arg0));
    set_flag_103__10TObjPlayerFPvUc(arg1, get_field_374_state__10TObjPlayerFPv(arg0));
    set_action_flags__10TObjPlayerFPvUc(arg1, get_inventory_state__10TObjPlayerFPv(arg0));
    set_byte_13b__10TObjPlayerFPvUc(arg1, get_equip_flags__10TObjPlayerFPv(arg0));
    set_field_157__10TObjPlayerFPvUc(arg1, TObjPlayer__sub_801BE7BC(arg0));
    clamp_stats__10TObjPlayerFiPv(arg0, arg1 + 0x34C, get_class_stat_entry__10TObjPlayerFPv(arg0));
    copy_player_visual_record(arg1 + 0x370, arg0 + 0x85C);
    TObjPlayer__sub_8013A748(arg1 + 0x3C0, arg0 + 0x500);
    for (k = 0; k < 19; k++) {
        a = (s32)TObjPlayer__sub_802C4698((O_802C4698 *)arg1, k);
        split_capped_value__10TObjPlayerFUcPvPv(TObjPlayer__sub_801C0124(arg0 + 0x428, k), TObjPlayer__sub_802C4688((O_802C4688 *)arg1, k), (E_802C4698 *)a);
    }
    for (m = 0; m != 13; m++) {
        item = (Item_802C3F74 *)get_equip_field_d04__10TObjPlayerFPv(arg0, m);
        if (item != NULL) {
            item->m20(1);
        }
    }
    set_hp_clamped__10TObjPlayerFPvs(arg0, hp);
    set_facing__10TObjPlayerFPvs(arg0, facing);
    arg1[3] = TObjPlayer__sub_801AFD8C(arg0);
    if (TObjPlayer__sub_802A1018() != 0) {
        set_flag_40__10TObjPlayerFPv(arg1);
    }
    apply_pending_action__10TObjPlayerFii(arg0, arg1);
    copy_mag_level_to_record__10TObjPlayerFPvPv(arg0, arg1);
    copy_byte_339_to_record__10TObjPlayerFPvPv(arg0, arg1);
    copy_battle_mode__10TObjPlayerFPvPv(arg0, arg1);
    set_flag_524288__10TObjPlayerFPv(arg0);
}

}
