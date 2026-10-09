#include "types.h"
#include "pso/item/TItemData.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK init__9TItemDataFv();
M2C_UNK strncpy(s8 *, u32, M2C_UNK);
M2C_UNK memset(s8 *, M2C_UNK, M2C_UNK);
void TItemData__sub_8010CA08(void *arg0, u32 arg1, u8 arg2);
s32 TItemData__sub_8010CAB0(M2C_UNK arg0, s8 arg1);
s32 is_custom_name_srank__9TItemDataFPv(u8 *arg0);
s8 TItemData__sub_8010CACC(void *self, s8 c);
s8 TItemData__sub_8010CACC(void *self, s8 c);
void pack_three_colors__9TItemDataFPvPv(u8 *self, u8 *in);
s32 TItemData__sub_8010CAB0(M2C_UNK arg0, s8 arg1);
void TItemData__sub_8010CB10(u8 *self, s8 *out);
}

extern "C" {

u32 find_item_by_id(u32);
void TItemData__sub_8010CCB0(void);
void normalize__9TItemDataFv(void);
u8 get_entry_field16__9TItemDataFv(void);
s32 get_item_use_result__9TItemDataFPv(u8 *arg0);
int register_drop__9TItemDataFPv(void* p);
void *lookup_item_pmt_record();
void *calc_technique_parameters(u8, u8, s32);
s32 bswap_16__FPUs(s16 *);
s32 is_item_stackable(u8, u8);
s32 lookup_item_def__9TItemDataFPv();
int register_item_drop__10TObjPlayerFPv(void*);

}
int TItemData::isValidGroundDrop() {
    u8 category;
    u8 group;
    if (find_item_by_id(id) == 0U) {
        category=data1.data_u8[0];
        switch ((s32)category) {
        case 3:
        case 0:
            if (((u32 (*)(TItemData*))lookup_item_pmt_record)(this) == 0U) return 0;
            break;
        case 1:
            group=data1.data_u8[1];
            if ((group == 0) && (group >= 4U)) return 0;
            break;
        case 2:return 1;
        case 4:
            if ((s32)data2.data_u32 == 0) return 0;
            break;
        default:return 0;
        }
        return 1;
    } else return 0;
}

extern "C" {

void TItemData__sub_8010CA08(void *arg0, u32 arg1, u8 arg2) {
    s8 sp8[10];
    init__9TItemDataFv();
    if ((arg1 != 0U) && (((arg2 >= 0x70U) && (arg2 <= 0x88U)) || ((arg2 >= 0xA5U) && (arg2 <= 0xA9U)))) {
        M2C_FIELD(arg0, s8 *, 0) = 0;
        M2C_FIELD(arg0, u8 *, 1) = arg2;
        M2C_FIELD(arg0, s8 *, 2) = 0;
        memset(sp8, 0, 0xA);
        sp8[0] = 0x41;
        strncpy(&sp8[1], arg1, 8);
        pack_three_colors__9TItemDataFPvPv((u8 *)((void *)(arg0)), (u8 *)((s8 *)(sp8)));
    }
}

s32 TItemData__sub_8010CAB0(M2C_UNK arg0, s8 arg1) {
    return (arg1 != 0) ? (s8) (arg1 + 0x40) : 0;
}

s8 TItemData__sub_8010CACC(void *self, s8 c) {
    s8 r = 0;
    if (c >= 'a' && c <= 'z') {
        r = c - 0x60;
    } else if (c >= 'A' && c <= 'Z') {
        r = c - 0x40;
    }
    return r;
}

void TItemData__sub_8010CB10(u8 *self, s8 *out) {
  u16 h;
  s8 *p;
  s32 i;
  if (out != 0)
  {
    p = out;
    i = 0;
    do
    {
      u8 *q = &self[i * 2];
      u8 hi = q[6] & 0xFFFFFFFFFFFFFFFFu;
      u8 lo = q[7];
      h = lo | ((hi << 8) & 0x7F00);
      p[0] = ((s8 (*)(void *, s8)) TItemData__sub_8010CAB0)(self, (h >> 10) & 0x3F);
      p[1] = ((s8 (*)(void *, s8)) TItemData__sub_8010CAB0)(self, (h >> 5) & 0x1F);
      p[2] = ((s8 (*)(void *, s8)) TItemData__sub_8010CAB0)(self, h & 0x1F);
      i++;
      p += 3;
    }
    while (i != 3);
  }
}

void pack_three_colors__9TItemDataFPvPv(u8 *self, u8 *in) {
  s32 i;
  if (in != 0)
  {
    for (i = 0; i != 3; i++)
    {
      s8 a = TItemData__sub_8010CACC(self, (s8) in[(i * 3) + 0]);
      s8 b = TItemData__sub_8010CACC(self, (s8) in[(i * 3) + 1]);
      s8 c = TItemData__sub_8010CACC(self, (s8) in[(i * 3) + 2]);
      u32 v = c | (((a << 1) << 9) | (b << 5));
      u8 *o = &self[i * 2];
      a = ((u8) (v >> 8)) | 0x80;
      o[6] = a;
      o[7] = v;
    }
  }
}

s32 is_custom_name_srank__9TItemDataFPv(u8 *arg0) {
    u8 temp_r0;
    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 1);
        if ((temp_r0 >= 0x70U) && (temp_r0 <= 0x88U)) {
            return 1;
        }
        if ((temp_r0 >= 0xA5U) && (temp_r0 <= 0xA9U)) {
            return 1;
        }
    }
    return 0;
}

void TItemData__sub_8010CCB0(void) {  }
void normalize__9TItemDataFv(void) {  }
u8 get_entry_field16__9TItemDataFv(void) {
    void *temp_r3;

    temp_r3 = lookup_item_pmt_record();
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u8 *, 0x16);
    }
    return 0U;
}
int register_drop__9TItemDataFPv(void* p) { return register_item_drop__10TObjPlayerFPv(p); }

#include "types.h"
extern "C" {

s32 get_item_use_result__9TItemDataFPv(u8 *arg0) {
    if (lookup_item_def__9TItemDataFPv() != 0) {
        if (((u8) M2C_FIELD(arg0, u8 *, 0) == 3) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 0x10)) {
            return 0x63;
        }
        return 0xA;
    }
    return 1;
}

}

}
