#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Raw_8010D614 { u8 b[4]; u16 s[4]; u32 id; u8 c[4]; };

struct Mag_8010D614 { u16 a0; u16 a2; u16 s[4]; u8 c; u8 d; u8 e; };

struct Pair_8010E344 { u8 a; u8 b; };

struct TItemData_8010E344 { u8 data[6]; Pair_8010E344 stats[3]; s32 id; s32 f10; };

struct Mag_8010D510 { s16 f0; s16 f2; s16 stat[4]; u8 b0c; u8 b0d; u8 b0e; };

struct Item_8010D510 {
    u8 b0; u8 b1; u8 level; u8 b3;
    s16 stat[4];
    u32 word;
    u8 b16; u8 b17; u8 b18; u8 b19;
};

struct Parm_8010EBD8 { s32 name; u8 pad04[0xC]; u32 flags; };

extern "C" {
int bswap_16__FPUs(void*);
void TItemData__sub_8010CDC8(u8 *arg0, s16 arg1);
int bswap_16__FPUs(void*);
void TItemData__sub_8010CE1C(u8 *arg0, s16 arg1);
int bswap_16__FPUs(void*);
void TItemData__sub_8010CE70(u8 *arg0, s16 arg1);
int test_flag3__9TItemDataFPv(void *);
int get_item_field_2__9TItemDataFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
extern f32 TItemData__data_805DAB70;
extern const f32 lbl_805DAB74;
extern f32 TItemData__data_805DAB78;
f32 TItemData__sub_8010DB9C(u8 *arg0, u8 *arg1);
int get_item_field_6__10TObjPlayerFPv(void *);
u8 get_field_ed__10TObjPlayerFPv(void *);
int get_item_field_2__9TItemDataFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
extern f32 TItemData__data_805DAB70;
extern const f32 lbl_805DAB74;
extern f32 TItemData__data_805DAB78;
f32 TItemData__sub_8010D6CC(u8 *arg0, u8 *arg1);
void bswap_fields__9TItemDataFPv(void* p);
void TItemData__sub_8010D614(Raw_8010D614 *src, Mag_8010D614 *dst);
void init__9TItemDataFv(TItemData_8010E344 *self);
extern f32 TItemData__data_805DAB70;
f32 TItemData__sub_8010DB9C(u8 *arg0, u8 *arg1);
f32 TItemData__sub_8010D8AC(u8 *arg0, u8 *arg1);
f32 TItemData__sub_8010D6CC(u8 *arg0, u8 *arg1);
f32 TItemData__sub_8010DD6C(void *self, s32 player);
void *get_item_pmt_record__10TObjPlayerFii(int type, int id);
void *TObjPlayer__sub_8011CD48(int type, int id);
void *get_pmt_record_by_index__10TObjPlayerFi(int i);
void *get_pmt_record__10TObjPlayerFi(int i);
void *get_pmt_record_by_type_id__10TObjPlayerFii(int type, int id);
void *TItemData__sub_8010EA38(u8 *item);
void copy_item_data__6TLobbyFPvPv(void *, void *);
void bswap_fields__9TItemDataFPv(void* p);
u8 TItemMagSub__sub_8011455C(const void *);
void TItemData__sub_8010D510(Item_8010D510 *item, const Mag_8010D510 *mag);
void *TItemData__sub_8010EA38(u8 *item);
s32 TObjPlayer__sub_8011C914(s32);
s32 TItemData__sub_8010EBD8(u8 *item);
}

extern "C" {

void TItemData__sub_8010EC6C(void *arg0);
void apply_equip_effects__9TItemDataFPviiiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void bswap_fields__9TItemDataFPv(void* p);
s32 calc_buy_price__9TItemDataFPv(void *arg0);
int calc_display_grade__9TItemDataFPv(void *arg0);
s32 check_item_flags__9TItemDataFPv(void *arg0);
s16 getS16_06__9TItemDataFPv(void *arg0);
s16 get_bswap16_field8__9TItemDataFPv(void *arg0);
s16 get_field6_bswap__9TItemDataFPv(void *arg0);
s16 get_technique_level__9TItemDataFPv(void *arg0);
void lookup_item_def__9TItemDataFPv(void *arg0);
M2C_UNK TItemData__sub_8010B908(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010BD24(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010BEC4(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010C0A4(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010C1E0(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010C320(void *, s32, s32, s32, s32, s32);
s32 TItemData__sub_8010C52C();
M2C_UNK TItemData__sub_8010C5DC(void *, s32);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
s32 TItemData__sub_8010DF68();
s32 TItemData__sub_8010EEC8(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
M2C_UNK apply_bonuses(void *, s32, s32, s32, s32, s32);
int bswap_16__FPUs(void*);
s32 fn_80101A48(u8, u8);
s32 get_unit_attribute_index__10TObjPlayerFUc(u8);
int register_drop__9TItemDataFPv(void* p);
int register_item_drop__10TObjPlayerFPv(void*);

void lookup_item_def__9TItemDataFPv(void *arg0) {
    fn_80101A48(M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(arg0, u8 *, 1));
}
s16 get_field6_bswap__9TItemDataFPv(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 6);
    bswap_16__FPUs((void*)(&sp8));
    return sp8;
}

void TItemData__sub_8010CDC8(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 6) = arg1;
    bswap_16__FPUs((void*)((void *) (arg0 + 6)));
}

s16 get_bswap16_field8__9TItemDataFPv(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 8);
    bswap_16__FPUs((void*)(&sp8));
    return sp8;
}

void TItemData__sub_8010CE1C(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = arg1;
    bswap_16__FPUs((void*)((void *) (arg0 + 8)));
}

s16 getS16_06__9TItemDataFPv(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 6);
    bswap_16__FPUs((void*)(&sp8));
    return sp8;
}

void TItemData__sub_8010CE70(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 6) = arg1;
    bswap_16__FPUs((void*)((void *) (arg0 + 6)));
}

s16 get_technique_level__9TItemDataFPv(void *arg0) {
    void *temp_r3;

    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 3) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 2)) {
        temp_r3 = TTecCtrl__sub_8022DBC4(M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(arg0, u8 *, 2), 0xFFFF);
        if (temp_r3 != NULL) {
            return M2C_FIELD(temp_r3, s16 *, 0x14);
        }
    }
    return 0;
}

void TItemData__sub_8010D510(Item_8010D510 *item, const Mag_8010D510 *mag) {
    Item_8010D510 copy;
    copy.b0 = item->b0;
    copy.b1 = item->b1;
    copy.level = TItemMagSub__sub_8011455C(mag);
    copy.b3 = mag->b0d;
    copy.stat[0] = mag->stat[0] & 0x7FFE;
    copy.stat[1] = mag->stat[1] & 0x7FFE;
    copy.stat[2] = mag->stat[2] & 0x7FFE;
    copy.stat[3] = mag->stat[3] & 0x7FFE;
    copy.word = item->word;
    copy.b16 = mag->f2;
    copy.b17 = mag->f0;
    copy.b18 = mag->b0c;
    copy.b19 = mag->b0e;
    bswap_fields__9TItemDataFPv((void*)(&copy));
    copy_item_data__6TLobbyFPvPv(item, &copy);
}

void bswap_fields__9TItemDataFPv(void* p) { bswap_16__FPUs((void*)((char*)p + 0x4)); bswap_16__FPUs((void*)((char*)p + 0x6)); bswap_16__FPUs((void*)((char*)p + 0x8)); bswap_16__FPUs((void*)((char*)p + 0xa)); }

extern s32 lbl_805D53A0;

void TItemData__sub_8010D614(Raw_8010D614 *src, Mag_8010D614 *dst) {
    if (dst != 0) {
        Raw_8010D614 tmp = *src;
        bswap_fields__9TItemDataFPv((void*)(&tmp));
        dst->d = tmp.b[3];
        dst->s[0] = tmp.s[0] & 0x7ffe;
        dst->s[1] = tmp.s[1] & 0x7ffe;
        dst->s[2] = tmp.s[2] & 0x7ffe;
        dst->s[3] = tmp.s[3] & 0x7ffe;
        dst->a2 = tmp.c[0];
        dst->a0 = tmp.c[1];
        dst->c = tmp.c[2];
        dst->e = tmp.c[3];
    }
}

f32 TItemData__sub_8010D6CC(u8 *arg0, u8 *arg1) {
  s32 temp_r31;
  f32 var_f31;
  s32 temp_r30;
  s32 temp_r30_2;
  s32 temp_r30_3;
  s32 temp_r31_2;
  s32 temp_r31_3;
  u8 temp_r0;
  u8 *temp_r3;
  temp_r0 = *((u8 *) (((s8 *) arg0) + 2));
  var_f31 = TItemData__data_805DAB70;
  switch ((s32) temp_r0)
  {
    case 26:
      temp_r3 = (u8 *) get_item_field_6__10TObjPlayerFPv(arg1);
      if ((temp_r3 != 0) && (get_field_ed__10TObjPlayerFPv(temp_r3) == 0x1A))
    {
      var_f31 = lbl_805DAB74;
    }
      break;
    case 38:
      temp_r31 = get_item_field_6__10TObjPlayerFPv(arg1);
      temp_r30 = get_item_field_2__9TItemDataFPv(arg1);
      if (((((((u32) temp_r31) != 0U) && (((u32) temp_r30) != 0U)) && (get_field_ed__10TObjPlayerFPv((void *) temp_r31) == 1)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r31) == 5)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r30) == 0x28))
    {
      var_f31 = TItemData__data_805DAB78;
    }
      break;
    case 36:
      temp_r30_2 = get_item_field_6__10TObjPlayerFPv(arg1);
      temp_r31_2 = get_item_field_2__9TItemDataFPv(arg1);
      if (((((((u32) temp_r30_2) != 0U) && (((u32) temp_r31_2) != 0U)) && (get_field_ed__10TObjPlayerFPv((void *) temp_r30_2) == 2)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r30_2) == 5)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r31_2) == 0x26))
    {
      var_f31 = TItemData__data_805DAB78;
    }
      break;
    case 37:
      temp_r30_3 = get_item_field_6__10TObjPlayerFPv(arg1);
      temp_r31_3 = get_item_field_2__9TItemDataFPv(arg1);
      if (((((((u32) temp_r30_3) != 0U) && (((u32) temp_r31_3) != 0U)) && (get_field_ed__10TObjPlayerFPv((void *) temp_r30_3) == 6)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r30_3) == 6)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r31_3) == 0x27))
    {
      var_f31 = TItemData__data_805DAB78;
    }
      break;
  }
  return var_f31;
}

f32 TItemData__sub_8010DB9C(u8 *arg0, u8 *arg1) {
  f32 var_f31;
  s32 temp_r31;
  s32 temp_r30;
  s32 temp_r30_2;
  s32 temp_r30_3;
  s32 temp_r31_2;
  s32 temp_r31_3;
  u8 temp_r0;
  u8 *temp_r3;
  temp_r0 = *((u8 *) (((s8 *) arg0) + 1));
  var_f31 = TItemData__data_805DAB70;
  switch ((s32) temp_r0)
  {
    case 1:
      if (((u8) (*((u8 *) (((s8 *) arg0) + 2)))) == 5)
    {
      temp_r31 = test_flag3__9TItemDataFPv(arg1);
      temp_r30 = get_item_field_2__9TItemDataFPv(arg1);
      if ((((((u32) temp_r31) != 0U) && (((u32) temp_r30) != 0U)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r31) == 0x26)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r30) == 0x28))
      {
        var_f31 = TItemData__data_805DAB78;
      }
    }
      break;
    case 2:
      if (((u8) (*((u8 *) (((s8 *) arg0) + 2)))) == 5)
    {
      temp_r30_2 = test_flag3__9TItemDataFPv(arg1);
      temp_r31_2 = get_item_field_2__9TItemDataFPv(arg1);
      if ((((((u32) temp_r30_2) != 0U) && (((u32) temp_r31_2) != 0U)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r30_2) == 0x24)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r31_2) == 0x26))
      {
        var_f31 = TItemData__data_805DAB78;
      }
    }
      break;
    case 6:
      if (((u8) (*((u8 *) (((s8 *) arg0) + 2)))) == 6)
    {
      temp_r30_3 = test_flag3__9TItemDataFPv(arg1);
      temp_r31_3 = get_item_field_2__9TItemDataFPv(arg1);
      if ((((((u32) temp_r30_3) != 0U) && (((u32) temp_r31_3) != 0U)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r30_3) == 0x25)) && (get_slot_count__14TItemProShieldFPv((void *) temp_r31_3) == 0x27))
      {
        var_f31 = TItemData__data_805DAB78;
      }
    }
      break;
    case 26:
      temp_r3 = (u8 *) test_flag3__9TItemDataFPv(arg1);
      if ((temp_r3 != 0) && (get_slot_count__14TItemProShieldFPv(temp_r3) == 0x1A))
    {
      var_f31 = lbl_805DAB74;
    }
      break;
  }
  return var_f31;
}

f32 TItemData__sub_8010DD6C(void *self, s32 player) {
    u8 *item = (u8 *)self;
    switch (item[0]) {
    case 0:
        return TItemData__sub_8010DB9C(item, (u8 *)player);
    case 1:
        switch (item[1]) {
        case 1:
            return TItemData__sub_8010D8AC(item, (u8 *)player);
        case 2:
            return TItemData__sub_8010D6CC(item, (u8 *)player);
        }
        break;
    }
    return TItemData__data_805DAB70;
}

void apply_equip_effects__9TItemDataFPviiiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 temp_r0;
    u8 temp_r0_2;

    if ((arg1 != 0) || (arg1 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0), ((arg1 == 0) == 0))) {
        TItemData__sub_8010DD6C((void *)(arg0), (s32)(arg1));
        TItemData__sub_8010C5DC(arg0, arg1);
        temp_r0 = M2C_FIELD(arg0, u8 *, 0);
        switch ((s32) temp_r0) {
        case 0:
            TItemData__sub_8010C320(arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        case 1:
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 1);
            switch ((s32) temp_r0_2) {
            case 1:
                TItemData__sub_8010C1E0(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            case 2:
                TItemData__sub_8010C0A4(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            case 3:
                TItemData__sub_8010BEC4(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            }
            break;
        case 2:
            TItemData__sub_8010BD24(arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        }
        apply_bonuses(arg0, arg1, arg2, arg3, arg4, arg5);
        TItemData__sub_8010B908(arg0, arg1, arg2, arg3, arg4, arg5);
    }
}

extern s32 lbl_805D2B10;

void init__9TItemDataFv(TItemData_8010E344 *self) {
    s32 i;
    self->data[0] = 0;
    self->data[1] = 0;
    self->data[2] = 0;
    self->data[3] = 0;
    self->data[4] = 0;
    self->data[5] = 0;
    self->f10 = 0;
    for (i = 0; i < 3; i++) {
        self->stats[i].a = 0;
        self->stats[i].b = 0;
    }
    self->id = -1;
}

s32 calc_buy_price__9TItemDataFPv(void *arg0) {
    u8 temp_r0;

    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 4);
        if ((temp_r0 != 0) && (temp_r0 < 0x29U) && (TItemData__sub_8010DF68() == 0)) {
            if (check_item_flags__9TItemDataFPv((void *)(arg0)) == 1) {
                return TItemData__sub_8010EEC8(M2C_FIELD(arg0, u8 *, 4) + 0x1CB);
            }
            return TItemData__sub_8010EEC8(0x1F4);
        }
    }
    return lbl_805D2B10;
}

void *TItemData__sub_8010EA38(u8 *item) {
    void *r = 0;
    switch (item[0]) {
    case 0:
        r = get_item_pmt_record__10TObjPlayerFii(item[1], item[2]);
        break;
    case 1:
        switch (item[1]) {
        case 1:
        case 2:
            r = TObjPlayer__sub_8011CD48(item[1], item[2]);
            break;
        case 3:
            r = get_pmt_record_by_index__10TObjPlayerFi(item[2]);
            break;
        }
        break;
    case 2:
        r = get_pmt_record__10TObjPlayerFi(item[1]);
        break;
    case 3:
        if (item[1] == 2) {
            if (item[2] <= 0x1D) {
                r = get_pmt_record_by_type_id__10TObjPlayerFii(item[1], item[4]);
            }
        } else {
            r = get_pmt_record_by_type_id__10TObjPlayerFii(item[1], item[2]);
        }
        break;
    }
    return r;
}

int calc_display_grade__9TItemDataFPv(void *arg0) {
    s16 temp_r3;
    u8 temp_b;
    int var_r31;

    var_r31 = TItemData__sub_8010EBD8((u8 *)(arg0));
    switch ((s32) (u8) M2C_FIELD(arg0, u8 *, 0)) {
    case 0:
        if ((u8) var_r31 < 9U) {
            temp_b = M2C_FIELD(arg0, u8 *, 4);
            if (!(temp_b & 0x80)) {
                var_r31 += get_unit_attribute_index__10TObjPlayerFUc(temp_b);
            }
        } else if (M2C_FIELD(arg0, u8 *, 4) & 0x80) {
            var_r31 = 0;
        }
        break;
    case 1:
        if ((u8) M2C_FIELD(arg0, u8 *, 1) == 3) {
            temp_r3 = get_field6_bswap__9TItemDataFPv((void *)(arg0));
            if (temp_r3 < 0) {
                var_r31 -= 1;
            } else if (temp_r3 > 0) {
                var_r31 += 1;
            }
        }
        break;
    }
    if ((u8) var_r31 > 0xCU) {
        var_r31 = 0xC;
    }
    return var_r31;
}

s32 TItemData__sub_8010EBD8(u8 *item) {
    struct Parm_8010EBD8 *p;
    switch (item[0]) {
    case 0:
    case 1:
        p = (struct Parm_8010EBD8 *)TItemData__sub_8010EA38(item);
        if (p != NULL) {
            return TObjPlayer__sub_8011C914(p->name);
        }
        break;
    case 3:
        p = (struct Parm_8010EBD8 *)TItemData__sub_8010EA38(item);
        if (p != NULL && (p->flags & 0x80)) {
            return 0xC;
        }
        break;
    case 2:
        if (item[1] >= 0x28) {
            return 0xC;
        }
        break;
    }
    return 0;
}

void TItemData__sub_8010EC6C(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 0) {
        M2C_FIELD(arg0, u8 *, 4) = (u8) (M2C_FIELD(arg0, u8 *, 4) & 0x7F);
    }
}

s32 check_item_flags__9TItemDataFPv(void *arg0) {
    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 0) && (M2C_FIELD(arg0, u8 *, 4) & 0x80)) {
        return TItemData__sub_8010C52C() != 0 ? 1 : 0;
    }
    return 1;
}

}
