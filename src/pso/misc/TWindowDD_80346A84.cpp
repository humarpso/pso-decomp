#include "pso/misc/TWindowDD.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TWindowDD__sub_80346F30(u8 *arg0);
s32 TWindowDD__sub_80346F30(u8 *arg0);
s32 TWindowDD__sub_80348398();
s32 TWindowDD__sub_80346DB8(s32 arg0);
s32 get_entry__9TWindowDDFi(s32 entry_index);
s32 get_element_ptr__9TWindowDDFi(s32 arg0);
}

extern "C" {

void render__9TWindowDDFv(void);
void ws_data_load(void);
void *fn_800F9990(M2C_UNK *);

extern s32 TWindowDD__data_805D6E08;
extern s32 TWindowDD__data_805D6E1C;
extern s32 TWindowDD__data_805D6E2C;
extern s32 lbl_805D6E38;

s32 get_element_ptr__9TWindowDDFi(s32 arg0) {
    if (arg0 == -1) {
        return 0;
    }
    if (arg0 == -0x32) {
        switch ((s32) TWindowDD__data_805D6E08) {
        case 0:
            return TWindowDD__data_805D6E2C + 0x8C0;
        default:
            return TWindowDD__data_805D6E2C + 0x920;
        case 4:
            return TWindowDD__data_805D6E2C + 0x920;
        case 2:
            return TWindowDD__data_805D6E2C + 0x920;
        case 3:
            return TWindowDD__data_805D6E2C + 0x928;
        }
    } else {
        if ((arg0 >= 0) && (arg0 < (s32) lbl_805D6E38)) {
            return TWindowDD__data_805D6E2C + (arg0 * 8);
        }
        switch (arg0) {
        default:
            return 0;
        case -60:
            return TWindowDD__data_805D6E1C + 0x10;
        case -70:
            return TWindowDD__data_805D6E1C + 0x18;
        case -40:
            return TWindowDD__data_805D6E1C;
        case -45:
            return TWindowDD__data_805D6E1C + 8;
        case -80:
            return TWindowDD__data_805D6E1C + 0x20;
        case -90:
            return TWindowDD__data_805D6E1C + 0x28;
        }
    }
}

extern M2C_UNK lbl_80478650[];
extern M2C_UNK lbl_80478660[];
extern M2C_UNK lbl_80478670[];
extern M2C_UNK lbl_80478680[];
extern M2C_UNK lbl_80478690[];
extern s32 TWindowDD__data_805D6E08;
extern s32 TWindowDD__data_805D6E28;
extern s32 TWindowDD__data_805D6E2C;
extern s32 TWindowDD__data_805D6E30;
extern s32 lbl_805D6E34;
extern s32 lbl_805D6E38;
extern s32 lbl_805D6E3C;
extern s32 TWindowDD__data_805D6E40;
extern s32 TWindowDD__data_805D6E44;
extern s32 TWindowDD__data_805D6E48;
extern s32 lbl_805D6E4C;
extern void *lbl_805D6E50;
extern void *lbl_805D6E54;
extern void *lbl_805D6E58;
extern void *lbl_805D6E5C;
extern void *lbl_805D6E60;

void ws_data_load(void) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;

    switch ((s32) TWindowDD__data_805D6E08) {
    case 0:
        temp_r3 = fn_800F9990(lbl_80478650);
        lbl_805D6E50 = temp_r3;
        TWindowDD__data_805D6E28 = M2C_FIELD(temp_r3, s32 *, 0);
        TWindowDD__data_805D6E2C = M2C_FIELD(temp_r3, s32 *, 4);
        TWindowDD__data_805D6E30 = M2C_FIELD(temp_r3, s32 *, 8);
        lbl_805D6E34 = M2C_FIELD(temp_r3, s32 *, 0xC);
        lbl_805D6E38 = 0x11A;
        lbl_805D6E3C = 0x12;
        return;
    default:
        temp_r3_2 = fn_800F9990(lbl_80478660);
        lbl_805D6E54 = temp_r3_2;
        TWindowDD__data_805D6E28 = M2C_FIELD(temp_r3_2, s32 *, 0);
        TWindowDD__data_805D6E2C = M2C_FIELD(temp_r3_2, s32 *, 4);
        TWindowDD__data_805D6E30 = M2C_FIELD(temp_r3_2, s32 *, 8);
        lbl_805D6E34 = M2C_FIELD(temp_r3_2, s32 *, 0xC);
        TWindowDD__data_805D6E40 = M2C_FIELD(temp_r3_2, s32 *, 0x10);
        TWindowDD__data_805D6E48 = M2C_FIELD(temp_r3_2, s32 *, 0x14);
        TWindowDD__data_805D6E44 = M2C_FIELD(temp_r3_2, s32 *, 0x18);
        lbl_805D6E38 = 0x126;
        lbl_805D6E3C = 0x13;
        return;
    case 4:
        temp_r3_3 = fn_800F9990(lbl_80478670);
        lbl_805D6E58 = temp_r3_3;
        TWindowDD__data_805D6E28 = M2C_FIELD(temp_r3_3, s32 *, 0);
        TWindowDD__data_805D6E2C = M2C_FIELD(temp_r3_3, s32 *, 4);
        TWindowDD__data_805D6E30 = M2C_FIELD(temp_r3_3, s32 *, 8);
        lbl_805D6E34 = M2C_FIELD(temp_r3_3, s32 *, 0xC);
        TWindowDD__data_805D6E40 = M2C_FIELD(temp_r3_3, s32 *, 0x10);
        TWindowDD__data_805D6E48 = M2C_FIELD(temp_r3_3, s32 *, 0x18);
        TWindowDD__data_805D6E44 = M2C_FIELD(temp_r3_3, s32 *, 0x14);
        lbl_805D6E4C = M2C_FIELD(temp_r3_3, s32 *, 0x20);
        lbl_805D6E38 = 0x126;
        lbl_805D6E3C = 0x13;
        return;
    case 2:
        temp_r3_4 = fn_800F9990(lbl_80478680);
        lbl_805D6E5C = temp_r3_4;
        TWindowDD__data_805D6E28 = M2C_FIELD(temp_r3_4, s32 *, 0);
        TWindowDD__data_805D6E2C = M2C_FIELD(temp_r3_4, s32 *, 4);
        TWindowDD__data_805D6E30 = M2C_FIELD(temp_r3_4, s32 *, 8);
        lbl_805D6E34 = M2C_FIELD(temp_r3_4, s32 *, 0xC);
        TWindowDD__data_805D6E40 = M2C_FIELD(temp_r3_4, s32 *, 0x10);
        TWindowDD__data_805D6E44 = M2C_FIELD(temp_r3_4, s32 *, 0x14);
        TWindowDD__data_805D6E48 = M2C_FIELD(temp_r3_4, s32 *, 0x18);
        lbl_805D6E38 = 0x126;
        lbl_805D6E3C = 0x13;
        return;
    case 3:
        temp_r3_5 = fn_800F9990(lbl_80478690);
        lbl_805D6E60 = temp_r3_5;
        TWindowDD__data_805D6E28 = M2C_FIELD(temp_r3_5, s32 *, 0);
        TWindowDD__data_805D6E2C = M2C_FIELD(temp_r3_5, s32 *, 4);
        TWindowDD__data_805D6E30 = M2C_FIELD(temp_r3_5, s32 *, 8);
        lbl_805D6E34 = M2C_FIELD(temp_r3_5, s32 *, 0xC);
        TWindowDD__data_805D6E40 = M2C_FIELD(temp_r3_5, s32 *, 0x10);
        TWindowDD__data_805D6E48 = M2C_FIELD(temp_r3_5, s32 *, 0x18);
        TWindowDD__data_805D6E44 = M2C_FIELD(temp_r3_5, s32 *, 0x14);
        lbl_805D6E38 = 0x127;
        lbl_805D6E3C = 0x13;
        return;
    }
}

s32 TWindowDD__sub_80346DB8(s32 arg0) {
  s32 temp_r3;
  s32 var_r31;
  s32 var_r30;
  s32 var_r3;
  var_r30 = arg0;
  var_r31 = 0;
  temp_r3 = TWindowDD__sub_80348398();
  switch (temp_r3)
  {
    case 0:
      var_r31 = 1;
      break;
    case 1:
      var_r31 = 3;
      if (var_r30)
    {
    }
      break;
    case 2:
      var_r31 = 5;
      break;
    case 3:
      var_r31 = 7;
      break;
    case 4:
      var_r31 = 9;
      break;
    case 5:
      var_r31 = 0xB;
      break;
  }
  var_r3 = var_r30;
  var_r30 = 0;
  if (TWindowDD__sub_80346F30((u8 *)((int) var_r3)) != 0)
  {
    var_r30 = 1;
  }
  var_r3 = var_r31 + var_r30;
  return var_r3;
}

void render__9TWindowDDFv(void) {  }

s16 TWindowDD_read_indexed_value(s32 entry_index, s32 value_index) {
    s16 result;
    TWindowDDValueList *entry;
    result = -1;
    entry = (TWindowDDValueList *)get_entry__9TWindowDDFi(entry_index);
    if (entry != NULL) {
        if ((value_index < 0) || (value_index >= entry->count)) {
            result = -1;
        } else {
            result = entry->values[value_index];
        }
    }
    return result;
}

s16 TWindowDD_read_resolved_value(s32 entry_id, s32 value_index) {
    s16 result;
    TWindowDDValueList *entry;
    result = -1;
    entry = (TWindowDDValueList *)get_element_ptr__9TWindowDDFi(entry_id);
    if (entry != NULL) {
        if ((value_index < 0) || (value_index >= entry->count)) {
            result = -1;
        } else {
            result = entry->values[value_index];
        }
    }
    return result;
}

s32 TWindowDD__sub_80346F30(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x1C) != -1;
}

}
