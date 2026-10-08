#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Anim_80242B30 {
    s16 state;
    f32 a;
    f32 b;
} Anim_80242B30;

#include <stddef.h>
struct Stack_80242938 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
extern const f32 lbl_805DCA04;
extern const f32 lbl_805DCA08;
extern f32 lbl_805DCA0C;
f32 TAdSinglePlyChrSelectGC__sub_80242AC0(s16 *arg0);
extern const f32 lbl_805DCA04;
extern const f32 lbl_805DCA08;
extern f32 lbl_805DCA0C;
f32 TAdSinglePlyChrSelectGC__sub_80242A60(s16 *arg0);
f32 TAdSinglePlyChrSelectGC__sub_80242A60(s16 *arg0);
f32 TAdSinglePlyChrSelectGC__sub_80242AC0(s16 *arg0);
extern const f32 lbl_805DCA04;
extern const f32 lbl_805DCA08;
s32 update_rumble_pattern__23TAdSinglePlyChrSelectGCFPvPv(Anim_80242B30 *o, s16 *arg1);
f32 update_scale__15TObjBoss2TunnelFPv(void *, f32);
u8 *get_player_by_client_id(s32);
s32 is_active__12TBoss3VoloptFPv(int);
u8 *TAdSinglePlyChrSelectGC__sub_802430E8();
extern const f32 lbl_805DCA00;
void accumulate_rumble_strength__23TAdSinglePlyChrSelectGCFPvi(s16 *arg0, s32 arg1);
}

extern "C" {

void TAdSinglePlyChrSelectGC__sub_80242B24(void* p);
void TLobby__sub_80242918(void);
void clear_flag_bit2__6TLobbyFv(void);
s32 get_id__6TLobbyFPv(void* p);
void* get_sub_disp_ptr__20TWindowSubStatusDispFPv(void* p);

s32 get_id__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x0); }

extern u16 lbl_805D63FC;

void TLobby__sub_80242918(void) {
    lbl_805D63FC |= 4;
}

extern u16 lbl_805D63FC;

void clear_flag_bit2__6TLobbyFv(void) {
    lbl_805D63FC &= 0xFFFFFFFB;
}

#pragma push
#pragma fp_contract on
void accumulate_rumble_strength__23TAdSinglePlyChrSelectGCFPvi(s16 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_80242938, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80242938, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80242938, sp10) == 0x8) ? 1 : -1];
    Stack_80242938 stack;
    f32 temp_f1;
    s16 var_r3;
    u8 temp_r3_2;
    u8 *temp_r3;
    u8 *var_r30;
    s32 var_r29;
    temp_r3 = (u8 *)(get_player_by_client_id(arg1));
    if (temp_r3 != NULL) {
        var_r30 = (u8 *)(TAdSinglePlyChrSelectGC__sub_802430E8());
        var_r29 = 0;
        do {
            if ((is_active__12TBoss3VoloptFPv((int) (var_r30)) != 0) && ((temp_r3_2 = M2C_FIELD(var_r30, u8 *, 0), (((temp_r3_2 & 0x10) == 0) == 0)) || (arg1 == (s16) M2C_FIELD(var_r30, s16 *, 2)))) {
                if (temp_r3_2 & 2) {
                    stack.sp8 = M2C_FIELD(var_r30, f32 *, 4) - M2C_FIELD(temp_r3, f32 *, 0x38);
                    stack.spC = M2C_FIELD(var_r30, f32 *, 8) - M2C_FIELD(temp_r3, f32 *, 0x3C);
                    temp_f1 = M2C_FIELD(var_r30, f32 *, 0xC);
                    stack.sp10 = temp_f1 - M2C_FIELD(temp_r3, f32 *, 0x40);
                    var_r3 = (s16) -((lbl_805DCA00 * update_scale__15TObjBoss2TunnelFPv((void *) (&stack.sp8), (f32) (temp_f1))) - (f32) M2C_FIELD(var_r30, s16 *, 0x10));
                    if (var_r3 < 0xA) {
                        var_r3 = 0xA;
                    }
                    *arg0 += var_r3;
                } else {
                    *arg0 += M2C_FIELD(var_r30, s16 *, 0x10);
                }
            }
            var_r29 += 1;
            var_r30 += 0x18;
        } while (var_r29 < 0x10);
    }
}
#pragma pop

f32 TAdSinglePlyChrSelectGC__sub_80242A60(s16 *arg0) {
  float new_var;
  s16 temp_r3;
  temp_r3 = *arg0;
  if (temp_r3 <= 0)
  {
    return (*(const f32 *)&lbl_805DCA04);
  }
  if (temp_r3 >= 0x80)
  {
    return (*(const f32 *)&lbl_805DCA08);
  }
  new_var = (*(const f32 *)&lbl_805DCA08) * ((f32) temp_r3);
  return new_var * (*(const f32 *)&lbl_805DCA0C);
}

f32 TAdSinglePlyChrSelectGC__sub_80242AC0(s16 *arg0) {
  s16 temp_r0;
  float new_var;
  temp_r0 = *arg0;
  if (temp_r0 >= 0x100)
  {
    return lbl_805DCA04;
  }
  if (temp_r0 <= 0x80)
  {
    return lbl_805DCA08;
  }
  new_var = lbl_805DCA08 * ((f32) (0x100 - temp_r0));
  return new_var * lbl_805DCA0C;
}

void TAdSinglePlyChrSelectGC__sub_80242B24(void* p) { *(s16*)((char*)p + 0x0) = 0; }
s32 update_rumble_pattern__23TAdSinglePlyChrSelectGCFPvPv(Anim_80242B30 *o, s16 *arg1) {
    if (*arg1 <= 0) {
        o->a = lbl_805DCA04;
        o->b = lbl_805DCA08;
        o->state = 2;
        return 0;
    }
    switch (o->state) {
    case 1:
        o->a += TAdSinglePlyChrSelectGC__sub_80242AC0(arg1);
        if (o->a >= lbl_805DCA08) {
            o->state = 2;
            o->a -= lbl_805DCA08;
            return 0;
        }
        return 1;
    case 0:
    case 2:
    case 3:
        o->b += TAdSinglePlyChrSelectGC__sub_80242A60(arg1);
        if (o->b >= lbl_805DCA08) {
            o->state = 1;
            o->b -= lbl_805DCA08;
            return 1;
        }
        return 0;
    }
    return 0;
}

}
