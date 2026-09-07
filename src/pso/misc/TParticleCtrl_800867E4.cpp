#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8008683C {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8008683C_lbl_804393F0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 TObjFish__sub_8001EDC4(void *, s32);
extern u8 *TParticleCtrl__data_805D4F00;
s32 TParticleCtrl__sub_80086884(s32 arg0);
s32 TParticleCtrl__sub_80089FEC(void *, void *, void *, void *);
extern RecoveredGlobal_8008683C_lbl_804393F0 lbl_804393F0;
void TParticleCtrl__sub_8008683C(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

int get_instance__13TParticleCtrlFv(void);
void init_heap__13TParticleCtrlFPv(void *arg0);
void *__ct__5THeapFUli(void *, void *, int);
void *__nw__5THeapFUl(int);

extern void *TParticleCtrl__data_805D4EF0;

void init_heap__13TParticleCtrlFPv(void *arg0) {
    void *o;
    if (TParticleCtrl__data_805D4EF0 == NULL) {
        o = __nw__5THeapFUl(0x14);
        if (o != NULL) {
            o = __ct__5THeapFUli(o, arg0, 16);
        }
        TParticleCtrl__data_805D4EF0 = o;
    }
}

    extern int TParticleCtrl__data_805D4F04;

typedef char RecoveredGlobal_8008683C_lbl_804393F0_size[sizeof(RecoveredGlobal_8008683C_lbl_804393F0) == 0xC ? 1 : -1];
void TParticleCtrl__sub_8008683C(s32 arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_8008683C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8008683C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8008683C, sp10) == 0x8) ? 1 : -1];
    Stack_8008683C stack;
    stack.sp8 = M2C_FIELD(&lbl_804393F0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804393F0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804393F0.value, s32 *, 8);
    TParticleCtrl__sub_80089FEC((void *) (arg0), (void *) (arg1), (void *) (&stack.sp8), (void *) (arg2));
}

s32 TParticleCtrl__sub_80086884(s32 arg0) {
    if (arg0 < 3) {
        return TObjFish__sub_8001EDC4(TParticleCtrl__data_805D4F00, arg0);
    }
    return 0;
}

int get_instance__13TParticleCtrlFv(void) {  return TParticleCtrl__data_805D4F04; }

}
