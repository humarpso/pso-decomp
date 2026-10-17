#include "types.h"

typedef struct Anim_80242B30 {
    s16 state;
    f32 a;
    f32 b;
} Anim_80242B30;

#include <stddef.h>
#include "pso/misc/TLobby.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/misc/TWindowSubStatusDisp.h"
struct Stack_80242938 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
extern const f32 lbl_805DCA04;
extern const f32 lbl_805DCA08;
extern f32 lbl_805DCA0C;
f32 update_scale__15TObjBoss2TunnelFv(void *, f32);
void *get_player_by_client_id(s32 i);
s32 *get_pad_rumble_effect_slots(void);
extern const f32 lbl_805DCA00;
void TAdSinglePlyChrSelectGC__sub_80242B24(void* p);
void TLobby__sub_80242918(void);

s32 TLobby::get_id() { return *(s32 *)&this->m_name; }

extern u16 lbl_805D63FC;

void TLobby__sub_80242918(void) {
    lbl_805D63FC |= 4;
}

void TLobby::clear_flag_bit2() {
    lbl_805D63FC &= 0xFFFFFFFB;
}

#pragma push
#pragma fp_contract on
void TAdSinglePlyChrSelectGC::accumulate_rumble_strength(s16 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_80242938, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80242938, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80242938, sp10) == 0x8) ? 1 : -1];
    Stack_80242938 stack;
    f32 temp_f1;
    s16 var_r3;
    u8 temp_r3_2;
    u8 *player;
    u8 *var_r30;
    s32 var_r29;
    player = (u8 *)(get_player_by_client_id(arg1));
    if (player != NULL) {
        var_r30 = (u8 *)(get_pad_rumble_effect_slots());
        var_r29 = 0;
        do {
            if ((((TBoss3Volopt *)var_r30)->is_active() != 0) && ((temp_r3_2 = *(u8 *)((s8 *)var_r30 + 0), (((temp_r3_2 & 0x10) == 0) == 0)) || (arg1 == (s16) *(s16 *)((s8 *)var_r30 + 2)))) {
                if (temp_r3_2 & 2) {
                    stack.sp8 = *(f32 *)((s8 *)var_r30 + 4) - *(f32 *)((s8 *)player + 0x38);
                    stack.spC = *(f32 *)((s8 *)var_r30 + 8) - *(f32 *)((s8 *)player + 0x3C);
                    temp_f1 = *(f32 *)((s8 *)var_r30 + 0xC);
                    stack.sp10 = temp_f1 - *(f32 *)((s8 *)player + 0x40);
                    var_r3 = (s16) -((lbl_805DCA00 * update_scale__15TObjBoss2TunnelFv((void *) (&stack.sp8), (f32) (temp_f1))) - (f32) *(s16 *)((s8 *)var_r30 + 0x10));
                    if (var_r3 < 0xA) {
                        var_r3 = 0xA;
                    }
                    *arg0 += var_r3;
                } else {
                    *arg0 += *(s16 *)((s8 *)var_r30 + 0x10);
                }
            }
            var_r29 += 1;
            var_r30 += 0x18;
        } while (var_r29 < 0x10);
    }
}
#pragma pop

f32 TAdSinglePlyChrSelectGC::calc_rumble_strength(s16 *arg0) {
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

f32 TAdSinglePlyChrSelectGC::calc_rumble_intensity(s16 *arg0) {
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
s32 TAdSinglePlyChrSelectGC::update_rumble_pattern(s16 *arg1) {
    Anim_80242B30 *o = (Anim_80242B30 *)this;
    if (*arg1 <= 0) {
        o->a = lbl_805DCA04;
        o->b = lbl_805DCA08;
        o->state = 2;
        return 0;
    }
    switch (o->state) {
    case 1:
        o->a += TAdSinglePlyChrSelectGC::calc_rumble_intensity(arg1);
        if (o->a >= lbl_805DCA08) {
            o->state = 2;
            o->a -= lbl_805DCA08;
            return 0;
        }
        return 1;
    case 0:
    case 2:
    case 3:
        o->b += TAdSinglePlyChrSelectGC::calc_rumble_strength(arg1);
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
