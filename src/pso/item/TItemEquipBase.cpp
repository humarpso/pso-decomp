#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Row_8010A89C { s8 id; u8 level; f32 amount; };
struct Slot_8010A89C { s16 id; s16 level; f32 amount; };

struct VBase_18_546d8d { char pad[0x18]; };

struct VObj_18_546d8d : VBase_18_546d8d {
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
    virtual void m20();
    virtual M2C_UNK m21(M2C_UNK);
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual M2C_UNK m43();
};

struct VBase_18_5e04d5 { char pad[0x18]; };

struct VObj_18_5e04d5 : VBase_18_5e04d5 {
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
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual M2C_UNK m48();
};

#include <stddef.h>
struct Stack_8010A710 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct VBase_18_df954d { char pad[0x18]; };

struct VObj_18_df954d : VBase_18_df954d {
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
    virtual M2C_UNK m20(M2C_UNK);
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual M2C_UNK m42();
    virtual void m43();
    virtual M2C_UNK m44();
};

struct VBase_18_24abda { char pad[0x18]; };

struct VObj_18_24abda : VBase_18_24abda {
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
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual M2C_UNK m45();
};

#include "pso/item/TItemData.h"

struct VBase_18_8e31a0
{
  char pad[0x18];
};

struct VObj_18_8e31a0 : VBase_18_8e31a0 {
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
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual M2C_UNK m23(s32, s32, s32);
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual M2C_UNK m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual M2C_UNK m71();
};

struct RecoveredFields_8010B0A8_arg0
{
  u8 unknown_0[0xF0];
  u8 *field_F0;
  u8 unknown_F4[0x78];
  s16 field_16C;
  s16 field_16E;
};

struct RecoveredGlobal_8010B684___vt__14TItemEquipBase { M2C_UNK value; u8 remaining[0xCC]; };
typedef char RecoveredGlobal_8010B684___vt__14TItemEquipBase_size[sizeof(RecoveredGlobal_8010B684___vt__14TItemEquipBase) == 0xD0 ? 1 : -1];

struct VBase_18_b34251 { char pad[0x18]; };

struct VObj_18_b34251 : VBase_18_b34251 {
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
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual s8 m31();
};

struct RecoveredGlobal_8010AD24_lbl_804C3BA8 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct ItemData_8010AEFC { u8 data[0x14]; };

struct Stats_8010AEFC { s16 v[7]; u8 pad[0x16]; };

struct Equip_8010AEFC { u8 pad0[0xF0]; s32 m_f0; };

struct ItemData_8010B224 { u8 data[0x14]; };

struct VBase_8010B224 { char pad[0x18]; };

struct VObj_8010B224 : VBase_8010B224 {
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
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
};

extern "C" {
void set_equip_flag__14TItemEquipBaseFPvUc(void* p, s32 v);
s8 TItemEquipBase__sub_8010A77C(u8 *arg0);
s8 get_attach_joint__14TItemEquipBaseFPv(u8 *arg0);
M2C_UNK get_id__13TItemProArmorFPv(void *);
M2C_UNK check_flag_32__14TItemEquipBaseFPv(int);
M2C_UNK apply_equip_slot_effect__14TItemEquipBaseFUsUi(M2C_UNK, int);
M2C_UNK start_event_by_index__15TItemTimerEventFUs();
void TItemEquipBase__sub_8010A948(u8 *arg0);
M2C_UNK set_mode__5TItemFPvc(void *, int);
M2C_UNK clear_item_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK delete_children__7TObjectFv(void *);
void unequip__14TItemEquipBaseFPv(u8 *arg0);
s32 has_resource_id__9TItemLoadFi(s32);
s32 find_node_by_id__9TItemLoadFi(s32);
void bind_loaded_resources__14TItemEquipBaseFPv(u8 *arg0);
M2C_UNK get_id__13TItemProArmorFPv(void *);
M2C_UNK TItemEquipBase__sub_8010B73C(void *);
M2C_UNK TItemEquipBase__sub_8022C680(void *, void *, void *);
void TItemEquipBase__sub_8010A82C(s32 arg0);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, void *);
s32 test_flags_any(void *, void *);
s32 TItemEquipBase__sub_8010AC60(s32 arg0, M2C_UNK arg1, s32 arg2);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_particle_effect(void *, int);
u8 *resolve_hittable_target(s32, s32);
void play_target_impact_effect(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s16 arg3);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, void *);
s32 test_flags_any(void *, void *);
s32 update_owner_visibility__5TItemFPv(void *);
M2C_UNK set_mode__5TItemFPvc(void *, int);
s32 add_item_flags__10TObjPlayerFPvUi(void *, int);
void TItemEquipBase__sub_8010A948(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv();
void equip__14TItemEquipBaseFPv(u8 *arg0);
M2C_UNK get_id__13TItemProArmorFPv(void *);
s32 apply_ad_rico_ring__14TItemEquipBaseFii(s32 arg0, s32 arg1);
s32 clear_flag_c_bit5__14TItemEquipBaseFPv(void *);
s32 apply_equip_effect_slot__14TItemEquipBaseFUsUi(void *, int);
s32 clear_timer_slot__15TItemTimerEventFUs(void *);
void remove_equip_effects__14TItemEquipBaseFPv(u8 *arg0);
u8 get_field_ec__12TOSwitchItemFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
s32 init__9TItemDataFv(void *);
s32 request_item_model_load(void *);
void request_model_load__14TItemEquipBaseFPvi(u8 *arg0, s32 arg1);
s16 clamp_field_32E__10TObjPlayerFPv(void *);
s16 clamp_value__10TObjPlayerFPv(void *);
s32 add_actor_tp_bonus(void *, int);
s32 add_actor_hp_bonus(void *, int);
s32 get_quest_id__12TQuestListVMFPv(void *);
void reset__14TItemEquipBaseFPv(void* p);
s32 TItemData__sub_8010B808(void *);
s32 TItemData__sub_8010B810(int);
void remove_equip_stats__14TItemEquipBaseFPvi(u8 *arg0, s32 arg1);
s32 init_forward__10TObjPlayerFPv(void *);
s32 clear_id__10TObjPlayerFPv(void *);
s32 TItem__ct(void *, void *, void *);
s32 add_item_flags__10TObjPlayerFPvUi(void *, int);
void reset__14TItemEquipBaseFPv(void* p);
s32 alloc__13TItemProArmorFi(int);
s32 init_object__21TItemEffArmorParticleFPv(int, void *);
extern M2C_UNK __vt__14TItemEquipBase[];
extern s32 lbl_805D2BE0;
u8 *TItemEquipBase__ct(u8 *arg0, s32 arg1, s32 arg2);
void set_equip_flag__14TItemEquipBaseFPvUc(void* p, s32 v);
extern RecoveredGlobal_8010AD24_lbl_804C3BA8 lbl_804C3BA8;
void set_attach_slot__14TItemEquipBaseFPvc(u8 *arg0, s8 arg1);
void copy_to_item_data__5TItemFPvPv(void *, void *);
void apply_equip_effects__9TItemDataFPviiiii(void *, s32, s32, s32, void *, void *);
int memset(void*, void*, void*);
void subtract_item_stat_bonus__14TItemEquipBaseFPviiPv(Equip_8010AEFC *self, s32 arg1, s32 arg2, s16 *out);
s32 add_actor_tp_bonus(void *, int);
s32 add_actor_hp_bonus(void *, int);
s32 get_id__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_800194E8(void *);
s32 get_level__10TObjPlayerFPv(void *);
s32 get_quest_id__12TQuestListVMFPv(void *);
void copy_to_item_data__5TItemFPvPv(void *, void *);
void deduct_cap_excess__14TItemEquipBaseFiPvs(s32 unused, s16 *arg1, s16 arg2);
s32 TItemData__sub_8010B808(void *);
s32 TItemData__sub_8010B810(int);
void add_accuracy__9TItemDataFPvi(s32, s32);
void add_stat__9TItemDataFPvi(s32, s32);
void add_s16__9TItemDataFPvi(s32, s32);
void apply_equip_effects__9TItemDataFPviiiii(void *, s32, s32, s32, void *, void *);
s16 add_lck__10TObjPlayerFPvi(void *, int);
s16 add_evp__10TObjPlayerFPvi(void *, int);
s16 add_ata__10TObjPlayerFPvi(void *, int);
s16 add_mst__10TObjPlayerFPvi(void *, int);
s16 add_hp__10TObjPlayerFPvi(void *, int);
s16 add_dfp__10TObjPlayerFPvi(void *, int);
s16 add_stat__10TObjPlayerFPvi(void *, int);
void add_equip_stats__14TItemEquipBaseFPvi(VObj_8010B224 *self, s32 arg1);
}

extern "C" {

struct Base_8010B054_8010A710 { char pad[0x18]; };
struct VObj_8010B054_8010A710 : Base_8010B054_8010A710 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();
    virtual void m7();  virtual void m8();  virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19();
};

void TItemEquipBase__sub_8010A788(void);
void register_technique_boosts__14TItemEquipBaseFPvPv(void *arg0, Row_8010A89C *row);
void TItemEquipBase__sub_8010A938(void);
void TItemEquipBase__sub_8010A93C(void);
void TItemEquipBase__sub_8010A940(void);
void deduct_cap_excess__14TItemEquipBaseFiPvs(s32 unused, s16 *arg1, s16 arg2);
void TItemEquipBase__sub_8010B620(void);
void TItemEquipBase__vt42(void);
void *__dt__14TItemEquipBaseFv(void *arg0, s16 arg1);
s32 apply_ad_rico_ring__14TItemEquipBaseFii(s32 arg0, s32 arg1);
void* get_stat_bonus_ptr__14TItemEquipBaseFPv(void* p);
void release__14TItemEquipBaseFPv(void *arg0);
void reset__14TItemEquipBaseFPv(void* p);
void subtract_equip_stats__14TItemEquipBaseFPviPvPv(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3);
void update_equip__14TItemEquipBaseFPv(void *arg0);
void update_with_player__14TItemEquipBaseFi(s32 arg0);
M2C_UNK subtract_s16_stat(void *, void *);
s32 release_resource_by_id__9TItemLoadFi(s16);
s32 TObjPlayer__sub_800194E8(void *);
s8 TObjPlayer__sub_80102C30();
void __dt__5TItemFv(void *, int);
s32 clear_flags__11TAdRicoRingFPvUi(s32, s32);
M2C_UNK destroy__5TItemFPv(void *);
M2C_UNK fn_8010B7D8(void *, void *);
M2C_UNK fn_8010B7E8(void *, void *);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_field_ed__10TObjPlayerFPv(void*);
s32 get_id__10TObjPlayerFPv(void *);
s32 get_level__10TObjPlayerFPv(void *);
int memset(void*, void*, void*);

void play_target_impact_effect(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s16 arg3) {
    typedef char sp8_offset[(offsetof(Stack_8010A710, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8010A710, spC) == 0x4) ? 1 : -1];
    Stack_8010A710 stack;
    u8 *temp_r3;
    temp_r3 = (u8 *)(resolve_hittable_target(arg2, (s32) arg3));
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (temp_r3 + 0x38));
        stack.spC = M2C_FIELD(temp_r3, f32 *, 0x300);
    }
    spawn_particle_effect((void *) (&stack.sp8), (int) (0x45));
}

void* get_stat_bonus_ptr__14TItemEquipBaseFPv(void* p) { return (char*)p + 0x16c; }

s8 get_attach_joint__14TItemEquipBaseFPv(u8 *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0x171);
}

s8 TItemEquipBase__sub_8010A77C(u8 *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0x170);
}

void TItemEquipBase__sub_8010A788(void) {  }

void bind_loaded_resources__14TItemEquipBaseFPv(u8 *arg0) {
    s16 temp_r3;
    u8 *temp_r3_2;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF4) == 0U) {
        temp_r3 = M2C_FIELD(arg0, s16 *, 0x172);
        if ((temp_r3 != -1) && (has_resource_id__9TItemLoadFi((s32) temp_r3) == 1)) {
            temp_r3_2 = (u8 *)(find_node_by_id__9TItemLoadFi((s32) M2C_FIELD(arg0, s16 *, 0x172)));
            if (temp_r3_2 != NULL) {
                M2C_FIELD(arg0, u32 *, 0xF4) = (u32) M2C_FIELD(temp_r3_2, u32 *, 0);
                M2C_FIELD(arg0, s32 *, 0x188) = (s32) M2C_FIELD(temp_r3_2, s32 *, 4);
                M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r3_2, s32 *, 0x10);
                M2C_FIELD(arg0, s32 *, 0x17C) = (s32) M2C_FIELD(temp_r3_2, s32 *, 0x14);
                M2C_FIELD(arg0, s32 *, 0x180) = (s32) M2C_FIELD(temp_r3_2, s32 *, 8);
                M2C_FIELD(arg0, s32 *, 0x184) = (s32) M2C_FIELD(temp_r3_2, s32 *, 0xC);
                ((VObj_18_5e04d5 *)(arg0))->m48();
            }
        }
    }
}

void TItemEquipBase__sub_8010A82C(s32 arg0) {
    M2C_UNK sp8;
    s32 temp_r31;
    s32 var_r30;
    temp_r31 = (get_field_ec__12TOSwitchItemFPv((void *)(arg0)) != 0) ? 3 : 0;
    TItemEquipBase__sub_8010B73C((void *) (&sp8));
    var_r30 = 0;
    do {
        TItemEquipBase__sub_8022C680((void *) (&sp8), (void *) (((s32)get_id__13TItemProArmorFPv((void *) (arg0)))), (void *) (temp_r31 + var_r30));
        var_r30 += 1;
    } while (var_r30 != 3);
}

void register_technique_boosts__14TItemEquipBaseFPvPv(void *arg0, Row_8010A89C *row) {
    s32 base;
    Row_8010A89C *p;
    s32 i;
    Slot_8010A89C slot;
    s32 id;
    u8 lv;
    f32 amt;

    if (row == NULL) {
        return;
    }
    base = (get_field_ec__12TOSwitchItemFPv(arg0) != 0) ? 3 : 0;
    p = row;
    i = 0;
    do {
        TItemEquipBase__sub_8010B73C((void *)&slot);
        id = p->id;
        lv = p->level;
        amt = p->amount;
        slot.id = id;
        slot.level = lv;
        slot.amount = amt;
        TItemEquipBase__sub_8022C680((void *)&slot, (void *)((s32 (*)(void *, int))get_id__13TItemProArmorFPv)(arg0, id), (void *)(base + i));
        i++;
        p++;
    } while (i != 3);
}

void TItemEquipBase__sub_8010A938(void) {  }
void TItemEquipBase__sub_8010A93C(void) {  }
void TItemEquipBase__sub_8010A940(void) {  }

void TItemEquipBase__vt42(void) {  }

void TItemEquipBase__sub_8010A948(u8 *arg0) {
    if (((s32)TItemEquipBase__sub_8010AC60((s32)((void *)((void *) (arg0))), (M2C_UNK)((int)((int) (2))), (s32)((int)((int) (4))))) != 0) {
        get_id__13TItemProArmorFPv((void *) (arg0));
        start_event_by_index__15TItemTimerEventFUs();
    }
    if (((s32)TItemEquipBase__sub_8010AC60((s32)((void *)((void *) (arg0))), (M2C_UNK)((int)((int) (8))), (s32)((int)((int) (0x10))))) != 0) {
        apply_equip_slot_effect__14TItemEquipBaseFUsUi(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (0));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((s32)((void *)((void *) (arg0))), (M2C_UNK)((int)((int) (0x20))), (s32)((int)((int) (0x40))))) != 0) {
        check_flag_32__14TItemEquipBaseFPv((int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((s32)((void *)((void *) (arg0))), (M2C_UNK)((int)((int) (0x80))), (s32)((int)((int) (0x100))))) != 0) {
        apply_equip_slot_effect__14TItemEquipBaseFUsUi(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (1));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((s32)((void *)((void *) (arg0))), (M2C_UNK)((int)((int) (0x200))), (s32)((int)((int) (0x400))))) != 0) {
        apply_equip_slot_effect__14TItemEquipBaseFUsUi(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (2));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((s32)((void *)((void *) (arg0))), (M2C_UNK)((int)((int) (0x800))), (s32)((int)((int) (0x1000))))) != 0) {
        apply_equip_slot_effect__14TItemEquipBaseFUsUi(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (3));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((s32)((void *)((void *) (arg0))), (M2C_UNK)((int)((int) (0x2000))), (s32)((int)((int) (0x4000))))) != 0) {
        apply_equip_slot_effect__14TItemEquipBaseFUsUi(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (4));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((s32)((void *)((void *) (arg0))), (M2C_UNK)((int)((int) (0x8000))), (s32)((int)((int) (0x10000))))) != 0) {
        apply_equip_slot_effect__14TItemEquipBaseFUsUi(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (5));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((s32)((void *)((void *) (arg0))), (M2C_UNK)((int)((int) (0x20000))), (s32)((int)((int) (0x40000))))) != 0) {
        apply_equip_slot_effect__14TItemEquipBaseFUsUi(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (6));
    }
}

void remove_equip_effects__14TItemEquipBaseFPv(u8 *arg0) {
    u32 temp_r3;
    if (apply_ad_rico_ring__14TItemEquipBaseFii((s32)((void *) (arg0)), (s32)((int) (1))) != 0) {
        ((VObj_18_24abda *)(arg0))->m45();
    }
    if (apply_ad_rico_ring__14TItemEquipBaseFii((s32)((void *) (arg0)), (s32)((int) (4))) != 0) {
        clear_timer_slot__15TItemTimerEventFUs((void *) (((s32)get_id__13TItemProArmorFPv((void *) (arg0)))));
    }
    if (apply_ad_rico_ring__14TItemEquipBaseFii((s32)((void *) (arg0)), (s32)((int) (0x10))) != 0) {
        apply_equip_effect_slot__14TItemEquipBaseFUsUi((void *) (((s32)get_id__13TItemProArmorFPv((void *) (arg0)))), (int) (0));
    }
    if (apply_ad_rico_ring__14TItemEquipBaseFii((s32)((void *) (arg0)), (s32)((int) (0x40))) != 0) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0xF0);
        if (temp_r3 != 0U) {
            clear_flag_c_bit5__14TItemEquipBaseFPv((void *) (temp_r3 + 0x7CC));
        }
    }
    if (apply_ad_rico_ring__14TItemEquipBaseFii((s32)((void *) (arg0)), (s32)((int) (0x100))) != 0) {
        apply_equip_effect_slot__14TItemEquipBaseFUsUi((void *) (((s32)get_id__13TItemProArmorFPv((void *) (arg0)))), (int) (1));
    }
    if (apply_ad_rico_ring__14TItemEquipBaseFii((s32)((void *) (arg0)), (s32)((int) (0x400))) != 0) {
        apply_equip_effect_slot__14TItemEquipBaseFUsUi((void *) (((s32)get_id__13TItemProArmorFPv((void *) (arg0)))), (int) (2));
    }
    if (apply_ad_rico_ring__14TItemEquipBaseFii((s32)((void *) (arg0)), (s32)((int) (0x1000))) != 0) {
        apply_equip_effect_slot__14TItemEquipBaseFUsUi((void *) (((s32)get_id__13TItemProArmorFPv((void *) (arg0)))), (int) (3));
    }
    if (apply_ad_rico_ring__14TItemEquipBaseFii((s32)((void *) (arg0)), (s32)((int) (0x4000))) != 0) {
        apply_equip_effect_slot__14TItemEquipBaseFUsUi((void *) (((s32)get_id__13TItemProArmorFPv((void *) (arg0)))), (int) (4));
    }
    if (apply_ad_rico_ring__14TItemEquipBaseFii((s32)((void *) (arg0)), (s32)((int) (0x10000))) != 0) {
        apply_equip_effect_slot__14TItemEquipBaseFUsUi((void *) (((s32)get_id__13TItemProArmorFPv((void *) (arg0)))), (int) (5));
    }
    if (apply_ad_rico_ring__14TItemEquipBaseFii((s32)((void *) (arg0)), (s32)((int) (0x40000))) != 0) {
        apply_equip_effect_slot__14TItemEquipBaseFUsUi((void *) (((s32)get_id__13TItemProArmorFPv((void *) (arg0)))), (int) (6));
    }
}

s32 TItemEquipBase__sub_8010AC60(s32 arg0, M2C_UNK arg1, s32 arg2) {
    if ((test_flags_any((void *)((void *) (arg0 + 0x178)), (void *)((void *) (arg1))) != 0) && (test_flags_any((void *)((void *) (arg0 + 0x178)), (void *)((void *) (arg2))) == 0)) {
        set_flags__10TObjPlayerFPvUi((void *) (arg0 + 0x178), (void *) (arg2));
        return 1;
    }
    return 0;
}

s32 apply_ad_rico_ring__14TItemEquipBaseFii(s32 arg0, s32 arg1) {
    if (test_flags_any((void *)(arg0 + 0x178), (void *)(arg1)) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x178, arg1);
        return 1;
    }
    return 0;
}
void set_equip_flag__14TItemEquipBaseFPvUc(void* p, s32 v) { *(u8*)((char*)p + 0x171) = v; }

typedef char RecoveredGlobal_8010AD24_lbl_804C3BA8_size[sizeof(RecoveredGlobal_8010AD24_lbl_804C3BA8) == 0x14 ? 1 : -1];
void set_attach_slot__14TItemEquipBaseFPvc(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x170) = arg1;
    set_equip_flag__14TItemEquipBaseFPvUc((void*)((void *) (arg0)), (s32)((int) ((s8) M2C_FIELD(((u8 *)(&lbl_804C3BA8.value) + (((VObj_18_b34251 *)(arg0))->m31() * 2)), s16 *, 0))));
}

void deduct_cap_excess__14TItemEquipBaseFiPvs(s32 unused, s16 *arg1, s16 arg2) {
    if (arg2 > 0) {
        *arg1 -= arg2;
    }
}

void subtract_equip_stats__14TItemEquipBaseFPviPvPv(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    if (arg1 != 0) {
        subtract_s16_stat((void *) (arg1), (void *) (get_id__10TObjPlayerFPv((void *) (arg0 + 0x11C))));
        fn_8010B7E8((void *) (arg1), (void *) (get_level__10TObjPlayerFPv((void *) (arg0 + 0x11C))));
        fn_8010B7D8((void *) (arg1), (void *) (TObjPlayer__sub_800194E8((void *) (arg0 + 0x11C))));
    }
    if (arg2 != NULL) {
        M2C_FIELD(arg2, s16 *, 0) = (s16) (M2C_FIELD(arg2, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0x14C));
        M2C_FIELD(arg2, s32 *, 0x1C) = (s32) (M2C_FIELD(arg2, s32 *, 0x1C) - M2C_FIELD(arg0, s32 *, 0x168));
        M2C_FIELD(arg2, s16 *, 2) = (s16) (M2C_FIELD(arg2, s16 *, 2) - M2C_FIELD(arg0, s16 *, 0x14E));
        M2C_FIELD(arg2, s16 *, 4) = (s16) (M2C_FIELD(arg2, s16 *, 4) - M2C_FIELD(arg0, s16 *, 0x150));
        M2C_FIELD(arg2, s16 *, 6) = (s16) (M2C_FIELD(arg2, s16 *, 6) - M2C_FIELD(arg0, s16 *, 0x152));
        M2C_FIELD(arg2, s16 *, 8) = (s16) (M2C_FIELD(arg2, s16 *, 8) - M2C_FIELD(arg0, s16 *, 0x154));
        M2C_FIELD(arg2, s16 *, 0xA) = (s16) (M2C_FIELD(arg2, s16 *, 0xA) - M2C_FIELD(arg0, s16 *, 0x156));
    }
    if (arg3 != NULL) {
        M2C_FIELD(arg3, s16 *, 0) = (s16) (M2C_FIELD(arg3, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0xF8));
        M2C_FIELD(arg3, s16 *, 2) = (s16) (M2C_FIELD(arg3, s16 *, 2) - M2C_FIELD(arg0, s16 *, 0xFA));
        M2C_FIELD(arg3, s16 *, 4) = (s16) (M2C_FIELD(arg3, s16 *, 4) - M2C_FIELD(arg0, s16 *, 0xFC));
        M2C_FIELD(arg3, s16 *, 6) = (s16) (M2C_FIELD(arg3, s16 *, 6) - M2C_FIELD(arg0, s16 *, 0xFE));
        M2C_FIELD(arg3, s16 *, 8) = (s16) (M2C_FIELD(arg3, s16 *, 8) - M2C_FIELD(arg0, s16 *, 0x100));
        M2C_FIELD(arg3, s16 *, 0xA) = (s16) (M2C_FIELD(arg3, s16 *, 0xA) - M2C_FIELD(arg0, s16 *, 0x102));
        M2C_FIELD(arg3, s16 *, 0xC) = (s16) (M2C_FIELD(arg3, s16 *, 0xC) - M2C_FIELD(arg0, s16 *, 0x104));
    }
}

void subtract_item_stat_bonus__14TItemEquipBaseFPviiPv(Equip_8010AEFC *self, s32 arg1, s32 arg2, s16 *out) {
    u32 extra;
    ItemData_8010AEFC item;
    Stats_8010AEFC st;
    copy_to_item_data__5TItemFPvPv(self, &item);
    memset(&st, (void *)0, (void *)0x24);
    memset(&extra, (void *)0, (void *)4);
    apply_equip_effects__9TItemDataFPviiiii(&item, self->m_f0, arg1, arg2, &st, &extra);
    if (out != NULL) {
        out[0] -= st.v[0];
        out[1] -= st.v[1];
        out[2] -= st.v[2];
        out[3] -= st.v[3];
        out[4] -= st.v[4];
        out[5] -= st.v[5];
        out[6] -= st.v[6];
    }
}

void reset__14TItemEquipBaseFPv(void* p) { memset((char*)p + 0xf8, (void*)0, (void*)36); memset((char*)p + 0x11c, (void*)0, (void*)48); memset((char*)p + 0x14c, (void*)0, (void*)32); memset((char*)p + 0x16c, (void*)0, (void*)4); }

void update_equip__14TItemEquipBaseFPv(void *arg0) {
    if (TObjPlayer__sub_80102C30() == 2) {
        ((VObj_8010B054_8010A710 *)arg0)->m19();
    }
    destroy__5TItemFPv(arg0);
}

typedef struct RecoveredFields_8010B0A8_arg0 RecoveredFields_8010B0A8_arg0;
typedef struct VBase_18_8e31a0 VBase_18_8e31a0;
typedef struct VObj_18_8e31a0 VObj_18_8e31a0;
#define PSO_VCALL_VObj_18_8e31a0_m23(_self, _arg0, _arg1, _arg2) (((VObj_18_8e31a0 *)(_self))->m23((_arg0), (_arg1), (_arg2)))
#define PSO_VCALL_VObj_18_8e31a0_m47(_self) (((VObj_18_8e31a0 *)(_self))->m47())
#define PSO_VCALL_VObj_18_8e31a0_m71(_self) (((VObj_18_8e31a0 *)(_self))->m71())
void remove_equip_stats__14TItemEquipBaseFPvi(u8 *arg0, s32 arg1) {
  u8 *temp_r3;
  s32 temp_r31;
  s32 temp_r30;
  int new_var;
  u8 *temp_r3_2;
  temp_r3 = (u8 *) ((RecoveredFields_8010B0A8_arg0 *) arg0)->field_F0;
  if (temp_r3 != 0)
  {
    temp_r31 = TItemData__sub_8010B810((int) temp_r3);
    temp_r30 = TItemData__sub_8010B808((void *) ((RecoveredFields_8010B0A8_arg0 *) arg0)->field_F0);
    new_var = get_quest_id__12TQuestListVMFPv((void *) ((RecoveredFields_8010B0A8_arg0 *) arg0)->field_F0);
    PSO_VCALL_VObj_18_8e31a0_m23(arg0, temp_r31, temp_r30, new_var);
    if (arg1 != 0)
    {
      add_actor_hp_bonus((void *) ((RecoveredFields_8010B0A8_arg0 *) arg0)->field_F0, (int) ((s32) ((s16) (-((RecoveredFields_8010B0A8_arg0 *) arg0)->field_16C))));
      add_actor_tp_bonus((void *) ((RecoveredFields_8010B0A8_arg0 *) arg0)->field_F0, (int) ((s32) ((s16) (-((RecoveredFields_8010B0A8_arg0 *) arg0)->field_16E))));
      PSO_VCALL_VObj_18_8e31a0_m47(arg0);
      temp_r3_2 = (u8 *) ((RecoveredFields_8010B0A8_arg0 *) arg0)->field_F0;
      PSO_VCALL_VObj_18_8e31a0_m71(temp_r3_2);
      clamp_value__10TObjPlayerFPv((void *) ((RecoveredFields_8010B0A8_arg0 *) arg0)->field_F0);
      clamp_field_32E__10TObjPlayerFPv((void *) ((RecoveredFields_8010B0A8_arg0 *) arg0)->field_F0);
    }
    reset__14TItemEquipBaseFPv((void*)((void *) arg0));
  }
}

void unequip__14TItemEquipBaseFPv(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        set_mode__5TItemFPvc((void *)(arg0), (int) (1));
        clear_item_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (0x28));
        ((VObj_18_546d8d *)(arg0))->m21(1);
        remove_equip_effects__14TItemEquipBaseFPv((u8 *)((void *) (arg0)));
        ((VObj_18_546d8d *)(arg0))->m43();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
            delete_children__7TObjectFv(M2C_FIELD(arg0, void **, 0x174));
        }
    }
}

void add_equip_stats__14TItemEquipBaseFPvi(VObj_8010B224 *self, s32 arg1) {
    ItemData_8010B224 item;
    s32 t;
    u8 *p;
    u8 *arg0 = (u8 *)self;
    if (M2C_FIELD(arg0, void **, 0xF0) != NULL) {
        copy_to_item_data__5TItemFPvPv(arg0, &item);
        apply_equip_effects__9TItemDataFPviiiii(&item, M2C_FIELD(arg0, s32 *, 0xF0), (s32)(arg0 + 0x11C), (s32)(arg0 + 0x14C), arg0 + 0xF8, arg0 + 0x16C);
        t = TItemData__sub_8010B810(M2C_FIELD(arg0, s32 *, 0xF0));
        if (t != 0) {
            add_s16__9TItemDataFPvi(t, get_id__10TObjPlayerFPv(arg0 + 0x11C));
            add_stat__9TItemDataFPvi(t, get_level__10TObjPlayerFPv(arg0 + 0x11C));
            add_accuracy__9TItemDataFPvi(t, TObjPlayer__sub_800194E8(arg0 + 0x11C));
        }
        p = (u8 *)TItemData__sub_8010B808(M2C_FIELD(arg0, void **, 0xF0));
        if (p != NULL) {
            M2C_FIELD(p, s16 *, 0) += M2C_FIELD(arg0, s16 *, 0x14C);
            M2C_FIELD(p, s32 *, 0x1C) += M2C_FIELD(arg0, s32 *, 0x168);
            M2C_FIELD(p, s16 *, 2) += M2C_FIELD(arg0, s16 *, 0x14E);
            M2C_FIELD(p, s16 *, 4) += M2C_FIELD(arg0, s16 *, 0x150);
            M2C_FIELD(p, s16 *, 6) += M2C_FIELD(arg0, s16 *, 0x152);
            M2C_FIELD(p, s16 *, 8) += M2C_FIELD(arg0, s16 *, 0x154);
            M2C_FIELD(p, s16 *, 0xA) += M2C_FIELD(arg0, s16 *, 0x156);
        }
        if (((u32 (*)(void *))get_quest_id__12TQuestListVMFPv)(M2C_FIELD(arg0, void **, 0xF0)) != 0U) {
            s16 v = add_stat__10TObjPlayerFPvi(M2C_FIELD(arg0, void **, 0xF0), M2C_FIELD(arg0, s16 *, 0xF8));
            deduct_cap_excess__14TItemEquipBaseFiPvs((s32)arg0, (s16 *)(arg0 + 0xF8), v);
            deduct_cap_excess__14TItemEquipBaseFiPvs((s32)arg0, (s16 *)(arg0 + 0xFA), add_mst__10TObjPlayerFPvi(M2C_FIELD(arg0, void **, 0xF0), M2C_FIELD(arg0, s16 *, 0xFA)));
            deduct_cap_excess__14TItemEquipBaseFiPvs((s32)arg0, (s16 *)(arg0 + 0xFC), add_evp__10TObjPlayerFPvi(M2C_FIELD(arg0, void **, 0xF0), M2C_FIELD(arg0, s16 *, 0xFC)));
            deduct_cap_excess__14TItemEquipBaseFiPvs((s32)arg0, (s16 *)(arg0 + 0xFE), add_hp__10TObjPlayerFPvi(M2C_FIELD(arg0, void **, 0xF0), M2C_FIELD(arg0, s16 *, 0xFE)));
            deduct_cap_excess__14TItemEquipBaseFiPvs((s32)arg0, (s16 *)(arg0 + 0x100), add_dfp__10TObjPlayerFPvi(M2C_FIELD(arg0, void **, 0xF0), M2C_FIELD(arg0, s16 *, 0x100)));
            deduct_cap_excess__14TItemEquipBaseFiPvs((s32)arg0, (s16 *)(arg0 + 0x102), add_ata__10TObjPlayerFPvi(M2C_FIELD(arg0, void **, 0xF0), M2C_FIELD(arg0, s16 *, 0x102)));
            deduct_cap_excess__14TItemEquipBaseFiPvs((s32)arg0, (s16 *)(arg0 + 0x104), add_lck__10TObjPlayerFPvi(M2C_FIELD(arg0, void **, 0xF0), M2C_FIELD(arg0, s16 *, 0x104)));
        }
        if (arg1 != 0) {
            add_actor_hp_bonus(M2C_FIELD(arg0, void **, 0xF0), M2C_FIELD(arg0, s16 *, 0x16C));
            add_actor_tp_bonus(M2C_FIELD(arg0, void **, 0xF0), M2C_FIELD(arg0, s16 *, 0x16E));
            self->m46();
            ((VObj_8010B224 *)M2C_FIELD(arg0, void **, 0xF0))->m71();
        }
    }
}

void equip__14TItemEquipBaseFPv(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        update_owner_visibility__5TItemFPv((void *) (arg0));
        set_mode__5TItemFPvc((void *) (arg0), (int) (2));
        add_item_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (8));
        ((VObj_18_df954d *)(arg0))->m20(1);
        if ((get_global_state__14TOKeyMachine01Fv() != 0xF) && (test_flags_any((void *)((void *) (arg0 + 0x178)), (void *)((int) (1))) == 0)) {
            set_flags__10TObjPlayerFPvUi((void *)((void *) (arg0 + 0x178)), (void *)((int) (1)));
            ((VObj_18_df954d *)(arg0))->m44();
        }
        TItemEquipBase__sub_8010A948((u8 *)((void *) (arg0)));
        ((VObj_18_df954d *)(arg0))->m42();
    }
}

void release__14TItemEquipBaseFPv(void *arg0) {
    s16 temp = M2C_FIELD(arg0, s16 *, 0x172);
    if (temp != -1) {
        release_resource_by_id__9TItemLoadFi(temp);
        M2C_FIELD(arg0, s16 *, 0x172) = -1;
        M2C_FIELD(arg0, s32 *, 0xF4) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x188) = 0;
        M2C_FIELD(arg0, s32 *, 0x17C) = 0;
        M2C_FIELD(arg0, s32 *, 0x180) = 0;
        M2C_FIELD(arg0, s32 *, 0x184) = 0;
    }
}

void request_model_load__14TItemEquipBaseFPvi(u8 *arg0, s32 arg1) {
    TItemData item_data;
    init__9TItemDataFv((void *) (&item_data.data1.data_u8[0]));
    item_data.data1.data_u8[0] = get_field_ec__12TOSwitchItemFPv((void *)((void *) (arg0)));
    item_data.data1.data_u8[1] = arg1;
    item_data.data1.data_u8[2] = get_slot_count__14TItemProShieldFPv((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x172) = request_item_model_load((void *) (&item_data.data1.data_u8[0]));
}

void update_with_player__14TItemEquipBaseFi(s32 object) {
    request_model_load__14TItemEquipBaseFPvi((u8*)object, get_field_ed__10TObjPlayerFPv((void*)object));
}
void TItemEquipBase__sub_8010B620(void) {  }

extern M2C_UNK __vt__14TItemEquipBase[];

void *__dt__14TItemEquipBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TItemEquipBase;
        remove_equip_effects__14TItemEquipBaseFPv((u8 *)(arg0));
        __dt__5TItemFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
u8 *TItemEquipBase__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    TItem__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8010B684___vt__14TItemEquipBase *)&__vt__14TItemEquipBase).value;
    init_forward__10TObjPlayerFPv((void *) (arg0 + 0x178));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2BE0;
    M2C_FIELD(arg0, s8 *, 0x170) = 0;
    M2C_FIELD(arg0, s8 *, 0x171) = 0;
    reset__14TItemEquipBaseFPv((void*)((void *) (arg0)));
    M2C_FIELD(arg0, s16 *, 0x172) = -1;
    clear_id__10TObjPlayerFPv((void *) (arg0 + 0x178));
    add_item_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (4));
    temp_r3 = alloc__13TItemProArmorFi((int) (0x1C));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = init_object__21TItemEffArmorParticleFPv((int) (temp_r3), (void *) (arg0));
    }
    M2C_FIELD(arg0, s32 *, 0x174) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x17C) = 0;
    M2C_FIELD(arg0, s32 *, 0x188) = 0;
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    M2C_FIELD(arg0, s32 *, 0x184) = 0;
    return arg0;
}

}
