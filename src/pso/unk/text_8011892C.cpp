#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
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
#define M2C_BITWISE(type, expr) ((type)(expr))

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
void TItemProUnit__vt12(u8 *arg0);
s32 get_id__13TItemProArmorFPv(void *);
s32 construct_timer_event__10TObjPlayerFPv(int, int, void *, int);
s32 init_item_timer_event__10TObjPlayerFPv(int, int, void *, int);
s32 init_timer_event__12TItemProUnitFPv(int, int, void *, int);
s32 alloc__13TItemProArmorFi(int);
extern const f32 lbl_805DABFC;
void TItemProUnit__vt42(u8 *arg0);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);
extern const f32 TItemProUnit__data_805DABF8;
extern const f32 lbl_805DAC00;
void TItemProUnit__sub_80118D58(u8 *arg0);
void TItemData__sub_8010CDC8(Out_80118958 *out, s16 v);
void TItemProUnit__vt16(Self_80118958 *self, Out_80118958 *out);
f32 TItemProUnit__sub_8011901C(void *);
void set_evp__12TItemProUnitFPvf(void *, f32);
void TItemProUnit__vt14(Self_80118A78 *self);
u8 get_technique_learn_limit(u8, u8);
u8 fn_801D9870(void *, s16);
void set_technique_level_entry(void *, s16, u8);
void TItemProUnit__vt46(Unit_80118AD4 *self);
void set_evp__12TItemProUnitFPvf(void *, f32);
u8 fn_801D9870(void *, s16);
void set_technique_level_entry(void *, s16, u8);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern const f32 TItemProUnit__data_805DABF8;
void TItemProUnit__vt47(u8 *arg0);
}

extern "C" {

struct VItemProUnit_8011892C {
    char pad[0x18];
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
    virtual void m17(s8);
};

u8 *TItemProUnit__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
void TItemProUnit__vt43(void *arg0);
void TItem__sub_8011892C(void);
u8 *lookup_item_pmt_record(void *);
M2C_UNK TItemEquipBase__ct();
s16 get_field6_bswap__9TItemDataFPv(void *);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);

void TItem__sub_8011892C(void) {  }

void TItemProUnit__vt12(u8 *arg0) {
    s16 temp_r0;
    s16 temp_r4;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x1BE);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x1BC);
    if ((temp_r0 < temp_r4) || (temp_r4 < -temp_r0)) {
        M2C_FIELD(arg0, s16 *, 0x1BC) = 0;
    }
}

void TItemProUnit__vt16(Self_80118958 *self, Out_80118958 *out) {
    out->b4 = (s8)self->m31() - 9;
    TItemData__sub_8010CDC8(out, self->s1bc);
}

void TItemProUnit__vt47(u8 *arg0) {
    s32 var_r30;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x18C) == 0x13) {
        set_evp__12TItemProUnitFPvf((void *)(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC), TItemProUnit__data_805DABF8);
    }
    var_r30 = 0;
    do {
        set_technique_level_entry((void *)(M2C_FIELD(arg0, s32 *, 0xF0) + 0x428), (s16) var_r30, (u8) (fn_801D9870((void *)(M2C_FIELD(arg0, s32 *, 0xF0) + 0x428), (s16) var_r30) - ((PU_801189AC *)arg0)->arr[var_r30]));
        var_r30 += 1;
    } while (var_r30 != 0x13);
    memset(arg0 + 0x192, 0, 0x26);
}

void TItemProUnit__vt43(void *arg0) {
    struct VObj_80118A48_8011892C *o = (struct VObj_80118A48_8011892C *)arg0;
    o->m17(9);
}

extern M2C_UNK __vt__12TItemProUnit[];
extern s32 lbl_805D2C40;
extern const f32 TItemProUnit__data_805DABF8;

void TItemProUnit__vt14(Self_80118A78 *self) {
    if (self->s18c == 0x13) {
        if (TItemProUnit__sub_8011901C(self->data->unit) < self->evp) {
            set_evp__12TItemProUnitFPvf(self->data->unit, self->evp);
        }
    }
}

#pragma push
#pragma opt_common_subs off
void TItemProUnit__vt46(Unit_80118AD4 *self) {
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
            v = fn_801D9870(self->owner->f428, i);
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

void TItemProUnit__vt42(u8 *arg0) {
  s16 temp_r0;
  s32 temp_r3;
  s32 temp_r3_2;
  s32 temp_r3_3;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x18C));
  switch (temp_r0)
  {
    case 15:
      if (((u32) (*((u32 *) (((s8 *) arg0) + 0x174)))) != 0U)
    {
      temp_r3 = alloc__13TItemProArmorFi((int) 0x2C);
      if (temp_r3 != 0)
      {
        init_item_timer_event__10TObjPlayerFPv((int) temp_r3, (int) (*((u32 *) (((s8 *) arg0) + 0x174))), (void *) get_id__13TItemProArmorFPv((void *) arg0), (int) ((s32) (lbl_805DABFC * ((f32) (*((s16 *) (((s8 *) arg0) + 0x18E)))))));
      }
    }
      return;
      return;
    case 16:
      if (((u32) (*((u32 *) (((s8 *) arg0) + 0x174)))) != 0U)
    {
      temp_r3_2 = alloc__13TItemProArmorFi((int) 0x2C);
      if (temp_r3_2 != 0)
      {
        construct_timer_event__10TObjPlayerFPv((int) temp_r3_2, (int) (*((u32 *) (((s8 *) arg0) + 0x174))), (void *) get_id__13TItemProArmorFPv((void *) arg0), (int) ((s32) (lbl_805DABFC * ((f32) (*((s16 *) (((s8 *) arg0) + 0x18E)))))));
        return;
      }
    }
      break;
    case 17:
      if (((u32) (*((u32 *) (((s8 *) arg0) + 0x174)))) != 0U)
    {
      temp_r3_3 = alloc__13TItemProArmorFi((int) 0x2C);
      if (temp_r3_3 != 0)
      {
        init_timer_event__12TItemProUnitFPv((int) temp_r3_3, (int) (*((u32 *) (((s8 *) arg0) + 0x174))), (void *) get_id__13TItemProArmorFPv((void *) arg0), (int) ((s32) (lbl_805DABFC * ((f32) (*((s16 *) (((s8 *) arg0) + 0x18E)))))));
      }
    }
      break;
  }
}

void TItemProUnit__sub_80118D58(u8 *arg0) {
    s16 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x18C);
    switch (temp_r4) {
    case 18:
        M2C_FIELD(arg0, s16 *, 0x190) = (s16) M2C_FIELD(arg0, s16 *, 0x18E);
        return;
    case 20:
        set_flags__10TObjPlayerFPvUi((void *) ((u8 *)(arg0) + 0x178), (int) (8));
        return;
    case 21:
        set_flags__10TObjPlayerFPvUi((void *) ((u8 *)(arg0) + 0x178), (int) (2));
        return;
    case 19:
        M2C_FIELD(arg0, f32 *, 0x1B8) = (f32) (TItemProUnit__data_805DABF8 + ((f32) M2C_FIELD(arg0, s16 *, 0x18E) / lbl_805DAC00));
        return;
    case 22:
        set_flags__10TObjPlayerFPvUi((void *) ((u8 *)(arg0) + 0x178), (int) (0x80));
        return;
    case 23:
        set_flags__10TObjPlayerFPvUi((void *) ((u8 *)(arg0) + 0x178), (int) (0x200));
        return;
    case 24:
        set_flags__10TObjPlayerFPvUi((void *) ((u8 *)(arg0) + 0x178), (int) (0x800));
        return;
    case 25:
        set_flags__10TObjPlayerFPvUi((void *) ((u8 *)(arg0) + 0x178), (int) (0x2000));
        return;
    case 26:
        set_flags__10TObjPlayerFPvUi((void *) ((u8 *)(arg0) + 0x178), (int) (0x8000));
        return;
    case 27:
        set_flags__10TObjPlayerFPvUi((void *) ((u8 *)(arg0) + 0x178), (int) (0x20000));
    default:
        return;
    }
}

u8 *TItemProUnit__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    s16 temp_r0;
    u8 *temp_r3;

    TItemEquipBase__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TItemProUnit;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C40;
    ((VItemProUnit_8011892C *)arg0)->m17((s8) (M2C_FIELD(arg2, u8 *, 4) + 9));
    M2C_FIELD(arg0, s16 *, 0x190) = 0;
    M2C_FIELD(arg0, f32 *, 0x1B8) = (f32) TItemProUnit__data_805DABF8;
    temp_r3 = lookup_item_pmt_record(arg2);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s16 *, 0x18C) = (s16) M2C_FIELD(temp_r3, s16 *, 8);
        M2C_FIELD(arg0, s16 *, 0x18E) = (s16) M2C_FIELD(temp_r3, s16 *, 0xA);
        M2C_FIELD(arg0, s16 *, 0x1BE) = (s16) (M2C_FIELD(temp_r3, s16 *, 0xC) * 2);
    } else {
        M2C_FIELD(arg0, s16 *, 0x18C) = 0;
        M2C_FIELD(arg0, s16 *, 0x18E) = 0;
        M2C_FIELD(arg0, s16 *, 0x1BE) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x1BC) = get_field6_bswap__9TItemDataFPv(arg2);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x1BC);
    if ((temp_r0 <= -0xA) || (temp_r0 >= 0xA)) {
        M2C_FIELD(arg0, s16 *, 0x1BC) = 0;
    }
    memset(arg0 + 0x192, 0, 0x26);
    TItemProUnit__sub_80118D58((u8 *)(arg0));
    return arg0;
}

}
