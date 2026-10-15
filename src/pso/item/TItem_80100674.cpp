#include "types.h"

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
    virtual s32 m27();
};

struct VBase_18_94668e
{
  char pad[0x18];
};

struct VObj_18_94668e : VBase_18_94668e {
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
    virtual s32 m20(s32);
    virtual s32 m21(s32);
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
    virtual s32 m71();
};

struct VBase_18_8a175d
{
  char pad[0x18];
};

struct VObj_18_8a175d : VBase_18_8a175d {
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
    virtual s32 m34();
};

struct TItemData
{
  u8 kind;
  u8 sub1;
  u8 sub2;
  u8 pad[9];
  s32 value;
  s32 pad2[3];
};

extern "C" {
u8 *lookup_inventory_item__10TObjPlayerFPv(s32);
u32 pickup_item__10TObjPlayerFv(int, int);
s32 get_player_by_client_id(void *);
void give_item_to_client(s32 arg0, s32 arg1);
s16 clamp_field_32E__10TObjPlayerFPv(void *);
s16 clamp_value__10TObjPlayerFPv(void *);
void set_hp_clamped__10TObjPlayerFPvs(void *, s16);
s16 obj_getS16_32E(void *);
s16 obj_getS16_32C(void *);
void set_facing__10TObjPlayerFPvs(void *, s16);
void refresh_owner_stats__5TItemFPv(u8 *arg0);
int is_locally_controlled__10TObjPlayerFPv(void *);
s32 get_field_d8__10TObjPlayerFPv(void *);
u8 *find_item_by_id(s32);
void dispatch_action__10TObjPlayerFPvii(void *, s32, s32);
void send_unequip_held_item__10TObjPlayerFUi(u32);
s32 get_player_by_client_id(void *);
u8 get_field_ed__10TObjPlayerFPv(u32);
s32 get_field_d8__10TObjPlayerFPv(void *);
void give_item_to_client(s32 arg0, s32 arg1);
s32 consume_item_by_id(s32 arg0);
s32 get_id__13TItemProArmorFPv(void *);
u8 get_field_ec__12TOSwitchItemFPv(u32);
s32 init__9TItemDataFv(void *);
s32 call_preserve_flag__8TItemMagFPvi(u8 *, u32);
s32 TItem__sub_80115D68(u8 *, u32);
s32 TItemProArmor__sub_801178A8(u8 *, u32);
s32 set_params__14TItemProShieldFiPv(u8 *, u32);
s32 TItem__sub_8011892C(u8 *, u32);
s32 copy_field6_from__10TObjPlayerFPvPv(u8 *, u32);
void replace_item_with_new_code(void *arg0, u32 arg1);
}

extern "C" {

void TItem__sub_80100674(void);
void TItem__sub_80100678(void);
void TItem__sub_8010067C(void);
int TItem__sub_80100680(void);
void TItem__sub_80100688(void);
void TItem__sub_8010068C(void);
void TItem__sub_80100690(void);
void TItem__sub_80100694(void);
void TItem__sub_80100698(void);
void TItem__sub_80100758(void);
void TItem__sub_8010075C(void);
void TItem__sub_801007A8(void);
void TItem__sub_801007AC(void);
void TItem__sub_801007B0(void);
int TItem__sub_80100B8C(void* p);
void update_pickup_flag__5TItemFi(s32 arg0);
s32 use_combination_recipe__5TItemFPv(s32);
int TItem__sub_80100A40(void*);
s32 check_flag_400__20TWindowSubStatusDispFv();
s32 set_flag_1024__11TItemObjectFPv(s32);

void TItem__sub_80100674(void) {  }
void TItem__sub_80100678(void) {  }
void TItem__sub_8010067C(void) {  }
int TItem__sub_80100680(void) { return 0; }
void TItem__sub_80100688(void) {  }
void TItem__sub_8010068C(void) {  }
void TItem__sub_80100690(void) {  }
void TItem__sub_80100694(void) {  }
void TItem__sub_80100698(void) {  }

typedef struct VBase_18_94668e VBase_18_94668e;
typedef struct VObj_18_94668e VObj_18_94668e;
#define PSO_VCALL_VObj_18_94668e_m21(_self, _arg0) (((VObj_18_94668e *)(_self))->m21((_arg0)))
#define PSO_VCALL_VObj_18_94668e_m20(_self, _arg0) (((VObj_18_94668e *)(_self))->m20((_arg0)))
#define PSO_VCALL_VObj_18_94668e_m71(_self) (((VObj_18_94668e *)(_self))->m71())
void refresh_owner_stats__5TItemFPv(u8 *arg0) {
  s16 temp_r31;
  u8 *temp_r3;
  u8 *temp_r3_2;
  temp_r3 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0xF0)));
  if (temp_r3 != 0)
  {
    s16 temp_r30;
    temp_r31 = obj_getS16_32C(temp_r3);
    temp_r30 = obj_getS16_32E(*((u8 **) (((s8 *) arg0) + 0xF0)));
    PSO_VCALL_VObj_18_94668e_m21(arg0, 0);
    PSO_VCALL_VObj_18_94668e_m20(arg0, 0);
    temp_r3_2 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0xF0)));
    PSO_VCALL_VObj_18_94668e_m71(temp_r3_2);
    set_hp_clamped__10TObjPlayerFPvs(*((u8 **) (((s8 *) arg0) + 0xF0)), temp_r31);
    set_facing__10TObjPlayerFPvs(*((u8 **) (((s8 *) arg0) + 0xF0)), temp_r30);
    clamp_value__10TObjPlayerFPv(*((u8 **) (((s8 *) arg0) + 0xF0)));
    clamp_field_32E__10TObjPlayerFPv(*((u8 **) (((s8 *) arg0) + 0xF0)));
  }
}

void TItem__sub_80100758(void) {  }
void TItem__sub_8010075C(void) {  }
void update_pickup_flag__5TItemFi(s32 arg0) {
    if (check_flag_400__20TWindowSubStatusDispFv() != 0) {
        set_flag_1024__11TItemObjectFPv(arg0);
        return;
    }
    use_combination_recipe__5TItemFPv(arg0);
}
void TItem__sub_801007A8(void) {  }
void TItem__sub_801007AC(void) {  }
void TItem__sub_801007B0(void) {  }

void give_item_to_client(s32 arg0, s32 arg1) {
    s32 temp_r3;
    u8 *temp_r3_2;
    temp_r3 = get_player_by_client_id((void *) (u16)arg0);
    if (temp_r3 != 0) {
        temp_r3_2 = lookup_inventory_item__10TObjPlayerFPv(arg1);
        if ((temp_r3_2 != NULL) && (pickup_item__10TObjPlayerFv((int) (temp_r3), (int) (temp_r3_2)) == 0U)) {
            ((VObj_18 *)(temp_r3_2))->m27();
        }
    }
}

typedef struct VBase_18_8a175d VBase_18_8a175d;
typedef struct VObj_18_8a175d VObj_18_8a175d;
#define PSO_VCALL_VObj_18_8a175d_m34(_self) (((VObj_18_8a175d *)(_self))->m34())
s32 consume_item_by_id(s32 arg0) {
  s32 temp_r30;
  s32 temp_r31;
  s32 temp_r3_2;
  u8 *temp_r3;
  temp_r3 = (u8 *) find_item_by_id(arg0);
  if (temp_r3 == 0)
  {
    return 0;
  }
  temp_r3_2 = get_player_by_client_id((void *)((u32) ((u16)get_id__13TItemProArmorFPv(temp_r3))));
  if (temp_r3_2 == 0)
  {
    return 0;
  }
  temp_r31 = PSO_VCALL_VObj_18_8a175d_m34(temp_r3);
  temp_r30 = get_field_d8__10TObjPlayerFPv(temp_r3);
  dispatch_action__10TObjPlayerFPvii((void *) temp_r3_2, arg0, 1);
  if (is_locally_controlled__10TObjPlayerFPv((void *) temp_r3_2) != 0)
  {
    send_unequip_held_item__10TObjPlayerFUi((u32) temp_r3_2);
  }
  if ((find_item_by_id(temp_r30) != 0) && (temp_r31 < 2))
  {
    return 0;
  }
  return 1;
}

typedef struct TItemData TItemData;
void replace_item_with_new_code(void *arg0, u32 arg1) {
  struct TItemData sp8;
  s32 temp_r31;
  u8 temp_r3;
  u8 temp_r3_2;
  u8 tmp0;
  u8 tmp1;
  u8 tmp2;
  init__9TItemDataFv(&sp8);
  tmp2 = *((u8 *) (((s8 *) arg0) + 0));
  tmp0 = tmp2;
  tmp1 = *((u8 *) (((s8 *) arg0) + 1));
  tmp2 = *((u8 *) (((s8 *) arg0) + 2));
  sp8.kind = tmp0;
  sp8.sub1 = tmp1;
  sp8.sub2 = tmp2;
  if (arg1 != 0U)
  {
    temp_r3 = get_field_ec__12TOSwitchItemFPv(arg1);
    switch ((s32) temp_r3)
    {
      case 0:
        copy_field6_from__10TObjPlayerFPvPv((u8 *) (&sp8), arg1);
        break;
      case 1:
        temp_r3_2 = get_field_ed__10TObjPlayerFPv(arg1);
        switch ((s32) temp_r3_2)
      {
        case 1:
          TItemProArmor__sub_801178A8((u8 *) (&sp8), arg1);
          break;
        case 2:
          set_params__14TItemProShieldFiPv((u8 *) (&sp8), arg1);
          break;
        case 3:
          TItem__sub_8011892C((u8 *) (&sp8), arg1);
          break;
      }
        break;
      case 2:
        call_preserve_flag__8TItemMagFPvi((u8 *) (&sp8), arg1);
        break;
      case 3:
        TItem__sub_80115D68((u8 *) (&sp8), arg1);
        break;
    }
    temp_r31 = get_id__13TItemProArmorFPv((void *)(arg1));
    sp8.value = get_field_d8__10TObjPlayerFPv((void *)(arg1));
    if (consume_item_by_id(get_field_d8__10TObjPlayerFPv((void *)(arg1))) != 0)
    {
      give_item_to_client(temp_r31, (s32)(&sp8));
    }
  }
}

int TItem__sub_80100B8C(void* p) { return TItem__sub_80100A40((char*)p + 0x38); }

}
