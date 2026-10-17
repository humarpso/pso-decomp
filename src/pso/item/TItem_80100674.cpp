#include "types.h"
#include "pso/item/TItemProShield.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemMag.h"
#include "pso/item/TItemObject.h"
#include "pso/misc/TOSwitchItem.h"
#include "pso/player/TObjPlayer.h"

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
u8 *lookup_inventory_item__10TObjPlayerFv(s32);
u32 pickup_item__10TObjPlayerFv(int, int);
s32 get_player_by_client_id(void *);
void give_item_to_client(s32 arg0, s32 arg1);
s16 obj_getS16_32E(void *);
s16 obj_getS16_32C(void *);
int is_locally_controlled__10TObjPlayerFPv(void *);
u8 *find_item_by_id(s32);
void send_unequip_held_item__10TObjPlayerFUi(u32);
s32 consume_item_by_id(s32 arg0);
s32 get_id__13TItemProArmorFv(void *);
s32 init__9TItemDataFv(void *);
s32 TItem__sub_80115D68(u8 *, u32);
s32 TItemProArmor__sub_801178A8(u8 *, u32);
s32 TItem__sub_8011892C(u8 *, u32);
void replace_item_with_new_code(void *arg0, u32 arg1);
int TItem__sub_80100B8C(void* p);
int TItem__sub_80100A40(void*);
s32 check_flag_400__20TWindowSubStatusDispFv();

void TItem::vfunc_34() {  }
void TItem::vfunc_17() {  }
void TItem::vfunc_19() {  }
int TItem::vfunc_32() { return 0; }
void TItem::vfunc_28() {  }
void TItem::vfunc_27() {  }
void TItem::vfunc_26() {  }
void TItem::vfunc_25() {  }
void TItem::vfunc_24() {  }

typedef struct VBase_18_94668e VBase_18_94668e;
typedef struct VObj_18_94668e VObj_18_94668e;
#define PSO_VCALL_VObj_18_94668e_m21(_self, _arg0) (((VObj_18_94668e *)(_self))->m21((_arg0)))
#define PSO_VCALL_VObj_18_94668e_m20(_self, _arg0) (((VObj_18_94668e *)(_self))->m20((_arg0)))
#define PSO_VCALL_VObj_18_94668e_m71(_self) (((VObj_18_94668e *)(_self))->m71())
void TItem::refresh_owner_stats() {
  s16 temp_r31;
  u8 *temp_r3;
  u8 *temp_r3_2;
  temp_r3 = (u8 *) (*((u8 **) (((s8 *) ((u8 *)this)) + 0xF0)));
  if (temp_r3 != 0)
  {
    s16 temp_r30;
    temp_r31 = obj_getS16_32C(temp_r3);
    temp_r30 = obj_getS16_32E(*((u8 **) (((s8 *) ((u8 *)this)) + 0xF0)));
    PSO_VCALL_VObj_18_94668e_m21(((u8 *)this), 0);
    PSO_VCALL_VObj_18_94668e_m20(((u8 *)this), 0);
    temp_r3_2 = (u8 *) (*((u8 **) (((s8 *) ((u8 *)this)) + 0xF0)));
    PSO_VCALL_VObj_18_94668e_m71(temp_r3_2);
    ((TObjPlayer *)(*((u8 **) (((s8 *) ((u8 *)this)) + 0xF0))))->set_hp_clamped(temp_r31);
    ((TObjPlayer *)(*((u8 **) (((s8 *) ((u8 *)this)) + 0xF0))))->set_facing(temp_r30);
    ((TUnk_804806E8 *)(*((u8 **) (((s8 *) ((u8 *)this)) + 0xF0))))->clamp_value();
    ((TObjPlayer *)(*((u8 **) (((s8 *) ((u8 *)this)) + 0xF0))))->clamp_field_32E();
  }
}

void TItem::vfunc_23() {  }
void TItem::vfunc_22() {  }
void TItem::update_pickup_flag(s32 arg0) {
    if (check_flag_400__20TWindowSubStatusDispFv() != 0) {
        ((TItemObject *)arg0)->set_flag_1024();
        return;
    }
    ((TItem *)arg0)->use_combination_recipe();
}
void TItem::vfunc_30() {  }
s32 TItem::vfunc_21(u8 *, s32, s32, s32) {  }
void TItem::vfunc_20() {  }

void give_item_to_client(s32 arg0, s32 arg1) {
    s32 player;
    u8 *temp_r3_2;
    player = get_player_by_client_id((void *) (u16)arg0);
    if (player != 0) {
        temp_r3_2 = lookup_inventory_item__10TObjPlayerFv(arg1);
        if ((temp_r3_2 != NULL) && (pickup_item__10TObjPlayerFv((int) (player), (int) (temp_r3_2)) == 0U)) {
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
  u8 *item;
  item = (u8 *) find_item_by_id(arg0);
  if (item == 0)
  {
    return 0;
  }
  temp_r3_2 = get_player_by_client_id((void *)((u32) ((u16)get_id__13TItemProArmorFv(item))));
  if (temp_r3_2 == 0)
  {
    return 0;
  }
  temp_r31 = PSO_VCALL_VObj_18_8a175d_m34(item);
  temp_r30 = ((TObjPlayer *)item)->get_field_d8();
  ((TObjPlayer *)temp_r3_2)->dispatch_action(arg0, 1);
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
    temp_r3 = ((TItem *)arg1)->get_field_ec();
    switch ((s32) temp_r3)
    {
      case 0:
        ((TObjPlayer *)(&sp8))->copy_field6_from((void*)arg1);
        break;
      case 1:
        temp_r3_2 = ((TItem *)arg1)->get_field_ed();
        switch ((s32) temp_r3_2)
      {
        case 1:
          TItemProArmor__sub_801178A8((u8 *) (&sp8), arg1);
          break;
        case 2:
          TItemProShield::set_params((s32)((u8 *) (&sp8)), (void *)arg1);
          break;
        case 3:
          TItem__sub_8011892C((u8 *) (&sp8), arg1);
          break;
      }
        break;
      case 2:
        ((TItemMag *)(&sp8))->call_preserve_flag(arg1);
        break;
      case 3:
        TItem__sub_80115D68((u8 *) (&sp8), arg1);
        break;
    }
    temp_r31 = get_id__13TItemProArmorFv((void *)(arg1));
    sp8.value = ((TObjPlayer *)arg1)->get_field_d8();
    if (consume_item_by_id(((TObjPlayer *)arg1)->get_field_d8()) != 0)
    {
      give_item_to_client(temp_r31, (s32)(&sp8));
    }
  }
}

int TItem__sub_80100B8C(void* p) { return TItem__sub_80100A40((char*)p + 0x38); }

}
