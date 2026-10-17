#include "types.h"
#include "pso/item/TUnk_804A0688.h"
#include "pso/item/TUnk_804A0668.h"
#include "pso/item/TUnk_8049FF88.h"
#include "pso/item/TItemProArmor.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemData.h"
#include "pso/item/TItemMag.h"
#include "pso/item/TItemProShield.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80117B98___vt__13TItemProArmor {
    s32 value;
    u8 remaining[0xC8];
};

typedef struct ArmorParam_8011781C {
    u8 pad[0x1A];
    u8 variant;
} ArmorParam_8011781C;

typedef struct TItemProArmor_8011781C {
    u8 pad0[0x178];
    u8 flags178[0x14];
    ArmorParam_8011781C *param;
    u16 flags190;
} TItemProArmor_8011781C;

struct Armor_80117954 {
    u8 pad[0x174];
    void *owner;
};

extern "C" {
void vfunc_40__13TItemProArmorFv(u8 *arg0);
void vfunc_14__13TItemProArmorFv(u8 *arg0);
void * TItemProArmor__sub_80117650(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_item_grinder(u8 *arg0);
u8 * TItemEquipBase__ct(void *);
s16 get_bswap16_field8__9TItemDataFPv(void *);
s16 getS16_06__9TItemDataFPv(void *);
void *lookup_item_pmt_record(u8 *item);
extern void *__vt__13TItemProArmor[];
extern s32 lbl_805D2C30;
u8 *TItemProArmor__ct(u8 *arg0, s32 arg1, u8 *arg2);
s32 TItemProArmorParticle__ct(int, int, void *);
s32 get_id__13TItemProArmorFv(void *);
void *fn_80107DA4(void *, void *, s32);
void *init_vtable__13TUnk_804A0668Fv(void *arg0);
void *ct__13TUnk_804A0688Fv(void *arg0);
void *construct_timer_event__13TUnk_804A0628Fv(void *, void *, s32, s32);
void *init_item_timer_event__13TUnk_804A0648Fv(void *, void *, s32, s32);
void *__nw__7TObjectFUl(int);
void *__nw__15TItemHeapObjectFUl(int);
void vfunc_44__13TItemProArmorFv(Armor_80117954 *self);
void *__dt__13TUnk_8049FF88Fv(void *arg0, s16 arg1);
void TItemProArmor__sub_801178A8(void* p, void* q);
u8 vfunc_39__13TItemProArmorFv(void* p);
void TItemProArmor__sub_80117D00(void);
void TItemProArmor__sub_80117D04(void);
void vfunc_16__13TItemProArmorFv(void *arg0);
void *__dt__13TItemProArmorFv(void *arg0, s16 arg1);
void vfunc_44__13TUnk_8049FF88Fv(void *arg0);
void vfunc_46__13TItemProArmorFv(void* p);
void write_item_data__13TItemProArmorFPvPv(void *arg0, void *arg1);
void TItemObject__ct(void *);
s32 get_tool_pmt_amount_byte__11TItemObjectFv(void *);
void TItemTimerEvent__ct(void *);
s32 refresh_owner_stats__5TItemFv();
int spawn_appearance_effect__10TObjPlayerFl(void);
s32 add_weapon_grind(s32, s32);
void *__dt__11TItemObjectFv(void *arg0, s16 arg1);
void *__dt__14TItemEquipBaseFv(void *arg0, s16 arg1);
int get_item_field_6__10TObjPlayerFPv(void *p);
int obj_getField1c(void*);

extern s32 lbl_8049FED0[];

void *TItemProArmor__sub_80117650(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_8049FED0;
    return arg0;
}

u8 *TItemProArmor::create_instance() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemProArmor__sub_80117650((void *)temp_r3, (void *)tl_05, (void *)arg0)));
        }
        return var_r0;
    }
    return NULL;
}

void TUnk_8049FF88::vfunc_44() {
    s32 temp_r3;

    temp_r3 = get_item_field_6__10TObjPlayerFPv((void *)this->m_f0);
    if (temp_r3 != 0) {
        add_weapon_grind(temp_r3, get_tool_pmt_amount_byte__11TItemObjectFv(this));
    }
}

extern void *lbl_8049FF88[];

void *__dt__13TUnk_8049FF88Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)lbl_8049FF88;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

void *TUnk_8049FF88::init_item_object(void *_w1, void *_w2) {
    TItemObject__ct(this);
    *(s32 **)((s8 *)this + 0x18) = (s32 *)lbl_8049FF88;
    return this;
}

u8 *create_item_grinder(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TUnk_8049FF88 *)temp_r3)->init_item_object((void *)tl_05, (void *)arg0)));
        }
        return var_r0;
    }
    return NULL;
}

void TItemProArmor::init_effect_flags() {
    TItemProArmor_8011781C *self = (TItemProArmor_8011781C *)this;
    switch (((TItemProShield *)self)->get_slot_count()) {
    case 0x23:
        ((TObjPlayer *)(self->flags178))->set_flags(2);
        break;
    case 0x33:
        ((TObjPlayer *)(self->flags178))->set_flags(0x200);
        break;
    }
    switch (self->param->variant) {
    case 0:
        break;
    case 1:
        self->flags190 |= 1;
        break;
    case 2:
        break;
    }
}

void TItemProArmor__sub_801178A8(void* p, void* q) { *(u8*)((char*)p + 0x5) = *(u8*)((char*)q + 0x192); }

void TItemProArmor::vfunc_40() {
    u8 temp_r4;
    temp_r4 = this->m_192;
    if (temp_r4 < 4U) {
        this->m_192 = (temp_r4 + 1);
    }
}

int TItemProArmor::vfunc_39() { return this->m_192; }

void TItemProArmor::vfunc_14() {
    if ((u8) this->m_195 < (u8) this->m_193) {
        this->m_193 = 0U;
    }
    if ((u8) this->m_196 < (u8) this->m_194) {
        this->m_194 = 0U;
    }
}

void write_item_data__13TItemProArmorFPvPv(void *arg0, void *arg1) {
    *(u8 *)((s8 *)arg1 + 5) = (u8) ((TItemProArmor *)arg0)->m_192;
    ((TItemData *)arg1)->set_dfp_bonus(((TItemProArmor *)arg0)->m_193);
    ((TItemData *)arg1)->set_bswapped_field_8(((TItemProArmor *)arg0)->m_194);
}

typedef void *(*Ctor4_80117954)(void *, void *, s32, s32);
extern "C" {
void run_task__5TItemFv();
void dispatch_state__5TItemFv();
void render_shadows__5TItemFv();
void vfunc_6__13TUnk_804B9870FPsl();
void apply_object_set_data__13TUnk_804B9870FPv();
void release_member_90__10TObjPlayerFv();
void vfunc_9__11TItemObjectFv();
int TItem__sub_80100B8C(void *p);
void classify_actor_view_detail__13TUnk_804B9870Ffff();
void register_attack__5TItemFv();
void try_pick_up_item__5TItemFl();
void vfunc_14__11TItemObjectFv();
void TItem__sub_801005E0();
void vfunc_16__5TItemFv();
void vfunc_17__5TItemFv();
void TItemObject__vt16(u8 *arg0, u8 *item);
void vfunc_19__5TItemFSc();
void vfunc_20__5TItemFv();
void vfunc_21__5TItemFPUclll();
void vfunc_22__5TItemFl();
void vfunc_23__5TItemFl();
void vfunc_24__5TItemFllPs();
void vfunc_25__5TItemFv();
void vfunc_26__5TItemFv();
void vfunc_27__5TItemFv();
void vfunc_28__5TItemFv();
void destroy__5TItemFv();
void vfunc_30__5TItemFv();
void vfunc_31__11TItemObjectFv();
void vfunc_32__5TItemFv();
void vfunc_33__5TItemFv();
void vfunc_34__5TItemFv();
void vfunc_35__5TItemFv();
void vfunc_36__11TItemObjectFv();
s32 TItemObject__vt35(void *arg0, s32 arg1);
s32 vfunc_38__11TItemObjectFl(void *arg0, s32 arg1);
int ret_8010064C(void);
void TItem__sub_80100648();
int TItem__sub_801005E4(void);
void TItem__sub_801005D8();
void vfunc_43__5TItemFv();
void vfunc_9__13TUnk_804B9870Fv();
void set_attach_slot__14TItemEquipBaseFSc();
void equip__14TItemEquipBaseFv();
void unequip__14TItemEquipBaseFv();
void add_equip_stats__14TItemEquipBaseFl();
void remove_equip_stats__14TItemEquipBaseFl();
void subtract_item_stat_bonus__14TItemEquipBaseFllPs();
void subtract_equip_stats__14TItemEquipBaseFlPUcPUc();
void update_equip__14TItemEquipBaseFv();
s8 TItemEquipBase__sub_8010A77C(u8 *arg0);
int ret_80100664(void);
int ret_8010065C(void);
int ret_80100654(void);
void vfunc_45__14TItemEquipBaseFv();
void release__14TItemEquipBaseFv();
void vfunc_48__14TItemEquipBaseFv();
void vfunc_49__14TItemEquipBaseFv();
void vfunc_50__14TItemEquipBaseFv();
}

void *lbl_8049FF88[46] = {
    0,
    0,
    (void *)__dt__13TUnk_8049FF88Fv,
    (void *)run_task__5TItemFv,
    (void *)dispatch_state__5TItemFv,
    (void *)render_shadows__5TItemFv,
    (void *)vfunc_6__13TUnk_804B9870FPsl,
    (void *)apply_object_set_data__13TUnk_804B9870FPv,
    (void *)release_member_90__10TObjPlayerFv,
    (void *)vfunc_9__11TItemObjectFv,
    (void *)TItem__sub_80100B8C,
    (void *)classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)register_attack__5TItemFv,
    (void *)try_pick_up_item__5TItemFl,
    (void *)vfunc_14__11TItemObjectFv,
    (void *)TItem__sub_801005E0,
    (void *)vfunc_16__5TItemFv,
    (void *)vfunc_17__5TItemFv,
    (void *)TItemObject__vt16,
    (void *)vfunc_19__5TItemFSc,
    (void *)vfunc_20__5TItemFv,
    (void *)vfunc_21__5TItemFPUclll,
    (void *)vfunc_22__5TItemFl,
    (void *)vfunc_23__5TItemFl,
    (void *)vfunc_24__5TItemFllPs,
    (void *)vfunc_25__5TItemFv,
    (void *)vfunc_26__5TItemFv,
    (void *)vfunc_27__5TItemFv,
    (void *)vfunc_28__5TItemFv,
    (void *)destroy__5TItemFv,
    (void *)vfunc_30__5TItemFv,
    (void *)vfunc_31__11TItemObjectFv,
    (void *)vfunc_32__5TItemFv,
    (void *)vfunc_33__5TItemFv,
    (void *)vfunc_34__5TItemFv,
    (void *)vfunc_35__5TItemFv,
    (void *)vfunc_36__11TItemObjectFv,
    (void *)TItemObject__vt35,
    (void *)vfunc_38__11TItemObjectFl,
    (void *)ret_8010064C,
    (void *)TItem__sub_80100648,
    (void *)TItem__sub_801005E4,
    (void *)TItem__sub_801005D8,
    (void *)vfunc_43__5TItemFv,
    (void *)vfunc_44__13TUnk_8049FF88Fv,
    0,
};

void *__vt__13TItemProArmor[51] = {
    0,
    0,
    (void *)__dt__13TItemProArmorFv,
    (void *)run_task__5TItemFv,
    (void *)dispatch_state__5TItemFv,
    (void *)render_shadows__5TItemFv,
    (void *)vfunc_6__13TUnk_804B9870FPsl,
    (void *)apply_object_set_data__13TUnk_804B9870FPv,
    (void *)release_member_90__10TObjPlayerFv,
    (void *)vfunc_9__13TUnk_804B9870Fv,
    (void *)TItem__sub_80100B8C,
    (void *)classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)register_attack__5TItemFv,
    (void *)try_pick_up_item__5TItemFl,
    (void *)vfunc_14__13TItemProArmorFv,
    (void *)TItem__sub_801005E0,
    (void *)vfunc_16__13TItemProArmorFv,
    (void *)vfunc_17__5TItemFv,
    (void *)write_item_data__13TItemProArmorFPvPv,
    (void *)set_attach_slot__14TItemEquipBaseFSc,
    (void *)equip__14TItemEquipBaseFv,
    (void *)unequip__14TItemEquipBaseFv,
    (void *)add_equip_stats__14TItemEquipBaseFl,
    (void *)remove_equip_stats__14TItemEquipBaseFl,
    (void *)subtract_item_stat_bonus__14TItemEquipBaseFllPs,
    (void *)subtract_equip_stats__14TItemEquipBaseFlPUcPUc,
    (void *)vfunc_26__5TItemFv,
    (void *)vfunc_27__5TItemFv,
    (void *)vfunc_28__5TItemFv,
    (void *)update_equip__14TItemEquipBaseFv,
    (void *)vfunc_30__5TItemFv,
    (void *)TItem::update_pickup_flag,
    (void *)vfunc_32__5TItemFv,
    (void *)TItemEquipBase__sub_8010A77C,
    (void *)vfunc_34__5TItemFv,
    (void *)vfunc_35__5TItemFv,
    (void *)ret_80100664,
    (void *)ret_8010065C,
    (void *)ret_80100654,
    (void *)vfunc_39__13TItemProArmorFv,
    (void *)vfunc_40__13TItemProArmorFv,
    (void *)TItem__sub_801005E4,
    (void *)TItem__sub_801005D8,
    (void *)vfunc_43__5TItemFv,
    (void *)vfunc_44__13TItemProArmorFv,
    (void *)vfunc_45__14TItemEquipBaseFv,
    (void *)vfunc_46__13TItemProArmorFv,
    (void *)release__14TItemEquipBaseFv,
    (void *)vfunc_48__14TItemEquipBaseFv,
    (void *)vfunc_49__14TItemEquipBaseFv,
    (void *)vfunc_50__14TItemEquipBaseFv,
};

void TItemProArmor::vfunc_44() {
    Armor_80117954 *self = (Armor_80117954 *)this;
    void *o;
    if (self->owner == NULL) {
        return;
    }
    switch (((TItemProShield *)self)->get_slot_count()) {
    case 27:
        o = __nw__15TItemHeapObjectFUl(0x2C);
        if (o != NULL) {
            init_item_timer_event__13TUnk_804A0648Fv(o, self->owner, get_id__13TItemProArmorFv(self), 150);
        }
        break;
    case 28:
        o = __nw__15TItemHeapObjectFUl(0x2C);
        if (o != NULL) {
            construct_timer_event__13TUnk_804A0628Fv(o, self->owner, get_id__13TItemProArmorFv(self), 300);
        }
        break;
    case 32:
        o = __nw__15TItemHeapObjectFUl(0x2C);
        if (o != NULL) {
            ((Ctor4_80117954)ct__13TUnk_804A0688Fv)(o, self->owner, get_id__13TItemProArmorFv(self), 300);
        }
        break;
    case 33:
        o = __nw__15TItemHeapObjectFUl(0x2C);
        if (o != NULL) {
            ((Ctor4_80117954)ct__13TUnk_804A0688Fv)(o, self->owner, get_id__13TItemProArmorFv(self), 240);
        }
        break;
    case 34:
        o = __nw__15TItemHeapObjectFUl(0x2C);
        if (o != NULL) {
            ((Ctor4_80117954)ct__13TUnk_804A0688Fv)(o, self->owner, get_id__13TItemProArmorFv(self), 210);
        }
        break;
    case 43:
        o = __nw__15TItemHeapObjectFUl(0x2C);
        if (o != NULL) {
            ((Ctor4_80117954)ct__13TUnk_804A0688Fv)(o, self->owner, get_id__13TItemProArmorFv(self), 150);
        }
        break;
    case 49:
        o = __nw__15TItemHeapObjectFUl(0x2C);
        if (o != NULL) {
            ((Ctor4_80117954)init_vtable__13TUnk_804A0668Fv)(o, self->owner, get_id__13TItemProArmorFv(self), 150);
        }
        break;
    case 45:
        o = __nw__7TObjectFUl(0x24);
        if (o != NULL) {
            fn_80107DA4(o, self->owner, get_id__13TItemProArmorFv(self));
        }
        break;
    }
}

void TItemProArmor::vfunc_16() {
    if (this->m_190 & 1) {
        refresh_owner_stats__5TItemFv();
    }
}

void TItemProArmor::vfunc_46() { if (((TItemMag *)this)->get_flag_40() == 0) { obj_getField1c(*(void* *)&this->m_f0); spawn_appearance_effect__10TObjPlayerFl(); } }

typedef char RecoveredGlobal_80117B98___vt__13TItemProArmor_size[sizeof(RecoveredGlobal_80117B98___vt__13TItemProArmor) == 0xCC ? 1 : -1];
u8 *TItemProArmor__ct(u8 *arg0, s32 arg1, u8 *item) {
    TItemEquipBase__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80117B98___vt__13TItemProArmor *)&__vt__13TItemProArmor).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2C30;
    ((TItemProArmor *)(arg0))->vfunc_19(2);
    ((TItemProArmor *)arg0)->m_190 = 0;
    ((TItemProArmor *)arg0)->m_192 = (u8) *(u8 *)((s8 *)item + 5);
    ((TItemProArmor *)arg0)->m_193 = getS16_06__9TItemDataFPv(item);
    ((TItemProArmor *)arg0)->m_194 = get_bswap16_field8__9TItemDataFPv(item);
    ((TItemProArmor *)arg0)->m_18c = (s32)lookup_item_pmt_record(item);
    ((TItemProArmor *)arg0)->m_195 = (u8) *(u8 *)((s8 *)(((TItemProArmor *)arg0)->m_18c) + 0x16);
    ((TItemProArmor *)arg0)->m_196 = (u8) *(u8 *)((s8 *)(((TItemProArmor *)arg0)->m_18c) + 0x17);
    if ((u8) ((TItemProArmor *)arg0)->m_192> 4U) {
        ((TItemProArmor *)arg0)->m_192 = 4U;
    }
    ((TItemProArmor *)arg0)->init_effect_flags();
    return arg0;
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
#pragma optimize_for_size off
s32 TItemProArmor::create_armor_object() {
    s32 arg0 = (s32)this;
  s32 temp_r3;
  s32 temp_r3_2;
  s32 var_r0;
  s32 var_r0_2;
  u8 temp_r0;
  if (arg0 != 0)
  {
    temp_r0 = *((u8 *) (((s8 *) ((u8 *)lookup_item_pmt_record((u8 *)arg0))) + 0x1A));
    if (((s32) temp_r0) != 2)
    {
      if (((s32) temp_r0) < 2)
      {
        if (((s32) temp_r0) < 0)
        {
          if ((temp_r3 && temp_r3) && temp_r3)
          {
          }
          goto block_11;
        }
        temp_r3 = ((s32)alloc_from_obj_heap__10TObjPlayerFPv(0x198));
        var_r0_2 = temp_r3;
        if (var_r0_2 != 0)
        {
          var_r0_2 = ((s32)TItemProArmor__ct((u8 *)((int) temp_r3), (s32)((int) tl_05), (u8 *)((void *) arg0)));
        }
        return var_r0_2;
      }
      goto block_11;
    }
    temp_r3_2 = ((s32)alloc_from_obj_heap__10TObjPlayerFPv(0x1A4));
    var_r0 = temp_r3_2;
    if (var_r0 != 0)
    {
      var_r0 = TItemProArmorParticle__ct((int) temp_r3_2, (int) tl_05, (void *) arg0);
    }
    return var_r0;
  }
  block_11:
  return 0;
}
#pragma pop

void TItemProArmor__sub_80117D00(void) {  }
void TItemProArmor__sub_80117D04(void) {  }

void *__dt__13TItemProArmorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__13TItemProArmor;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804A0668[];

void *TUnk_804A0668::init_vtable() {
    TItemTimerEvent__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A0668;
    return this;
}

extern s32 lbl_804A0688[];

void *TUnk_804A0688::ct() {
    TItemTimerEvent__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A0688;
    return this;
}

}
