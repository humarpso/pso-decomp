#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f64 lbl_8044ECF0;
extern const f32 lbl_805DCCB8;
extern const f32 lbl_805DCCBC;
s32 TWindowEffectParty__sub_8024F690(u8 *arg0, f32 farg0, f32 farg1);
void *__nw__7TObjectFUl(u32);
void *TWindowEffectParty__ct(void *, void *, u16, u16, s32);
extern s32 lbl_805D53A0;
void *TWindowEffectParty__sub_8024F82C(void *owner, s32 from, s32 to, u32 kind);
}

extern "C" {

void calc_effect_position__18TWindowEffectPartyFPvPv(void *arg0, void *arg1);
void set_slot_position__18TWindowEffectPartyFiiPv(s32 arg0, s32 arg1, void *arg2);
void *TWindowCtrl__sub_8024FB80(s8);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, s32);
f32 get_scale__15TWindowCtrlMainFv(s32);

extern s32 lbl_805D53A0;
extern f32 lbl_805DCCC0;

#pragma fp_contract on
s32 TWindowEffectParty__sub_8024F690(u8 *arg0, f32 farg0, f32 farg1) {
  f32 temp_f4;
  f32 temp_f5;
  s32 temp_r31;
  temp_f5 = farg1 - (*((f32 *) (((s8 *) arg0) + 0x24)));
  temp_f4 = *((f32 *) (((s8 *) arg0) + 0x20));
  temp_f4 = farg0 - temp_f4;
  if (((temp_f4 * temp_f4) + (temp_f5 * temp_f5)) < lbl_805DCCB8)
  {
    *((f32 *) (((s8 *) arg0) + 0x20)) = farg0;
 do { *((f32 *) (((s8 *) arg0) + 0x24)) = farg1; return 1; } while (0);
  }
  temp_r31 = (s32) (lbl_8044ECF0 * get_ad_end_text_start__10TObjPlayerFv((f64) temp_f5, (f64) temp_f4));
  *((f32 *) (((s8 *) arg0) + 0x20)) = (f32) ((lbl_805DCCBC * TBoss8Dragon__sub_803D64DC(temp_r31)) + (*((f32 *) (((s8 *) arg0) + 0x20))));
  *((f32 *) (((s8 *) arg0) + 0x24)) = (f32) ((lbl_805DCCBC * TBoss8Dragon__sub_803D64C0(temp_r31)) + (*((f32 *) (((s8 *) arg0) + 0x24))));
  return 0;
}

void calc_effect_position__18TWindowEffectPartyFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (lbl_805DCCC0 / get_scale__15TWindowCtrlMainFv(lbl_805D53A0));
}

extern const f32 lbl_805DCCC4;
extern const f32 lbl_805DCCC8;
extern const f32 lbl_805DCCCC;
extern const f32 lbl_805DCCD0;

void set_slot_position__18TWindowEffectPartyFiiPv(s32 arg0, s32 arg1, void *arg2) {
    void *temp_r3;
    (void)arg0;

    if (arg1 <= 0) {
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg2, get_window_layout_position(0x1C));
        M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg2, f32 *, 0) + lbl_805DCCC4);
        M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg2, f32 *, 4) + lbl_805DCCC8);
        return;
    }
    temp_r3 = TWindowCtrl__sub_8024FB80((s8) (arg1 - 1));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) (lbl_805DCCCC + M2C_FIELD(temp_r3, f32 *, 0x30));
        M2C_FIELD(arg2, f32 *, 4) = (f32) (lbl_805DCCD0 + M2C_FIELD(temp_r3, f32 *, 0x34));
    }
}
void *TWindowEffectParty__sub_8024F82C(void *owner, s32 from, s32 to, u32 kind) {
    s32 id;
    u16 b;
    u16 a;
    void *w;
    if ((u16)from == (u16)to) {
        return 0;
    }
    if ((u16)from >= 4) {
        return 0;
    }
    if ((u16)to >= 4) {
        return 0;
    }
    switch (kind) {
    case 6:
    case 8:
        id = 0x99;
        break;
    case 7:
        id = 0x98;
        break;
    case 9:
        id = 0x96;
        break;
    case 10:
        id = 0x95;
        break;
    case 0:
        id = 0x97;
        break;
    default:
        return 0;
    }
    a = from - lbl_805D53A0;
    if (a & 0xFFFC) {
        a += 4;
    }
    b = to - lbl_805D53A0;
    if (b & 0xFFFC) {
        b += 4;
    }
    w = __nw__7TObjectFUl(0x34);
    if (w != 0) {
        w = TWindowEffectParty__ct(w, owner, a, b, id);
    }
    return w;
}

}
