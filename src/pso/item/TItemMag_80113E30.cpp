#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_80113EDC { u8 pad[0x44]; u8 arr[1]; };

struct MagData_80113F64 { u8 pad[0xC]; u8 flags; u8 blasts; };

struct Mag_801143E8
{
  u8 pad[0xC];
  u8 flags;
  u8 blasts;
};

extern "C" {
void copy_record__8TItemMagFPvPv(u8 *arg0, u8 *arg1);
u8 obj_isState7_324(u8 *arg0);
s16 get_total_level__11TItemMagSubFPv(void *);
s16 TItemData__sub_801146A4(void *);
void mag_feed_add_mind(u8 *arg0, s16 arg1);
s16 get_total_level__11TItemMagSubFPv(void *);
s16 TItemData__sub_801146C0(void *);
void TItemMag__sub_80114198(u8 *arg0, s16 arg1);
s16 get_total_level__11TItemMagSubFPv(void *);
s16 TItemData__sub_801146DC(void *);
void add_stat_level_capped__8TItemMagFPvs(u8 *arg0, s16 arg1);
s16 get_total_level__11TItemMagSubFPv(void *);
s16 TItemData__sub_801146F8(void *);
void mag_feed_add_def(u8 *arg0, s16 arg1);
void TItemMag__sub_80113EDC(Obj_80113EDC *self, s16 i, u8 v);
extern const u8 lbl_805DABC4[3];
extern const u8 lbl_805DABC0[2];
s32 is_pb_registered__8TItemMagFiUc(s32 arg0, u8 arg1);
void add_photon_blast__8TItemMagFPvUc(MagData_80113F64 *data, u8 blast);
void *memset(void *, s32, u32);
extern const u8 lbl_805DABC4[3];
extern const u8 lbl_805DABC0[2];
s32 get_photon_blast_at_slot__8TItemMagFPvi(Mag_801143E8 *mag, s32 slot);
}

extern "C" {

void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
f32 TItemMag__sub_80113EEC(void* p);
void add_clamped_stat__8TItemMagFPvi(void *arg0, s32 arg1);
void add_stat_clamped__8TItemMagFPvi(s16 *arg0, s32 arg1);
int check_state_flag_1__8TItemMagFPv(void* p);
void clear_feed_flags__8TItemMagFPvUi(void* p, u32 v);
s16 get_item_type__8TItemMagFPv(void* p);
s32 get_mag_id__8TItemMagFPv(void* p);
f32 get_stat_f32__8TItemMagFPv(void* p);
int get_status_flag__8TItemMagFPv(void* p);
s32 get_sub_value__8TItemMagFi(s32 arg0);
s16 get_sync__8TItemMagFPv(void* p);
void init_feed_timer__8TItemMagFPv(void *arg0);
int is_active__8TItemMagFPv(void* p);
s32 is_pb_registered__8TItemMagFiUc(s32 arg0, u8 arg1);
void set_flags__8TItemMagFPvUi(void* p, u32 v);
int test_flags__8TItemMagFPvUi(void* p, u32 m);
int get_mag_mind_level__9TItemDataFPv(void*);
int test_flags_any(void*, int);
s16 TObjPlayer__sub_80113D90(void* p);
int get_level__9TItemDataFPv(void*);
s16 get_mag_data__10TObjPlayerFPv(void* p);
int get_mag_item_data(void* p);
int get_mag_item_percent(void* p);
int get_mag_item_stat_percent(void* p);
int get_mag_level(void* p);
int get_percent__9TItemDataFPv(void*);
int get_stat_percent__9TItemDataFPv(void*);
int is_feed_empty__8TItemMagFPv(void* p);
void scale_field_c8__8TItemMagFPvf(void* p, f32 v);
int test_feed_flags__11TItemMagSubFPvUi(void* p, u32 m);

int get_status_flag__8TItemMagFPv(void* p) { return *(u32*)((char*)p + 0x18c) & 0x10; }
void TItemMag__sub_80113E3C(void* p) { *(s8*)((char*)p + 0x0) = -32; }

void copy_record__8TItemMagFPvPv(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
}

u8 TItemMag__sub_80113E74(void* p) { return *(u8*)((char*)p + 0xe); }
s16 get_item_type__8TItemMagFPv(void* p) { return *(s16*)((char*)p + 0x0); }
s16 get_sync__8TItemMagFPv(void* p) { return *(s16*)((char*)p + 0x2); }
int is_active__8TItemMagFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 9) & 0x1; }
s32 get_sub_value__8TItemMagFi(s32 arg0) {
    return (s32) TItemMag__sub_80113EEC((void*)((void*)(arg0 + 0x4AC)));
}

u8 obj_isState7_324(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x324) == 7);
}

void TItemMag__sub_80113EDC(Obj_80113EDC *self, s16 i, u8 v) {
    self->arr[i] = v;
}

f32 TItemMag__sub_80113EEC(void* p) { return *(f32*)((char*)p + 0x3c); }

extern f32 TItemMag__data_805DABA4;

void init_feed_timer__8TItemMagFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TItemMag__data_805DABA4;
}

s32 get_mag_id__8TItemMagFPv(void* p) { return *(s32*)((char*)p + 0x0); }
f32 get_stat_f32__8TItemMagFPv(void* p) { return *(f32*)((char*)p + 0x8); }
int check_state_flag_1__8TItemMagFPv(void* p) { return test_flags_any((char*)p + 0x4, 1); }
void clear_feed_flags__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x4) &= ~v; }
void set_flags__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x4) |= v; }
int test_flags__8TItemMagFPvUi(void* p, u32 m) { return *(u32*)((char*)p + 0x4) & m; }

void add_photon_blast__8TItemMagFPvUc(MagData_80113F64 *data, u8 blast) {
    u8 ord;
    if (blast >= 6) {
        return;
    }
    if (is_pb_registered__8TItemMagFiUc((s32)data, blast) != 0) {
        return;
    }
    if (!(data->flags & lbl_805DABC4[0])) {
        data->blasts |= blast;
        data->flags |= lbl_805DABC4[0];
    } else if (!(data->flags & 2)) {
        data->blasts |= blast << 3;
        data->flags |= lbl_805DABC4[1];
    } else if (!(data->flags & 4)) {
        ord = blast;
        if ((data->blasts & lbl_805DABC0[0]) < blast) {
            ord--;
        }
        if (((data->blasts & lbl_805DABC0[1]) >> 3) < blast) {
            ord--;
        }
        if (ord < 4) {
            data->blasts |= ord << 6;
        }
        data->flags |= lbl_805DABC4[2];
    }
}

void add_clamped_stat__8TItemMagFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + arg1);
    if (M2C_FIELD(arg0, s16 *, 2) < 0) {
        M2C_FIELD(arg0, s16 *, 2) = 0;
    }
    if (M2C_FIELD(arg0, s16 *, 2) > 0x78) {
        M2C_FIELD(arg0, s16 *, 2) = 0x78;
    }
}

void add_stat_clamped__8TItemMagFPvi(s16 *arg0, s32 arg1) {
    *arg0 += arg1;
    if (*arg0 < 0) {
        *arg0 = 0;
    }
    if (*arg0 > 0xC8) {
        *arg0 = 0xC8;
    }
}

#pragma push
#pragma opt_propagation off
void mag_feed_add_mind(u8 *arg0, s16 arg1) {
    s16 temp_r31;
    s16 temp_r3;
    s16 temp_r3_2;
    s16 var_r30;
    var_r30 = arg1;
    temp_r31 = TItemData__sub_801146A4((void *) (arg0));
    if ((var_r30 > 0) || ((var_r30 < 0) && (-var_r30 < temp_r31))) {
        temp_r3 = get_total_level__11TItemMagSubFPv((void *) (arg0));
        if (temp_r3 < 0xC8) {
            M2C_FIELD(arg0, s16 *, 0xA) = M2C_FIELD(arg0, s16 *, 0xA) + var_r30;
            return;
        }
        if (temp_r3 == 0xC8) {
            temp_r3_2 = 0x63 - temp_r31;
            if (temp_r3_2 < var_r30) {
                var_r30 = temp_r3_2;
            }
            M2C_FIELD(arg0, s16 *, 0xA) = M2C_FIELD(arg0, s16 *, 0xA) + var_r30;
        }
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TItemMag__sub_80114198(u8 *arg0, s16 arg1) {
    s16 temp_r31;
    s16 temp_r3;
    s16 temp_r3_2;
    s16 var_r30;
    var_r30 = arg1;
    temp_r31 = TItemData__sub_801146C0((void *) (arg0));
    if ((var_r30 > 0) || ((var_r30 < 0) && (-var_r30 < temp_r31))) {
        temp_r3 = get_total_level__11TItemMagSubFPv((void *) (arg0));
        if (temp_r3 < 0xC8) {
            M2C_FIELD(arg0, s16 *, 8) = M2C_FIELD(arg0, s16 *, 8) + var_r30;
            return;
        }
        if (temp_r3 == 0xC8) {
            temp_r3_2 = 0x63 - temp_r31;
            if (temp_r3_2 < var_r30) {
                var_r30 = temp_r3_2;
            }
            M2C_FIELD(arg0, s16 *, 8) = M2C_FIELD(arg0, s16 *, 8) + var_r30;
        }
    }
}
#pragma pop

#pragma push
#pragma opt_propagation off
void add_stat_level_capped__8TItemMagFPvs(u8 *arg0, s16 arg1) {
    s16 temp_r31;
    s16 temp_r3;
    s16 temp_r3_2;
    s16 var_r30;
    var_r30 = arg1;
    temp_r31 = TItemData__sub_801146DC((void *) (arg0));
    if ((var_r30 > 0) || ((var_r30 < 0) && (-var_r30 < temp_r31))) {
        temp_r3 = get_total_level__11TItemMagSubFPv((void *) (arg0));
        if (temp_r3 < 0xC8) {
            M2C_FIELD(arg0, s16 *, 6) = M2C_FIELD(arg0, s16 *, 6) + var_r30;
            return;
        }
        if (temp_r3 == 0xC8) {
            temp_r3_2 = 0x63 - temp_r31;
            if (temp_r3_2 < var_r30) {
                var_r30 = temp_r3_2;
            }
            M2C_FIELD(arg0, s16 *, 6) = M2C_FIELD(arg0, s16 *, 6) + var_r30;
        }
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void mag_feed_add_def(u8 *arg0, s16 arg1) {
    s16 temp_r31;
    s16 temp_r3;
    s16 temp_r3_2;
    s16 var_r30;
    var_r30 = arg1;
    temp_r31 = TItemData__sub_801146F8((void *) (arg0));
    if ((var_r30 > 0) || ((var_r30 < 0) && (-var_r30 < temp_r31))) {
        temp_r3 = get_total_level__11TItemMagSubFPv((void *) (arg0));
        if (temp_r3 < 0xC8) {
            M2C_FIELD(arg0, s16 *, 4) = M2C_FIELD(arg0, s16 *, 4) + var_r30;
            return;
        }
        if (temp_r3 == 0xC8) {
            temp_r3_2 = 0x63 - temp_r31;
            if (temp_r3_2 < var_r30) {
                var_r30 = temp_r3_2;
            }
            M2C_FIELD(arg0, s16 *, 4) = M2C_FIELD(arg0, s16 *, 4) + var_r30;
        }
    }
}
#pragma pop

s32 is_pb_registered__8TItemMagFiUc(s32 arg0, u8 arg1) {
    s32 var_r30;

    if (arg1 < 6U) {
        var_r30 = 0;
loop_2:
        if ((s32) arg1 == get_photon_blast_at_slot__8TItemMagFPvi((Mag_801143E8 *)(arg0), (s32)(var_r30))) {
            return 1;
        }
        var_r30 += 1;
        if (var_r30 == 3) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return 0;
}
typedef struct Mag_801143E8 Mag_801143E8;
s32 get_photon_blast_at_slot__8TItemMagFPvi(Mag_801143E8 *mag, s32 slot) {
  int new_var;
  u8 used[6];
  s32 i;
  u8 ord;
  switch (slot)
  {
    case 0:
      if (mag->flags & lbl_805DABC4[0])
    {
      return mag->blasts & lbl_805DABC0[0];
    }
      break;
    case 1:
      if (mag->flags & lbl_805DABC4[1])
    {
      return (mag->blasts & lbl_805DABC0[1]) >> 3;
    }
      break;
    case 2:
      if (mag->flags & lbl_805DABC4[2])
    {
      memset(used, 0, 6);
      new_var = mag->blasts;
      u8 b = new_var;
      used[(u8) (b & lbl_805DABC0[0])] = 1;
      used[(u8) ((b & lbl_805DABC0[1]) >> 3)] = 1;
      ord = (b & lbl_805DABC0[2]) >> 6;
      for (i = 0; i < 6; i++)
      {
        if (used[i] != 1)
        {
          if (ord == 0)
          {
            return i;
          }
          ord--;
        }
      }
    }
      break;
  }
  return -1;
}

}
