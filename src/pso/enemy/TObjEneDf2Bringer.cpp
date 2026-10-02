#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TObjEneDf2Bringer__sub_80098DEC();
M2C_UNK clear_attack_receipts(void *);
int transition_enemy_state(void*, void*);
void TObjEneDf2Bringer__vt60(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805D9840;
void TObjEneDf2Bringer__sub_80099500(u8 *arg0);
}

extern "C" {

void TObjEneDf2Bringer__sub_800994F8(void);
void TObjEneDf2Bringer__vt59(void);
void TObjEneDf2Bringer__vt86(void);
int transition_enemy_state(void*, void*);
void TObjEneDf2Bringer__vt26(void);
void TObjEneDf2Bringer__vt61(void* p);

void TObjEneDf2Bringer__sub_800994F8(void) {  }
void TObjEneDf2Bringer__vt86(void) {  }

void TObjEneDf2Bringer__sub_80099500(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D9840);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

void TObjEneDf2Bringer__vt59(void) {  }

void TObjEneDf2Bringer__vt60(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 9) && (temp_r0 != 8)) {
        TObjEneDf2Bringer__sub_80098DEC();
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C0) & 4) {
        clear_attack_receipts((void *) (arg0));
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9) {
        transition_enemy_state((void*)((void *) (arg0)), (void*)((int) (9)));
    }
}

}
