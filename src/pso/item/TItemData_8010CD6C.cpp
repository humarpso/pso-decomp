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

struct Params_8010E414 { s32 name; u8 pad4[4]; s16 stat; s16 amount; };

struct Item_8010E59C {
    u8 type;
    u8 sub;
    u8 b2;
    u8 grind;
    u8 flags;
    u8 pad5[0xB];
    s32 meseta;
};

extern "C" {
int bswap_16__FPUs(void*);
void set_unit_modifier__9TItemDataFPvs(u8 *arg0, s16 arg1);
int bswap_16__FPUs(void*);
void TItemData__sub_8010CE1C(u8 *arg0, s16 arg1);
int bswap_16__FPUs(void*);
void set_dfp_bonus__9TItemDataFPvs(u8 *arg0, s16 arg1);
int test_flag3__9TItemDataFPv(void *);
int get_item_field_2__9TItemDataFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
extern f32 TItemData__data_805DAB70;
extern const f32 lbl_805DAB74;
extern f32 TItemData__data_805DAB78;
f32 get_weapon_set_multiplier__9TItemDataFPvPv(u8 *arg0, u8 *arg1);
int get_item_field_6__10TObjPlayerFPv(void *);
u8 get_field_ed__10TObjPlayerFPv(void *);
int get_item_field_2__9TItemDataFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
extern f32 TItemData__data_805DAB70;
extern const f32 lbl_805DAB74;
extern f32 TItemData__data_805DAB78;
f32 get_shield_set_multiplier__9TItemDataFPvPv(u8 *arg0, u8 *arg1);
void bswap_fields__9TItemDataFPv(void* p);
void deserialize_mag__9TItemDataFPvPv(Raw_8010D614 *src, Mag_8010D614 *dst);
void init__9TItemDataFv(TItemData_8010E344 *self);
extern f32 TItemData__data_805DAB70;
f32 get_weapon_set_multiplier__9TItemDataFPvPv(u8 *arg0, u8 *arg1);
f32 get_shield_set_multiplier__9TItemDataFPvPv(u8 *arg0, u8 *arg1);
f32 get_set_bonus_multiplier__9TItemDataFPvi(void *self, s32 player);
void *get_item_pmt_record__10TObjPlayerFii(int type, int id);
void *get_armor_pmt_record(int type, int id);
void *get_pmt_record_by_index__10TObjPlayerFi(int i);
void *get_pmt_record__10TObjPlayerFi(int i);
void *get_pmt_record_by_type_id__10TObjPlayerFii(int type, int id);
void *lookup_item_pmt_record(u8 *item);
void copy_item_data__6TLobbyFPvPv(void *, void *);
void bswap_fields__9TItemDataFPv(void* p);
u8 get_total_level__11TItemMagSubFPv(const void *);
void serialize_mag__9TItemDataFPvPv(Item_8010D510 *item, const Mag_8010D510 *mag);
void *lookup_item_pmt_record(u8 *item);
s32 get_item_star_count(s32);
s32 get_base_rarity__9TItemDataFPv(u8 *item);
s32 get_base_rarity__9TItemDataFPv(u8 *item);
s32 is_rare_item__9TItemDataFPv(u8 *item);
char *TItemAttacker__sub_80103548(s32);
s32 is_wrapped__9TItemDataFPv();
u16 get_packed_value__9TItemDataFPv(void *);
s16 get_field6_bswap__9TItemDataFPv(void *arg0);
s32 is_rare_item__9TItemDataFPv(u8 *item);
void *lookup_item_pmt_record(u8 *item);
s32 check_item_flags__9TItemDataFPv(void *arg0);
s32 get_item_description_text(s32);
int sprintf(char *, const char *, ...);
extern s32 lbl_805D2B10;
s32 format_item_description(u8 *item);
int test_flag3__9TItemDataFPv(void *);
int get_item_field_2__9TItemDataFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
int get_item_field_6__10TObjPlayerFPv(void *);
u8 get_field_ed__10TObjPlayerFPv(void *);
s32 get_player_by_client_id(s32);
s32 obj_getField1c(void *);
s32 TObjPlayer__sub_80117E50(s32);
extern f32 TItemData__data_805DAB70;
extern f32 TItemData__data_805DAB78;
extern const f32 lbl_805DAB7C;
f32 get_armor_set_multiplier__9TItemDataFPvPv(u8 *arg0, u8 *arg1);
s16 get_field6_bswap__9TItemDataFPv(void *arg0);
s16 get_bswap16_field8__9TItemDataFPv(void *arg0);
s16 getS16_06__9TItemDataFPv(void *arg0);
s32 has_bonus_stats__9TItemDataFPv(TItemData_8010E344 *item);
char *get_technique_name();
s32 is_wrapped__9TItemDataFPv();
void TItemData__sub_8010CB10(void *, s8 *);
s32 is_custom_name_srank__9TItemDataFPv(void *);
s16 get_field6_bswap__9TItemDataFPv(void *arg0);
s32 is_rare_item__9TItemDataFPv(u8 *item);
void *lookup_item_pmt_record(u8 *item);
s32 check_item_flags__9TItemDataFPv(void *arg0);
char *get_text_collection(s32);
char *get_download_server__20TWindowSubStatusDispFv();
s8 *get_item_by_slot_flag__10TObjPlayerFUc(u8);
int sprintf(char *, const char *, ...);
void *memset(void *, int, int);
extern char lbl_8043E358[];
extern char lbl_8043E360[];
extern char lbl_8043E368[];
extern char lbl_8043E374[];
extern char lbl_8043E37C[];
extern char lbl_8043E384[];
extern char lbl_8043E390[];
extern s32 lbl_805D5544;
extern char lbl_805DAB8C;
void format_item_name__9TItemDataFv(u8 *arg0, char *buf);
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
M2C_UNK apply_custom_shield_bonus__9TItemDataFv(void *, s32, s32, s32, s32, s32);
M2C_UNK add_mag_stat_bonuses__9TItemDataFv(void *, s32, s32, s32, s32, s32);
M2C_UNK apply_unit_stat_bonus__9TItemDataFPviiPvPvPv(void *, s32, s32, s32, s32, s32);
M2C_UNK add_shield_stat_contribution__9TItemDataFPviiPv(void *, s32, s32, s32, s32, s32);
M2C_UNK add_armor_stat_contribution__9TItemDataFPviiPv(void *, s32, s32, s32, s32, s32);
M2C_UNK add_weapon_stat_bonuses__9TItemDataFv(void *, s32, s32, s32, s32, s32);
s32 is_wrapped__9TItemDataFPv();
M2C_UNK calc_clock_bonus__9TItemDataFPv(void *, s32);
void TItemData__sub_8010CCB0(void);
void normalize__9TItemDataFv(void);
s32 get_item_description_text(s32);
s32 get_player_by_client_id(s32);
void *calc_technique_parameters(u8, u8, s32);
M2C_UNK apply_bonuses(void *, s32, s32, s32, s32, s32);
int bswap_16__FPUs(void*);
s32 is_item_stackable(u8, u8);
s32 get_unit_attribute_index__10TObjPlayerFUc(u8);
int register_drop__9TItemDataFPv(void* p);
int register_item_drop__10TObjPlayerFPv(void*);

void lookup_item_def__9TItemDataFPv(void *arg0) {
    is_item_stackable(M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(arg0, u8 *, 1));
}
s16 get_field6_bswap__9TItemDataFPv(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 6);
    bswap_16__FPUs((void*)(&sp8));
    return sp8;
}

void set_unit_modifier__9TItemDataFPvs(u8 *arg0, s16 arg1) {
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

void set_dfp_bonus__9TItemDataFPvs(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 6) = arg1;
    bswap_16__FPUs((void*)((void *) (arg0 + 6)));
}

s16 get_technique_level__9TItemDataFPv(void *arg0) {
    void *temp_r3;

    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 3) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 2)) {
        temp_r3 = calc_technique_parameters(M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(arg0, u8 *, 2), 0xFFFF);
        if (temp_r3 != NULL) {
            return M2C_FIELD(temp_r3, s16 *, 0x14);
        }
    }
    return 0;
}

s32 has_bonus_stats__9TItemDataFPv(TItemData_8010E344 *item) {
    s32 i;
    switch (item->data[0]) {
    case 0:
        for (i = 0; i < 3; i++) {
            if (item->stats[i].a != 0) {
                return 1;
            }
        }
        break;
    case 1:
        switch (item->data[1]) {
        case 1:
            if (item->data[5] != 0) {
                return 1;
            }
        case 2:
            if (getS16_06__9TItemDataFPv(item) > 0 || get_bswap16_field8__9TItemDataFPv(item) > 0) {
                return 1;
            }
            break;
        case 3:
            if (((s16 (*)(void))get_field6_bswap__9TItemDataFPv)() > 0) {
                return 1;
            }
            break;
        }
        break;
    case 2:
        switch (item->data[1]) {
        case 0x1D:
        case 0x21:
        case 0x22:
        case 0x27:
            return 1;
        }
        break;
    }
    return 0;
}

void serialize_mag__9TItemDataFPvPv(Item_8010D510 *item, const Mag_8010D510 *mag) {
    Item_8010D510 copy;
    copy.b0 = item->b0;
    copy.b1 = item->b1;
    copy.level = get_total_level__11TItemMagSubFPv(mag);
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

void deserialize_mag__9TItemDataFPvPv(Raw_8010D614 *src, Mag_8010D614 *dst) {
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

f32 get_shield_set_multiplier__9TItemDataFPvPv(u8 *arg0, u8 *arg1) {
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

f32 get_armor_set_multiplier__9TItemDataFPvPv(u8 *arg0, u8 *arg1) {
    f32 v;
    s32 b1;
    s32 a1;
    s32 a2;
    s32 b2;
    s32 a3;
    s32 b3;
    s32 i;
    s32 found;
    s32 hit;
    s32 j;
    s32 hit2;
    s32 k;
    s32 p;
    u8 c;
    v = TItemData__data_805DAB70;
    switch (arg0[2]) {
    case 24:
        found = 0;
        for (i = 0; i != 12 && found != 1; i++) {
            p = get_player_by_client_id(i);
            if ((u32)p != 0) {
                p = get_item_field_2__9TItemDataFPv((void *)p);
                if ((u32)p != 0) {
                    c = get_slot_count__14TItemProShieldFPv((void *)p);
                    if (c == 0x19 || c == 0x1A) {
                        v = lbl_805DAB7C;
                        found = 1;
                    }
                }
            }
        }
        break;
    case 25:
        hit = 0;
        for (j = 0; j != 12 && hit != 1; j++) {
            p = get_player_by_client_id(j);
            if ((u32)p != 0) {
                p = get_item_field_2__9TItemDataFPv((void *)p);
                if ((u32)p != 0) {
                    c = get_slot_count__14TItemProShieldFPv((void *)p);
                    if (c == 0x1A || c == 0x18) {
                        v = lbl_805DAB7C;
                        hit = 1;
                    }
                }
            }
        }
        break;
    case 26:
        hit2 = 0;
        for (k = 0; k != 12 && hit2 != 1; k++) {
            p = get_player_by_client_id(k);
            if ((u32)p != 0) {
                p = get_item_field_2__9TItemDataFPv((void *)p);
                if ((u32)p != 0) {
                    c = get_slot_count__14TItemProShieldFPv((void *)p);
                    if (c == 0x19 || c == 0x18) {
                        v = lbl_805DAB7C;
                        hit2 = 1;
                    }
                }
            }
        }
        break;
    case 40:
        a1 = get_item_field_6__10TObjPlayerFPv(arg1);
        b1 = test_flag3__9TItemDataFPv(arg1);
        if ((u32)a1 != 0 && (u32)b1 != 0 && get_field_ed__10TObjPlayerFPv((void *)a1) == 1 && get_slot_count__14TItemProShieldFPv((void *)a1) == 5 && get_slot_count__14TItemProShieldFPv((void *)b1) == 0x26) {
            v = TItemData__data_805DAB78;
        }
        break;
    case 38:
        a2 = get_item_field_6__10TObjPlayerFPv(arg1);
        b2 = test_flag3__9TItemDataFPv(arg1);
        if ((u32)a2 != 0 && (u32)b2 != 0 && get_field_ed__10TObjPlayerFPv((void *)a2) == 2 && get_slot_count__14TItemProShieldFPv((void *)a2) == 5 && get_slot_count__14TItemProShieldFPv((void *)b2) == 0x24) {
            v = TItemData__data_805DAB78;
        }
        break;
    case 39:
        a3 = get_item_field_6__10TObjPlayerFPv(arg1);
        b3 = test_flag3__9TItemDataFPv(arg1);
        if ((u32)a3 != 0 && (u32)b3 != 0 && get_field_ed__10TObjPlayerFPv((void *)a3) == 6 && get_slot_count__14TItemProShieldFPv((void *)a3) == 6 && get_slot_count__14TItemProShieldFPv((void *)b3) == 0x25) {
            v = TItemData__data_805DAB78;
        }
        break;
    case 45:
        if (TObjPlayer__sub_80117E50(obj_getField1c(arg1)) != 0) {
            v = TItemData__data_805DAB78;
        }
        break;
    }
    return v;
}

f32 get_weapon_set_multiplier__9TItemDataFPvPv(u8 *arg0, u8 *arg1) {
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

f32 get_set_bonus_multiplier__9TItemDataFPvi(void *self, s32 player) {
    u8 *item = (u8 *)self;
    switch (item[0]) {
    case 0:
        return get_weapon_set_multiplier__9TItemDataFPvPv(item, (u8 *)player);
    case 1:
        switch (item[1]) {
        case 1:
            return get_armor_set_multiplier__9TItemDataFPvPv((u8 *)(item), (u8 *)((u8 *)player));
        case 2:
            return get_shield_set_multiplier__9TItemDataFPvPv(item, (u8 *)player);
        }
        break;
    }
    return TItemData__data_805DAB70;
}

void apply_equip_effects__9TItemDataFPviiiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 temp_r0;
    u8 temp_r0_2;

    if ((arg1 != 0) || (arg1 = get_player_by_client_id(lbl_805D53A0), ((arg1 == 0) == 0))) {
        get_set_bonus_multiplier__9TItemDataFPvi((void *)(arg0), (s32)(arg1));
        calc_clock_bonus__9TItemDataFPv(arg0, arg1);
        temp_r0 = M2C_FIELD(arg0, u8 *, 0);
        switch ((s32) temp_r0) {
        case 0:
            add_weapon_stat_bonuses__9TItemDataFv(arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        case 1:
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 1);
            switch ((s32) temp_r0_2) {
            case 1:
                add_armor_stat_contribution__9TItemDataFPviiPv(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            case 2:
                add_shield_stat_contribution__9TItemDataFPviiPv(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            case 3:
                apply_unit_stat_bonus__9TItemDataFPviiPvPvPv(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            }
            break;
        case 2:
            add_mag_stat_bonuses__9TItemDataFv(arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        }
        apply_bonuses(arg0, arg1, arg2, arg3, arg4, arg5);
        apply_custom_shield_bonus__9TItemDataFv(arg0, arg1, arg2, arg3, arg4, arg5);
    }
}

extern s32 lbl_805D2B10;

s32 is_rare_item__9TItemDataFPv(u8 *item) {
    return (u8) get_base_rarity__9TItemDataFPv(item) >= 9 ? 1 : 0;
}

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
        if ((temp_r0 != 0) && (temp_r0 < 0x29U) && (((s32 (*)(void))is_rare_item__9TItemDataFPv)() == 0)) {
            if (check_item_flags__9TItemDataFPv((void *)(arg0)) == 1) {
                return get_item_description_text(M2C_FIELD(arg0, u8 *, 4) + 0x1CB);
            }
            return get_item_description_text(0x1F4);
        }
    }
    return lbl_805D2B10;
}

s32 format_item_description(u8 *item) {
    char *format;
    Params_8010E414 *p;
    char *out;
    s32 name;
    p = (Params_8010E414 *)lookup_item_pmt_record(item);
    out = TItemAttacker__sub_80103548(0);
    if (p != NULL && out != NULL) {
        format = NULL;
        if (((s32 (*)(u8 *))is_wrapped__9TItemDataFPv)(item) != 0) {
            format = (char *)get_item_description_text(0x77);
        } else {
            name = p->name;
            if (name == 0x1F4) {
                return lbl_805D2B10;
            }
            if (item[0] == 0) {
                if (is_rare_item__9TItemDataFPv(item) != 0 && check_item_flags__9TItemDataFPv(item) == 0) {
                    format = (char *)get_item_description_text(0x17E);
                } else {
                    format = (char *)get_item_description_text(name);
                }
            } else if (item[0] == 1 && item[1] == 3) {
                if (name < 0x2E2) {
                    if (p != NULL && out != NULL && p->stat != 0x1C) {
                        sprintf(out, (char *)get_item_description_text(name), p->amount + get_field6_bswap__9TItemDataFPv(item));
                        return (s32)out;
                    }
                } else {
                    format = (char *)get_item_description_text(name);
                }
            } else {
                format = (char *)get_item_description_text(name);
            }
        }
        if (format != NULL) {
            sprintf(out, format, get_packed_value__9TItemDataFPv(item));
        }
    return (s32)out;
    }
    return lbl_805D2B10;
}

void format_item_name__9TItemDataFv(u8 *arg0, char *buf) {
    Item_8010E59C *item = (Item_8010E59C *)arg0;
    s8 *slot;
    char *name;
    s32 *pmt;
    s8 tmp[10];
    s8 sign[3];
    s16 lim;
    s16 v;
    u8 t;
    if (buf == NULL) {
        return;
    }
    if (item->type == 4) {
        sprintf(buf, lbl_8043E358, item->meseta, get_download_server__20TWindowSubStatusDispFv());
        return;
    }
    pmt = (s32 *)lookup_item_pmt_record(arg0);
    if (pmt != NULL) {
        name = get_text_collection(*pmt);
    } else {
        name = get_text_collection(0x1F4);
    }
    if (((s32 (*)(void *))is_wrapped__9TItemDataFPv)(arg0) != 0) {
        sprintf(buf, &lbl_805DAB8C, get_text_collection(0x77));
        return;
    }
    t = item->type;
    if (t == 0) {
        if (is_custom_name_srank__9TItemDataFPv(arg0) != 0) {
            memset(tmp, 0, 10);
            TItemData__sub_8010CB10(arg0, tmp);
            if (tmp[0] - 0x41 == 1) {
                if (item->grind != 0) {
                    sprintf(buf, lbl_8043E360, &tmp[1], item->grind);
                } else {
                    sprintf(buf, &lbl_805DAB8C, &tmp[1]);
                }
            } else if (item->grind != 0) {
                sprintf(buf, lbl_8043E368, &tmp[1], name, item->grind);
            } else {
                sprintf(buf, lbl_8043E374, &tmp[1], name);
            }
            return;
        }
        slot = get_item_by_slot_flag__10TObjPlayerFUc(item->flags);
        if (is_rare_item__9TItemDataFPv(arg0) != 0) {
            if (check_item_flags__9TItemDataFPv(arg0) == 1) {
                if (item->grind != 0) {
                    sprintf(buf, lbl_8043E360, name, item->grind);
                } else {
                    sprintf(buf, &lbl_805DAB8C, name);
                }
            } else {
                sprintf(buf, &lbl_805DAB8C, get_text_collection(0x17E));
            }
            return;
        }
        if (*slot != 0) {
            if (item->grind != 0) {
                sprintf(buf, lbl_8043E368, slot, name, item->grind);
            } else {
                sprintf(buf, lbl_8043E374, slot, name);
            }
        } else if (item->grind != 0) {
            sprintf(buf, lbl_8043E360, name, item->grind);
        } else {
            sprintf(buf, &lbl_805DAB8C, name);
        }
    } else if (t == 3 && item->sub == 2) {
        u8 f = item->flags;
        if (f < 0x13) {
            switch (f) {
            case 0xE:
            case 0x11:
                if (lbl_805D5544 == 0) {
                    sprintf(buf, lbl_8043E37C, ((char *(*)(s32))get_technique_name)(f), name);
                } else {
                    sprintf(buf, lbl_8043E37C, name, ((char *(*)(s32))get_technique_name)(f));
                }
                break;
            default:
                if (lbl_805D5544 == 0) {
                    sprintf(buf, lbl_8043E384, ((char *(*)(s32))get_technique_name)(f), item->b2 + 1, name);
                } else {
                    sprintf(buf, lbl_8043E390, name, ((char *(*)(s32))get_technique_name)(f), item->b2 + 1);
                }
                break;
            }
        } else {
            sprintf(buf, name);
        }
    } else if (t == 1 && item->sub == 3) {
        memset(sign, 0, 3);
        pmt = (s32 *)lookup_item_pmt_record(arg0);
        if (pmt != NULL) {
            lim = *(s16 *)((u8 *)pmt + 0xC);
            v = get_field6_bswap__9TItemDataFPv(arg0);
            if (v < -lim) {
                sign[0] = '-';
                sign[1] = '-';
            } else if (v < 0) {
                sign[0] = '-';
            } else if (v == 0) {
                sign[0] = 0;
            } else if (v <= lim) {
                sign[0] = '+';
            } else if (lim < v) {
                sign[0] = '+';
                sign[1] = '+';
            }
        }
        sprintf(buf, lbl_8043E37C, name, sign);
    } else {
        sprintf(buf, name);
    }
}

void *lookup_item_pmt_record(u8 *item) {
    void *r = 0;
    switch (item[0]) {
    case 0:
        r = get_item_pmt_record__10TObjPlayerFii(item[1], item[2]);
        break;
    case 1:
        switch (item[1]) {
        case 1:
        case 2:
            r = get_armor_pmt_record(item[1], item[2]);
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

    var_r31 = get_base_rarity__9TItemDataFPv((u8 *)(arg0));
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

s32 get_base_rarity__9TItemDataFPv(u8 *item) {
    struct Parm_8010EBD8 *p;
    switch (item[0]) {
    case 0:
    case 1:
        p = (struct Parm_8010EBD8 *)lookup_item_pmt_record(item);
        if (p != NULL) {
            return get_item_star_count(p->name);
        }
        break;
    case 3:
        p = (struct Parm_8010EBD8 *)lookup_item_pmt_record(item);
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
        return is_wrapped__9TItemDataFPv() != 0 ? 1 : 0;
    }
    return 1;
}

}
