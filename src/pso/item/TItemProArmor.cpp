#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8011620C_80115D6C { char pad[0x18]; };

struct VObj_8011620C_80115D6C : Base_8011620C_80115D6C {
    virtual void m0();
    virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8();
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m35();
    virtual s32 m36();
};

struct Base_8011626C_80115D6C { char pad[0x18]; };

struct VObj_8011626C_80115D6C : Base_8011626C_80115D6C {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42();
};

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual u8 m34();
};

struct Base_801161A4_80115D6C { char pad[0x18]; };

struct VObj_801161A4_80115D6C : Base_801161A4_80115D6C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual int m34();
};

struct VBase_18_1a8f71 { char pad[0x18]; };

struct VObj_18_1a8f71 : VBase_18_1a8f71 {
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
    virtual M2C_UNK m17(M2C_UNK);
};

struct RecoveredGlobal_80117B98___vt__13TItemProArmor {
    M2C_UNK value;
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
void TItemProArmor__sub_801178B4(u8 *arg0);
void TItemProArmor__sub_801178D4(u8 *arg0);
void * TItemProArmor__sub_80117650(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TItemProArmor__sub_8011768C(u8 *arg0);
void * init_item_object__13TItemProArmorFPv(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TItemProArmor__sub_801177C4(u8 *arg0);
u8 * TItemEquipBase__ct(void *);
s16 get_bswap16_field8__9TItemDataFPv(void *);
s16 getS16_06__9TItemDataFPv(void *);
s32 lookup_item_pmt_record(void *);
extern M2C_UNK __vt__13TItemProArmor[];
extern s32 lbl_805D2C30;
u8 *TItemProArmor__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
s32 lookup_item_pmt_record(void *);
u8 *TItemProArmor__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
s32 TItemProArmorParticle__ct(int, int, void *);
extern s32 tl_05;
s32 TItemProArmor__sub_80117C60(s32 arg0);
void set_flags__10TObjPlayerFPvUi(void *, u32);
u8 get_slot_count__14TItemProShieldFPv(void *);
void TItemProArmor__sub_8011781C(TItemProArmor_8011781C *self);
s32 get_id__13TItemProArmorFPv(void *);
void *fn_80107DA4(void *, void *, s32);
u8 get_slot_count__14TItemProShieldFPv(void *);
void *init_vtable__13TItemProArmorFPv(void *arg0);
void *ct__13TItemProArmorFPv(void *arg0);
void *construct_timer_event__10TObjPlayerFPv(void *, void *, s32, s32);
void *init_item_timer_event__10TObjPlayerFPv(void *, void *, s32, s32);
void *__nw__7TObjectFUl(int);
void *alloc__13TItemProArmorFi(int);
void TItemProArmor__vt42(Armor_80117954 *self);
}

extern "C" {

void *TItemProArmor__sub_80117730(void *arg0, s16 arg1);
void TItemProArmor__sub_801178A8(void* p, void* q);
u8 TItemProArmor__sub_801178CC(void* p);
void TItemProArmor__sub_80117D00(void);
void TItemProArmor__sub_80117D04(void);
void TItemProArmor__vt14(void *arg0);
void *__dt__13TItemProArmorFv(void *arg0, s16 arg1);
void apply_to_player__13TItemProArmorFPv(void *arg0);
void *ct__13TItemProArmorFPv(void *arg0);
void *init_vtable__13TItemProArmorFPv(void *arg0);
void update_armor__13TItemProArmorFPv(void* p);
void write_item_data__13TItemProArmorFPvPv(void *arg0, void *arg1);
s32 TItemData__sub_8010CE1C(void *, u8);
s32 TItemData__sub_8010CE70(void *, u8);
void TItemObject__ct(void *);
s32 TItemObject__sub_80115D84(void *);
void TItemTimerEvent__ct(void *);
M2C_UNK refresh_owner_stats__5TItemFPv();
int TObjPlayer__sub_80108164(void);
M2C_UNK add_weapon_grind(s32, s32);
void __dt__11TItemObjectFv(void *, int);
void __dt__14TItemEquipBaseFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
int get_flag_40__8TItemMagFPv(void*);
s32 get_item_field_6__10TObjPlayerFPv(s32);
int obj_getField1c(void*);

extern M2C_UNK lbl_8049FED0[];

void *TItemProArmor__sub_80117650(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FED0;
    return arg0;
}

u8 *TItemProArmor__sub_8011768C(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemProArmor__sub_80117650((void *)((void *)(temp_r3)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void apply_to_player__13TItemProArmorFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_item_field_6__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    if (temp_r3 != 0) {
        add_weapon_grind(temp_r3, TItemObject__sub_80115D84(arg0));
    }
}

extern M2C_UNK lbl_8049FF88[];

void *TItemProArmor__sub_80117730(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FF88;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049FF88[];

void *init_item_object__13TItemProArmorFPv(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FF88;
    return arg0;
}

u8 *TItemProArmor__sub_801177C4(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_item_object__13TItemProArmorFPv((void *)((void *)(temp_r3)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void TItemProArmor__sub_8011781C(TItemProArmor_8011781C *self) {
    switch (get_slot_count__14TItemProShieldFPv(self)) {
    case 0x23:
        set_flags__10TObjPlayerFPvUi(self->flags178, 2);
        break;
    case 0x33:
        set_flags__10TObjPlayerFPvUi(self->flags178, 0x200);
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

void TItemProArmor__sub_801178B4(u8 *arg0) {
    u8 temp_r4;
    temp_r4 = M2C_FIELD(arg0, u8 *, 0x192);
    if (temp_r4 < 4U) {
        M2C_FIELD(arg0, u8 *, 0x192) = (u8) (temp_r4 + 1);
    }
}

u8 TItemProArmor__sub_801178CC(void* p) { return *(u8*)((char*)p + 0x192); }

void TItemProArmor__sub_801178D4(u8 *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x195) < (u8) M2C_FIELD(arg0, u8 *, 0x193)) {
        M2C_FIELD(arg0, u8 *, 0x193) = 0U;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0x196) < (u8) M2C_FIELD(arg0, u8 *, 0x194)) {
        M2C_FIELD(arg0, u8 *, 0x194) = 0U;
    }
}

void write_item_data__13TItemProArmorFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x192);
    TItemData__sub_8010CE70(arg1, M2C_FIELD(arg0, u8 *, 0x193));
    TItemData__sub_8010CE1C(arg1, M2C_FIELD(arg0, u8 *, 0x194));
}

typedef void *(*Ctor4_80117954)(void *, void *, s32, s32);
void TItemProArmor__vt42(Armor_80117954 *self) {
    void *o;
    if (self->owner == NULL) {
        return;
    }
    switch (get_slot_count__14TItemProShieldFPv(self)) {
    case 27:
        o = alloc__13TItemProArmorFi(0x2C);
        if (o != NULL) {
            init_item_timer_event__10TObjPlayerFPv(o, self->owner, get_id__13TItemProArmorFPv(self), 150);
        }
        break;
    case 28:
        o = alloc__13TItemProArmorFi(0x2C);
        if (o != NULL) {
            construct_timer_event__10TObjPlayerFPv(o, self->owner, get_id__13TItemProArmorFPv(self), 300);
        }
        break;
    case 32:
        o = alloc__13TItemProArmorFi(0x2C);
        if (o != NULL) {
            ((Ctor4_80117954)ct__13TItemProArmorFPv)(o, self->owner, get_id__13TItemProArmorFPv(self), 300);
        }
        break;
    case 33:
        o = alloc__13TItemProArmorFi(0x2C);
        if (o != NULL) {
            ((Ctor4_80117954)ct__13TItemProArmorFPv)(o, self->owner, get_id__13TItemProArmorFPv(self), 240);
        }
        break;
    case 34:
        o = alloc__13TItemProArmorFi(0x2C);
        if (o != NULL) {
            ((Ctor4_80117954)ct__13TItemProArmorFPv)(o, self->owner, get_id__13TItemProArmorFPv(self), 210);
        }
        break;
    case 43:
        o = alloc__13TItemProArmorFi(0x2C);
        if (o != NULL) {
            ((Ctor4_80117954)ct__13TItemProArmorFPv)(o, self->owner, get_id__13TItemProArmorFPv(self), 150);
        }
        break;
    case 49:
        o = alloc__13TItemProArmorFi(0x2C);
        if (o != NULL) {
            ((Ctor4_80117954)init_vtable__13TItemProArmorFPv)(o, self->owner, get_id__13TItemProArmorFPv(self), 150);
        }
        break;
    case 45:
        o = __nw__7TObjectFUl(0x24);
        if (o != NULL) {
            fn_80107DA4(o, self->owner, get_id__13TItemProArmorFPv(self));
        }
        break;
    }
}

void TItemProArmor__vt14(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x190) & 1) {
        refresh_owner_stats__5TItemFPv();
    }
}

void update_armor__13TItemProArmorFPv(void* p) { if (get_flag_40__8TItemMagFPv(p) == 0) { obj_getField1c(*(void**)((char*)p + 0xf0)); TObjPlayer__sub_80108164(); } }

typedef char RecoveredGlobal_80117B98___vt__13TItemProArmor_size[sizeof(RecoveredGlobal_80117B98___vt__13TItemProArmor) == 0xCC ? 1 : -1];
u8 *TItemProArmor__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    TItemEquipBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80117B98___vt__13TItemProArmor *)&__vt__13TItemProArmor).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C30;
    ((VObj_18_1a8f71 *)(arg0))->m17(2);
    M2C_FIELD(arg0, s16 *, 0x190) = 0;
    M2C_FIELD(arg0, u8 *, 0x192) = (u8) M2C_FIELD(arg2, u8 *, 5);
    M2C_FIELD(arg0, s8 *, 0x193) = getS16_06__9TItemDataFPv(arg2);
    M2C_FIELD(arg0, s8 *, 0x194) = get_bswap16_field8__9TItemDataFPv(arg2);
    M2C_FIELD(arg0, s32 *, 0x18C) = lookup_item_pmt_record(arg2);
    M2C_FIELD(arg0, u8 *, 0x195) = (u8) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x18C), u8 *, 0x16);
    M2C_FIELD(arg0, u8 *, 0x196) = (u8) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x18C), u8 *, 0x17);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x192) > 4U) {
        M2C_FIELD(arg0, u8 *, 0x192) = 4U;
    }
    TItemProArmor__sub_8011781C((TItemProArmor_8011781C *)((void *)((void *) (arg0))));
    return arg0;
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
#pragma optimize_for_size off
s32 TItemProArmor__sub_80117C60(s32 arg0) {
  s32 temp_r3;
  s32 temp_r3_2;
  s32 var_r0;
  s32 var_r0_2;
  u8 temp_r0;
  if (arg0 != 0)
  {
    temp_r0 = *((u8 *) (((s8 *) ((u8 *)lookup_item_pmt_record((void *)(arg0)))) + 0x1A));
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
        temp_r3 = ((s32)alloc_from_obj_heap__10TObjPlayerFPv((M2C_UNK)((int) 0x198)));
        var_r0_2 = temp_r3;
        if (var_r0_2 != 0)
        {
          var_r0_2 = ((s32)TItemProArmor__ct((u8 *)((int) temp_r3), (M2C_UNK)((int) tl_05), (u8 *)((void *) arg0)));
        }
        return var_r0_2;
      }
      goto block_11;
    }
    temp_r3_2 = ((s32)alloc_from_obj_heap__10TObjPlayerFPv((M2C_UNK)((int) 0x1A4)));
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

extern M2C_UNK __vt__13TItemProArmor[];

void *__dt__13TItemProArmorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TItemProArmor;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0668[];

void *init_vtable__13TItemProArmorFPv(void *arg0) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0668;
    return arg0;
}

extern M2C_UNK lbl_804A0688[];

void *ct__13TItemProArmorFPv(void *arg0) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0688;
    return arg0;
}

}
