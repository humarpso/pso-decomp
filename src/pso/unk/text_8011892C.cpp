#include "types.h"
#include "pso/item/TItem_80100508.h"
#include "pso/item/TItem_80100674.h"
#include "pso/misc/pso_const_ids6.h"
#include "pso/unk/text_8011892C.h"
#include "pso/item/TItemProUnit.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemData.h"
#include "pso/player/TObjPlayer.h"

struct Base_80118A48_8011892C { char pad[0x18]; };
struct VObj_80118A48_8011892C : Base_80118A48_8011892C {
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
    virtual void m17(int);
};

struct Base_80118958 { char pad[0x18]; };

struct VObj_80118958 : Base_80118958 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual s32 m31();
};

struct Self_80118958 : VObj_80118958 { u8 pad[0x1bc - 0x1c]; s16 s1bc; };

struct Out_80118958 { u8 pad[4]; s8 b4; };

struct Data_80118A78 { u8 pad[0x7cc]; u8 unit[4]; };

struct Self_80118A78 { u8 pad[0xf0]; Data_80118A78 *data; u8 padf4[0x18c - 0xf4]; s16 s18c; u8 pad18e[0x1b8 - 0x18e]; f32 evp; };

struct Owner_80118AD4 { u8 pad0[0x428]; u8 f428[0x88D - 0x428]; u8 f88d; };

struct Unit_80118AD4 { u8 pad0[0xF0]; Owner_80118AD4 *owner; u8 padF4[0x190 - 0xF4]; s16 f190; s16 arr[19]; };

struct PU_801189AC { u8 pad[0x192]; s16 arr[0x13]; };

extern "C" {
void vfunc_14__12TItemProUnitFv(u8 *arg0);
s32 get_id__13TItemProArmorFv(void *);
s32 construct_timer_event__13TUnk_804A0628Fv(int, int, void *, int);
s32 init_item_timer_event__13TUnk_804A0648Fv(int, int, void *, int);
s32 init_timer_event__13TUnk_804A0608Fv(int, int, void *, int);
s32 __nw__15TItemHeapObjectFUl(int);
extern const f32 lbl_805DABFC;
void vfunc_44__12TItemProUnitFv(u8 *arg0);
extern const f32 TItemProUnit__data_805DABF8;
extern const f32 lbl_805DAC00;
void TItemProUnit__vt16(Self_80118958 *self, Out_80118958 *out);
f32 TItemProUnit__sub_8011901C(void *);
void vfunc_16__12TItemProUnitFv(Self_80118A78 *self);
u8 get_technique_learn_limit(u8, u8);
u8 get_cast_technique_level(void *, s16);
void set_technique_level_entry(void *, s16, u8);
void vfunc_48__12TItemProUnitFv(Unit_80118AD4 *self);
s32 memset(void *, s32, s32);
void vfunc_49__12TItemProUnitFv(u8 *arg0);
void vfunc_45__12TItemProUnitFv(void *arg0);
void *lookup_item_pmt_record(u8 *item);
s32 TItemEquipBase__ct();
s16 get_field6_bswap__9TItemDataFPv(void *);

void TItem__sub_8011892C(void) {  }

void TItemProUnit::vfunc_14() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;
    s16 temp_r4;
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x1BE);
    temp_r4 = *(s16 *)((s8 *)arg0 + 0x1BC);
    if ((temp_r0 < temp_r4) || (temp_r4 < -temp_r0)) {
        *(s16 *)((s8 *)arg0 + 0x1BC) = 0;
    }
}

void TItemProUnit__vt16(Self_80118958 *self, Out_80118958 *out) {
    out->b4 = (s8)self->m31() - 9;
    ((TItemData *)out)->set_unit_modifier(self->s1bc);
}

void TItemProUnit::vfunc_49() {
    u8 *arg0 = (u8 *)this;
    s32 i;
    if ((s16) *(s16 *)((s8 *)arg0 + 0x18C) == 0x13) {
        ((TItemProUnit *)(*(s32 *)&this->m_f0 + 0x7CC))->set_evp(TItemProUnit__data_805DABF8);
    }
    i = 0;
    do {
        set_technique_level_entry((void *)(*(s32 *)&this->m_f0 + 0x428), (s16) i, (u8) (get_cast_technique_level((void *)(*(s32 *)&this->m_f0 + 0x428), (s16) i) - ((PU_801189AC *)arg0)->arr[i]));
        i += 1;
    } while (i != 0x13);
    memset(arg0 + 0x192, 0, 0x26);
}

void TItemProUnit::vfunc_45() {
    struct VObj_80118A48_8011892C *o = (struct VObj_80118A48_8011892C *)this;
    o->m17(9);
}

extern void *__vt__12TItemProUnit[];
extern s32 lbl_805D2C40;

void TItemProUnit::vfunc_16() {
    Self_80118A78 *self = (Self_80118A78 *)this;
    if (self->s18c == 0x13) {
        if (TItemProUnit__sub_8011901C(self->data->unit) < self->evp) {
            ((TItemProUnit *)(self->data->unit))->set_evp(self->evp);
        }
    }
}

#pragma push
#pragma opt_common_subs off
void TItemProUnit::vfunc_48() {
    Unit_80118AD4 *self = (Unit_80118AD4 *)this;
    u8 v;
    s16 i;
    u8 cap;
    s16 base;
    u8 tot;
    if (self->f190 != 0) {
        for (i = 0; i != 19; i++) {
            if (i == 14 || i == 17) {
                continue;
            }
            v = get_cast_technique_level(self->owner->f428, i);
            if (v != 0xFF) {
                cap = get_technique_learn_limit(self->owner->f88d, (u8)i);
                base = self->f190;
                tot = v + base;
                if (cap < tot) {
                    self->arr[i] = base + cap - tot;
                    tot = cap;
                } else {
                    self->arr[i] = base;
                }
                set_technique_level_entry(self->owner->f428, i, tot);
            }
        }
    }
}
#pragma pop

void TItemProUnit::vfunc_44() {
    u8 *arg0 = (u8 *)this;
  s16 temp_r0;
  s32 temp_r3;
  s32 temp_r3_2;
  s32 temp_r3_3;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x18C));
  switch (temp_r0)
  {
    case 15:
      if ((this->m_174) != 0U)
    {
      temp_r3 = __nw__15TItemHeapObjectFUl(0x2C);
      if (temp_r3 != 0)
      {
        init_item_timer_event__13TUnk_804A0648Fv((int) temp_r3, this->m_174, (void *) get_id__13TItemProArmorFv((void *) arg0), (int) ((s32) (lbl_805DABFC * (this->m_18e))));
      }
    }
      return;
      return;
    case 16:
      if ((this->m_174) != 0U)
    {
      temp_r3_2 = __nw__15TItemHeapObjectFUl(0x2C);
      if (temp_r3_2 != 0)
      {
        construct_timer_event__13TUnk_804A0628Fv((int) temp_r3_2, this->m_174, (void *) get_id__13TItemProArmorFv((void *) arg0), (int) ((s32) (lbl_805DABFC * (this->m_18e))));
        return;
      }
    }
      break;
    case 17:
      if ((this->m_174) != 0U)
    {
      temp_r3_3 = __nw__15TItemHeapObjectFUl(0x2C);
      if (temp_r3_3 != 0)
      {
        init_timer_event__13TUnk_804A0608Fv((int) temp_r3_3, this->m_174, (void *) get_id__13TItemProArmorFv((void *) arg0), (int) ((s32) (lbl_805DABFC * (this->m_18e))));
      }
    }
      break;
  }
}

extern "C" {
void *__dt__12TItemProUnitFv(void *arg0, s16 arg1);
void run_task__5TItemFv();
void dispatch_state__5TItemFv();
void render_shadows__5TItemFv();
void vfunc_6__13TUnk_804B9870FPsl();
void apply_object_set_data__13TUnk_804B9870FPv();
void release_member_90__10TObjPlayerFv();
void vfunc_9__13TUnk_804B9870Fv();
void classify_actor_view_detail__13TUnk_804B9870Ffff();
void register_attack__5TItemFv();
void try_pick_up_item__5TItemFl();
void vfunc_17__5TItemFv();
void set_attach_slot__14TItemEquipBaseFSc();
void equip__14TItemEquipBaseFv();
void unequip__14TItemEquipBaseFv();
void add_equip_stats__14TItemEquipBaseFl();
void remove_equip_stats__14TItemEquipBaseFl();
void subtract_item_stat_bonus__14TItemEquipBaseFllPs();
void subtract_equip_stats__14TItemEquipBaseFlPUcPUc();
void vfunc_26__5TItemFv();
void vfunc_27__5TItemFv();
void vfunc_28__5TItemFv();
void update_equip__14TItemEquipBaseFv();
void vfunc_30__5TItemFv();
void vfunc_32__5TItemFv();
s8 TItemEquipBase__sub_8010A77C(u8 *arg0);
void vfunc_34__5TItemFv();
void vfunc_35__5TItemFv();
void vfunc_43__5TItemFv();
void vfunc_46__14TItemEquipBaseFv();
void release__14TItemEquipBaseFv();
void vfunc_50__14TItemEquipBaseFv();
}

void *__vt__12TItemProUnit[51] = {
    0,
    0,
    (void *)__dt__12TItemProUnitFv,
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
    (void *)vfunc_14__12TItemProUnitFv,
    (void *)TItem__sub_801005E0,
    (void *)vfunc_16__12TItemProUnitFv,
    (void *)vfunc_17__5TItemFv,
    (void *)TItemProUnit__vt16,
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
    (void *)ret_8010064C,
    (void *)TItem__sub_80100648,
    (void *)TItem__sub_801005E4,
    (void *)TItem__sub_801005D8,
    (void *)vfunc_43__5TItemFv,
    (void *)vfunc_44__12TItemProUnitFv,
    (void *)vfunc_45__12TItemProUnitFv,
    (void *)vfunc_46__14TItemEquipBaseFv,
    (void *)release__14TItemEquipBaseFv,
    (void *)vfunc_48__12TItemProUnitFv,
    (void *)vfunc_49__12TItemProUnitFv,
    (void *)vfunc_50__14TItemEquipBaseFv,
};

void TItemProUnit::apply_unit_effect_flags() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r4;
    temp_r4 = *(s16 *)((s8 *)arg0 + 0x18C);
    switch (temp_r4) {
    case 18:
        *(s16 *)((s8 *)arg0 + 0x190) = (s16) this->m_18e;
        return;
    case 20:
        ((TObjPlayer *)(arg0 + 0x178))->set_flags(8);
        return;
    case 21:
        ((TObjPlayer *)(arg0 + 0x178))->set_flags(2);
        return;
    case 19:
        *(f32 *)((s8 *)arg0 + 0x1B8) = (f32) (TItemProUnit__data_805DABF8 + ((f32) this->m_18e / lbl_805DAC00));
        return;
    case 22:
        ((TObjPlayer *)(arg0 + 0x178))->set_flags(0x80);
        return;
    case 23:
        ((TObjPlayer *)(arg0 + 0x178))->set_flags(0x200);
        return;
    case 24:
        ((TObjPlayer *)(arg0 + 0x178))->set_flags(0x800);
        return;
    case 25:
        ((TObjPlayer *)(arg0 + 0x178))->set_flags(0x2000);
        return;
    case 26:
        ((TObjPlayer *)(arg0 + 0x178))->set_flags(0x8000);
        return;
    case 27:
        ((TObjPlayer *)(arg0 + 0x178))->set_flags(0x20000);
    default:
        return;
    }
}

u8 *TItemProUnit__ct(u8 *arg0, s32 arg1, u8 *item) {
    s16 temp_r0;
    u8 *item_pmt_record;

    TItemEquipBase__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__12TItemProUnit;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2C40;
    ((TItemProUnit *)arg0)->vfunc_19((s8) (*(u8 *)((s8 *)item + 4) + 9));
    *(s16 *)((s8 *)arg0 + 0x190) = 0;
    *(f32 *)((s8 *)arg0 + 0x1B8) = (f32) TItemProUnit__data_805DABF8;
    item_pmt_record = (u8 *)lookup_item_pmt_record(item);
    if (item_pmt_record != NULL) {
        *(s16 *)((s8 *)arg0 + 0x18C) = (s16) *(s16 *)((s8 *)item_pmt_record + 8);
        ((TItemProUnit *)arg0)->m_18e = (s16) *(s16 *)((s8 *)item_pmt_record + 0xA);
        *(s16 *)((s8 *)arg0 + 0x1BE) = (s16) (*(s16 *)((s8 *)item_pmt_record + 0xC) * 2);
    } else {
        *(s16 *)((s8 *)arg0 + 0x18C) = 0;
        ((TItemProUnit *)arg0)->m_18e = 0;
        *(s16 *)((s8 *)arg0 + 0x1BE) = 0;
    }
    *(s16 *)((s8 *)arg0 + 0x1BC) = get_field6_bswap__9TItemDataFPv(item);
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x1BC);
    if ((temp_r0 <= -0xA) || (temp_r0 >= 0xA)) {
        *(s16 *)((s8 *)arg0 + 0x1BC) = 0;
    }
    memset(arg0 + 0x192, 0, 0x26);
    ((TItemProUnit *)arg0)->apply_unit_effect_flags();
    return arg0;
}

}
