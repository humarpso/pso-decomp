#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_801A7310 {
    s8 sp8;
    s8 sp9;
    s16 spA;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Ent_801A70C8 { s32 a; f32 b; s32 c; };

struct Ent_801A710C { u32 a; f32 b; s32 c; };

extern "C" {
s32 TCameraCtrl__sub_8006A5EC(int);
s32 set_scripted_camera_pose(int, int, void *);
s32 cache_target_and_forward__11TCameraCtrlFii(void *, int);
s32 get_global_state__14TOKeyMachine01Fv();
extern RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
extern const f32 lbl_805DC0D0;
extern const f32 lbl_805DC0D4;
void begin_photon_summon_camera(u8 *arg0, s8 arg1);
extern struct Ent_801A70C8 lbl_8050E700[32];
extern s32 lbl_805D5D1C;
extern const f32 lbl_805DC0D0;
void clear_deferred_photon_blast_hits(void);
extern struct Ent_801A710C lbl_8050E580[32];
extern s32 lbl_805D5D14;
extern const f32 lbl_805DC0D0;
void clear_photon_blast_hits(void);
}

extern "C" {

void queue_deferred_photon_blast_support(void);
void queue_photon_blast_support(void);
void reset_state_block__10TObjPlayerFPv(void* a0);
void queue_deferred_photon_blast_hit(u32 arg0, s32 arg1, s32 arg2);
extern u32 lbl_805D5D20;
void queue_photon_blast_hit(u32 identity, s32 kind, s32 allow_duplicate);
const f32 *get_photon_blast_entry__10TObjPlayerFi(s32);
extern u32 lbl_805D5D18;

    extern const float lbl_805DC0C0;
void reset_state_block__10TObjPlayerFPv(void* a0) { *(int*)((char*)a0 + 0x0) = 0; *(int*)((char*)a0 + 0x4) = -1; *(int*)((char*)a0 + 0x8) = 0; *(int*)((char*)a0 + 0xc) = 0; *(short*)((char*)a0 + 0x10) = 0; *(short*)((char*)a0 + 0x12) = 0; *(short*)((char*)a0 + 0x14) = 0; *(short*)((char*)a0 + 0x16) = 0; *(short*)((char*)a0 + 0x18) = 0; *(short*)((char*)a0 + 0x1a) = 0; *(int*)((char*)a0 + 0x1c) = 0; *(int*)((char*)a0 + 0x20) = 0; *(float*)((char*)a0 + 0x24) = lbl_805DC0C0; *(float*)((char*)a0 + 0x28) = lbl_805DC0C0; }

extern const f32 lbl_805DC0D4;

void clear_deferred_photon_blast_hits(void) {
    s32 i;
    lbl_805D5D1C = 0;
    for (i = 0; i < 32; i++) {
        lbl_8050E700[i].a = 0xFFFF;
        lbl_8050E700[i].b = lbl_805DC0D0;
        lbl_8050E700[i].c = -1;
    }
}

void clear_photon_blast_hits(void) {
    s32 i;
    lbl_805D5D14 = 0;
    for (i = 0; i < 32; i++) {
        lbl_8050E580[i].a = 0xFFFF;
        lbl_8050E580[i].b = lbl_805DC0D0;
        lbl_8050E580[i].c = -1;
    }
}

void queue_deferred_photon_blast_hit(u32 arg0, s32 arg1, s32 arg2) {
    s32 found = 0;
    if (lbl_805D5D1C < 0x20) {
        const f32 *e = get_photon_blast_entry__10TObjPlayerFi(arg1);
        if (arg2 == 0) {
            s32 i;
            for (i = 0; i < lbl_805D5D1C; i++) {
                if (arg0 == (u32)lbl_8050E700[i].a) {
                    found = 1;
                }
            }
        }
        if (found == 0) {
            lbl_8050E700[lbl_805D5D1C].c = arg1;
            lbl_8050E700[lbl_805D5D1C].b = e[0];
            lbl_8050E700[lbl_805D5D1C].a = arg0;
            lbl_805D5D20 = arg0;
            lbl_805D5D1C++;
        }
    }
}

void queue_photon_blast_hit(u32 identity, s32 kind, s32 allow_duplicate) {
    const f32 *entry;
    s32 duplicate = 0;
    s32 i;
    if (lbl_805D5D14 >= 32) {
        return;
    }
    entry = get_photon_blast_entry__10TObjPlayerFi(kind);
    if (allow_duplicate == 0) {
        for (i = 0; i < lbl_805D5D14; i++) {
            if (lbl_8050E580[i].a == identity) {
                duplicate = 1;
            }
        }
    }
    if (duplicate == 0) {
        lbl_8050E580[lbl_805D5D14].c = kind;
        lbl_8050E580[lbl_805D5D14].b = *entry;
        lbl_8050E580[lbl_805D5D14].a = identity;
        lbl_805D5D18 = identity;
        lbl_805D5D14 = lbl_805D5D14 + 1;
    }
}

void queue_deferred_photon_blast_support(void) {
    ((M2C_UNK (*)(f32))queue_deferred_photon_blast_hit)(lbl_805DC0D4);
}

extern const f32 lbl_805DC0D4;

void queue_photon_blast_support(void) {
    ((M2C_UNK (*)(f32))queue_photon_blast_hit)(lbl_805DC0D4);
}
typedef char RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
void begin_photon_summon_camera(u8 *arg0, s8 arg1) {
    typedef char sp8_offset[(offsetof(Stack_801A7310, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_801A7310, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_801A7310, spA) == 0x2) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801A7310, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_801A7310, sp10) == 0x8) ? 1 : -1];
    Stack_801A7310 stack;
    s32 temp_r3;
    stack.sp9 = arg1;
    stack.sp8 = get_global_state__14TOKeyMachine01Fv() == 0xE;
    stack.spA = 0;
    stack.spC = lbl_805DC0D0;
    stack.sp10 = lbl_805DC0D4;
    if ((M2C_FIELD(&TCameraCtrl__data_804FF628.value, s32 *, 8) & 4) || (M2C_FIELD(&TCameraCtrl__data_804FF628.value, s32 *, 8) & 8)) {
        TCameraCtrl__sub_8006A5EC((int) (5));
    }
    cache_target_and_forward__11TCameraCtrlFii((void *) (&stack.sp8), (int) (0x4222));
    temp_r3 = (long) (arg0 + 0x38);
    set_scripted_camera_pose((int) (temp_r3), (int) (temp_r3), (void *) (arg0 + 0x5C));
    M2C_FIELD(arg0, s32 *, 0xFC) = 1;
}

}
