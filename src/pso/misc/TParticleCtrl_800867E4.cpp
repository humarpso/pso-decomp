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

struct Ent_800868C4 { u8 data[0x98]; };

extern "C" {
s32 get_bml_model(void *, s32);
extern u8 *TParticleCtrl__data_805D4F00;
s32 get_particle_model__13TParticleCtrlFi(s32 arg0);
s32 alloc_child_particle__13TParticleCtrlFPvPvPvPv(void *, void *, void *, void *);
extern RecoveredGlobal_8008683C_lbl_804393F0 lbl_804393F0;
void generate_child_default__13TParticleCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
extern s32 lbl_805D2948;
extern Ent_800868C4 *lbl_805D4EF8;
extern Ent_800868C4 *lbl_805D4EFC;
void *__nw__7TObjectFUl(int);
void *initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(void *, void *, void *, s32, s32, s32, s32, s32);
void *create_timed_particle_emitter_with_flags(void *pos, s32 id, s32 a, s32 b, s32 c);
void *__nw__7TObjectFUl(int);
void *initialize__13TParticleCtrlFPvPviiiii(void *self, void *owner, Ent_800868C4 *entry, s32 a, s32 b, s32 c, s32 d);
extern s32 lbl_805D2948;
extern Ent_800868C4 *lbl_805D4EF8;
extern Ent_800868C4 *lbl_805D4EFC;
void *create_timed_particle_emitter(void *owner, s32 id, s32 b, s32 c);
void *__ct__13TParticleCtrlFv(void *self, void *pos, void *dir, void *ent, int a, int b, int c, int d, int e);
void *__nw__7TObjectFUl(int);
extern s32 lbl_805D2948;
extern Ent_800868C4 *lbl_805D4EF8;
extern Ent_800868C4 *lbl_805D4EFC;
void *create_timed_particle_emitter_with_angles(void *pos, void *dir, s32 id, s32 a, s32 b, s32 flags);
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
void generate_child_default__13TParticleCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_8008683C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8008683C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8008683C, sp10) == 0x8) ? 1 : -1];
    Stack_8008683C stack;
    stack.sp8 = M2C_FIELD(&lbl_804393F0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804393F0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804393F0.value, s32 *, 8);
    alloc_child_particle__13TParticleCtrlFPvPvPvPv((void *) (arg0), (void *) (arg1), (void *) (&stack.sp8), (void *) (arg2));
}

s32 get_particle_model__13TParticleCtrlFi(s32 arg0) {
    if (arg0 < 3) {
        return get_bml_model(TParticleCtrl__data_805D4F00, arg0);
    }
    return 0;
}

int get_instance__13TParticleCtrlFv(void) {  return TParticleCtrl__data_805D4F04; }
#pragma push
#pragma opt_propagation off
void *create_timed_particle_emitter_with_flags(void *pos, s32 id, s32 a, s32 b, s32 c) {
    void *p;
    s32 idx = id;
    if (lbl_805D2948 > idx) {
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(p, pos, &lbl_805D4EF8[idx], 0, a, b, 0, c);
        }
        return p;
    }
    if (lbl_805D2948 + 0x40 > idx) {
        idx -= 0x200;
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(p, pos, &lbl_805D4EFC[idx], 0, a, b, 0, c);
        }
        return p;
    }
    return 0;
}
#pragma pop

#pragma push
#pragma opt_propagation off
void *create_timed_particle_emitter(void *owner, s32 id, s32 b, s32 c) {
    void *p;
    s32 idx = id;
    if (lbl_805D2948 > idx) {
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize__13TParticleCtrlFPvPviiiii(p, owner, &lbl_805D4EF8[idx], 0, b, c, 0);
        }
        return p;
    }
    if (lbl_805D2948 + 0x40 > idx) {
        idx -= 0x200;
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize__13TParticleCtrlFPvPviiiii(p, owner, &lbl_805D4EFC[idx], 0, b, c, 0);
        }
        return p;
    }
    return 0;
}
#pragma pop

#pragma push
#pragma opt_propagation off
void *create_timed_particle_emitter_with_angles(void *pos, void *dir, s32 id, s32 a, s32 b, s32 flags) {
    void *p;
    s32 idx = id;
    if (lbl_805D2948 > idx) {
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = __ct__13TParticleCtrlFv(p, pos, dir, &lbl_805D4EF8[idx], 0, a, b, 0, flags);
        }
        return p;
    }
    if (lbl_805D2948 + 0x40 > idx) {
        idx -= 0x200;
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = __ct__13TParticleCtrlFv(p, pos, dir, &lbl_805D4EFC[idx], 0, a, b, 0, flags);
        }
        return p;
    }
    return 0;
}
#pragma pop

}
