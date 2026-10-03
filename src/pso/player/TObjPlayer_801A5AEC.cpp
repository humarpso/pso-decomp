#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_801A5EC4_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270
{
  M2C_UNK value;
  u8 remaining[0xAC];
};

typedef s32 M2C_UNK;
struct RecoveredGlobal_801A5EC4_lbl_8050E208;
struct Pad_801A5C4C {
    u8 pad0[0x20];
    u32 hold;
    u8 pad24[0x50 - 0x24];
};

struct Masks_801A5C4C { u32 m[4]; };

struct Src_801A5F1C {
    u8 pad0[8];
    u32 b0, b1, b2, b3;
    u16 trig_l;
    u16 trig_r;
    s16 sx, sy, cx, cy;
};

struct Pad_801A5F1C {
    u32 hold;
    u32 rel;
    u32 press;
    u32 up;
    u16 trig_l;
    u16 trig_r;
    s16 sx, sy, cx, cy;
    s32 ang0;
    s32 ang1;
    f32 mag0;
    f32 mag1;
    s16 rep[14];
    u32 prev_hold;
    u32 prev_press;
};

struct Set_801A5F1C {
    Src_801A5F1C *src[4];
    s32 status[4];
    Pad_801A5F1C pads[4];
};

struct Obj_801A5F1C { u8 pad0[0x94]; s32 base[4]; };

extern "C" {
M2C_UNK check_and_read__16TKeyBoardControlFi(void *);
void TKeyBoardControl__sub_801A5EA0(u8 arg0);
s32 is_split_screen();
M2C_UNK TKeyBoardControl__sub_80132650(void *);
M2C_UNK TKeyBoardControl__sub_801A6910(int);
M2C_UNK update_button_hold_counters(int);
extern RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
extern RecoveredGlobal_801A5EC4_lbl_8050E208 lbl_8050E208;
void TKeyBoardControl__sub_801A5EC4(void);
s32 TKeyBoardControl__sub_80132310(s32);
u8 get_key_state_2__16TKeyBoardControlFPv(void *);
u8 TKeyBoardControl__sub_8013239C(void *, int);
extern RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
s32 TKeyBoardControl__sub_801A5B00(void);
s32 check_reset_button__16TKeyBoardControlFv();
void reset_system();
s32 DVDCheckDisk();
extern s32 lbl_805D49B4;
extern u8 lbl_805D5D09;
s32 func_801A5E54__Fv(void);
s32 check_reset_button__16TKeyBoardControlFv();
M2C_UNK PADRecalibrate(u32);
extern Masks_801A5C4C lbl_804469D8;
extern const f64 lbl_804469E8[];
extern RecoveredGlobal_801A5EC4_lbl_8050E208 lbl_8050E208;
extern u32 lbl_8050E568[];
extern u8 lbl_805D5D09;
extern s8 lbl_805D5D0C[4];
extern const f32 lbl_805DC0B4;
void TKeyBoardControl__sub_801A5C4C(void);
s32 is_split_screen();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 newton_sqrtf(f32);
void TKeyBoardControl__sub_801A5C4C(void);
void TKeyBoardControl__sub_801A6510(void);
void fn_801A6A5C(u8 *arg0, s16 arg1, s16 arg2, s32 arg3);
void fn_801A6AF4(u8 *arg0, s16 arg1, s16 arg2, s32 arg3);
M2C_UNK update_button_hold_counters(int);
extern const f64 lbl_80446A00[];
extern Src_801A5F1C lbl_804C2308;
extern RecoveredGlobal_801A5EC4_lbl_8050E208 lbl_8050E208;
extern u8 lbl_8050E3B8[];
extern s32 lbl_805D34C8;
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805DC0B8;
extern const f32 lbl_805DC0BC;
extern const f32 lbl_805DC0C0;
extern const f32 lbl_805DC0C4;
extern const f32 lbl_805DC0C8;
void controller_stuff__Fv(void);
}

extern "C" {

void reset_fields__10TObjPlayerFPv(void* p);

void reset_fields__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; *(s32*)((char*)p + 0x8) = 0; }

typedef struct RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270 RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270;
typedef char RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270_size[((sizeof(RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270)) == 0xB0) ? (1) : (-1)];
s32 TKeyBoardControl__sub_801A5B00(void) {
  short new_var;
  s32 temp_r3;
  s32 var_r3;
  u8 temp_r31;
  if (get_key_state_2__16TKeyBoardControlFPv(&(*(RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value) == 0)
  {
    return 0;
  }
  var_r3 = TKeyBoardControl__sub_8013239C((void *) (&(*(RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value), (int) 0);
  temp_r31 = var_r3;
  temp_r3 = TKeyBoardControl__sub_80132310((s32) (&(*(RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value));
  if ((((s32) temp_r31) >= 0x2A) && (((s32) temp_r31) <= 0x32))
  {
    return temp_r31 + 7;
  }
  if ((((s32) temp_r31) >= 0x10) && (((s32) temp_r31) <= 0x29))
  {
    var_r3 = temp_r31 + 0x51;
    if (temp_r3 != 0)
    {
      return temp_r31 + 0x31;
    }
    return var_r3;
  }
  switch (temp_r31)
  {
    case 0x33:
      return 0x30;
    case 0x61:
      return 0xD;
    case 0x4C:
      return 0x1B;
    case 0x50:
      return 8;
    case 0x51:
      return (float) 9;
    case 0x3C:
      var_r3 = 0x2C;
      if (temp_r3 != 0)
    {
      return 0x3C;
    }
      return var_r3;
    case 0x3D:
      var_r3 = 0x2E;
      if (temp_r3 != 0)
    {
      return 0x3E;
    }
      return var_r3;
    case 0x39:
      var_r3 = 0x3B;
      if (temp_r3 != 0)
    {
      return 0x2B;
    }
      return var_r3;
    case 0x3A:
      var_r3 = 0x3A;
      if (new_var = temp_r3 != 0)
    {
      return 0x2A;
    }
      return var_r3;
    case 0x52:
      if (temp_r3 != 0)
    {
      return 0x5F;
    }
    default:
      var_r3 = 0;
      return var_r3;
  }
}

void TKeyBoardControl__sub_801A5C4C(void) {
    s32 i;
    s32 j;
    Masks_801A5C4C masks = lbl_804469D8;
    for (i = 0; i < 4; i++) {
        if ((((Pad_801A5C4C *)&lbl_8050E208)[i].hold & 0x40A) == 0x40A) {
            lbl_805D5D0C[i]++;
            if (lbl_804469E8[0] == (f64)lbl_805D5D0C[i]) {
                lbl_805D5D09 = 1;
                for (j = 0; j < 4; j++) {
                    PADRecalibrate(masks.m[j]);
                }
            } else if ((f64)lbl_805D5D0C[i] > lbl_804469E8[0]) {
                lbl_805D5D0C[i] = 0x10;
            }
        } else {
            lbl_805D5D0C[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if ((((Pad_801A5C4C *)&lbl_8050E208)[i].hold & 0x608) == 0x608) {
            lbl_8050E568[i]++;
            if ((f32)lbl_8050E568[i] >= lbl_805DC0B4) {
                lbl_8050E568[i] = 0;
                PADRecalibrate(masks.m[i]);
            }
        } else {
            lbl_8050E568[i] = 0;
        }
    }
    if (check_reset_button__16TKeyBoardControlFv() != 0) {
        lbl_805D5D09 = 1;
        for (j = 0; j < 4; j++) {
            PADRecalibrate(masks.m[j]);
        }
    }
}

s32 func_801A5E54__Fv(void) {
    if ((DVDCheckDisk() == 0) && (check_reset_button__16TKeyBoardControlFv() != 0)) {
        reset_system();
    }
    return (lbl_805D49B4 != 0) ? 0 : lbl_805D5D09;
}

void TKeyBoardControl__sub_801A5EA0(u8 arg0) {
    check_and_read__16TKeyBoardControlFi((void *) (arg0));
}
typedef char RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_801A5EC4_lbl_8050E208_size[sizeof(RecoveredGlobal_801A5EC4_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TKeyBoardControl__sub_801A5EC4(void) {
    u8 *temp_r31;
    TKeyBoardControl__sub_80132650((void *) (&TKeyBoardControl__data_80506270.value));
    if (is_split_screen() == 0) {
        temp_r31 = (u8 *)&lbl_8050E208.value + 0x160;
        TKeyBoardControl__sub_801A6910((int) (temp_r31));
        update_button_hold_counters((int) (temp_r31));
    }
}
#pragma push
#pragma fp_contract on
void controller_stuff__Fv(void) {
    s32 i;
    Src_801A5F1C **pp;
    Set_801A5F1C *set;
    Pad_801A5F1C *pad;
    u32 old;
    s32 k;
    s32 j;
    Src_801A5F1C *src;
    s32 a;
    s32 b;
    f32 fx;
    f32 fy;
    f32 gx;
    f32 gy;
    f32 m;
    if (lbl_805D34C8 != 0) {
        TKeyBoardControl__sub_801A6510();
        for (k = 0; k < 2; k++) {
            if (k == 0) {
                pad = ((Set_801A5F1C *)&lbl_8050E208)->pads;
                pp = (Src_801A5F1C **)&lbl_8050E208;
                set = (Set_801A5F1C *)&lbl_8050E208;
            } else {
                pad = ((Set_801A5F1C *)lbl_8050E3B8)->pads;
                pp = (Src_801A5F1C **)lbl_8050E3B8;
                set = (Set_801A5F1C *)lbl_8050E3B8;
            }
            for (i = 0; i < 4; pad++, i++) {
                src = *pp++;
                if (set->status[i] == 1) {
                    old = pad->hold;
                    pad->hold = src->b0;
                    pad->rel = src->b1;
                    pad->press = src->b2;
                    pad->up = src->b3;
                    pad->trig_r = src->trig_r;
                    pad->trig_l = src->trig_l;
                    fx = src->sx;
                    pad->sx = fx;
                    fy = src->sy;
                    pad->sy = fy;
                    gx = src->cx;
                    pad->cx = gx;
                    gy = -src->cy;
                    pad->cy = gy;
                    if (lbl_805DC0B8 < fx && fx <= lbl_805DC0BC) {
                        fx = lbl_805DC0C0;
                        pad->sx = 0;
                    }
                    if (lbl_805DC0B8 < fy && fy <= lbl_805DC0BC) {
                        fy = lbl_805DC0C0;
                        pad->sy = 0;
                    }
                    if (lbl_805DC0B8 < gx && gx <= lbl_805DC0BC) {
                        gx = lbl_805DC0C0;
                        pad->cx = 0;
                    }
                    if (lbl_805DC0B8 < gy && gy <= lbl_805DC0BC) {
                        gy = lbl_805DC0C0;
                        pad->cy = 0;
                    }
                    m = newton_sqrtf(fx * fx + fy * fy);
                    if (lbl_805DC0C0 != m) {
                        m *= lbl_805DC0C4;
                    }
                    if (m > lbl_805DC0C8) {
                        m = lbl_805DC0C8;
                    }
                    pad->mag0 = m;
                    m = newton_sqrtf(gx * gx + gy * gy);
                    if (lbl_805DC0C0 != m) {
                        m *= lbl_805DC0C4;
                    }
                    if (m > lbl_805DC0C8) {
                        m = lbl_805DC0C8;
                    }
                    pad->mag1 = m;
                    pad->hold &= ~0x30000;
                    pad->rel &= ~0x30000;
                    pad->press &= ~0x30000;
                    pad->up &= ~0x30000;
                    if (pad->trig_l > 0x70) {
                        pad->hold |= 0x10000;
                        if (!(old & 0x10000)) {
                            pad->press |= 0x10000;
                        }
                    } else {
                        pad->rel |= 0x10000;
                        if (old & 0x10000) {
                            pad->up |= 0x10000;
                        }
                    }
                    if (pad->trig_r > 0x70) {
                        pad->hold |= 0x20000;
                        if (!(old & 0x20000)) {
                            pad->press |= 0x20000;
                        }
                    } else {
                        pad->rel |= 0x20000;
                        if (old & 0x20000) {
                            pad->up |= 0x20000;
                        }
                    }
                    old = pad->prev_hold;
                    pad->prev_hold = pad->hold &= 0xC30FFFFF;
                    pad->prev_press = pad->press &= 0xC30FFFFF;
                    fn_801A6AF4((u8 *)pad, pad->sx, pad->sy, old);
                    fn_801A6A5C((u8 *)pad, pad->cx, pad->cy, old);
                    if (lbl_805D4DF0 != NULL) {
                        if (is_split_screen() != 0) {
                            a = ((Obj_801A5F1C *)lbl_805D4DF0)->base[i] + (s32)(lbl_80446A00[0] * get_ad_end_text_start__10TObjPlayerFv(fx, fy));
                            b = ((Obj_801A5F1C *)lbl_805D4DF0)->base[i] + (s32)(lbl_80446A00[0] * get_ad_end_text_start__10TObjPlayerFv(gx, gy));
                        } else {
                            a = *(s32 *)(lbl_805D4DF0 + 0x94) + (s32)(lbl_80446A00[0] * get_ad_end_text_start__10TObjPlayerFv(fx, fy));
                            b = *(s32 *)(lbl_805D4DF0 + 0x94) + (s32)(lbl_80446A00[0] * get_ad_end_text_start__10TObjPlayerFv(gx, gy));
                        }
                    } else {
                        a = (s32)(lbl_80446A00[0] * get_ad_end_text_start__10TObjPlayerFv(fx, fy));
                        b = (s32)(lbl_80446A00[0] * get_ad_end_text_start__10TObjPlayerFv(gx, gy));
                    }
                    pad->ang0 = (u16)a;
                    pad->ang1 = (u16)b;
                    update_button_hold_counters((int)pad);
                } else {
                    pad->hold = lbl_804C2308.b0;
                    pad->rel = lbl_804C2308.b1;
                    pad->press = lbl_804C2308.b2;
                    pad->up = lbl_804C2308.b3;
                    pad->trig_r = lbl_804C2308.trig_r;
                    pad->trig_l = lbl_804C2308.trig_l;
                    pad->sx = lbl_804C2308.sx;
                    pad->sy = lbl_804C2308.sy;
                    pad->cx = lbl_804C2308.cx;
                    pad->cy = lbl_804C2308.cy;
                    pad->ang0 = 0;
                    pad->mag0 = lbl_805DC0C0;
                    for (j = 0; j < 14; j++) {
                        pad->rep[j] = 0;
                    }
                    pad->prev_hold = 0;
                    pad->prev_press = 0;
                }
            }
        }
        TKeyBoardControl__sub_801A5C4C();
    }
}
#pragma pop

}
