#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_801ABBAC {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * alloc_tables__6TLobbyFPvii(void *, s32, s32);
extern u8 *lbl_805D5D28;
extern u32 lbl_805D5D38;
void TObjPlayer__sub_801AB640(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 TObjEneDellBiter__sub_80087350(void *, int);
s32 TBoss1Dragon__sub_80143504(void *);
s32 TPhotonMylla__sub_80154CB4(int);
s32 TCameraCtrl__sub_801A7310(void *, int);
s32 TObjPlayer__sub_801A7680(void *);
s32 TObjPlayer__sub_801A7748(void *, int);
s32 update_state__10TSceneSoraFPv(void *);
s32 TObjPlayer__sub_801AB6A0(void *);
s32 TPhotonMagicSquare__ct(int, void *, int, void *, int, f32);
s32 TOTrapAncient01__sub_80226578(int, void *, int, int, int);
u32 __nw__7TObjectFUl(int);
extern const f32 lbl_805DC1A0;
extern const f32 lbl_805DC1A4;
extern const f32 lbl_805DC1A8;
void TObjPlayer__sub_801ABBAC(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801AB688(void* a0);
void destroy_buffers__10TObjPlayerFv(void);
M2C_UNK destroy_buffer_pair(void*, M2C_UNK);

extern u32 lbl_805D5D38;

void destroy_buffers__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5D38 != 0U) {
        destroy_buffer_pair((void*)lbl_805D5D38, 1);
    }
    lbl_805D5D38 = 0U;
}

    extern const float lbl_805DC188;

void TObjPlayer__sub_801AB640(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x14);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (alloc_tables__6TLobbyFPvii((void *) temp_r3, M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 8), 0));
    }
    (*(s32 *)&lbl_805D5D38) = var_r0;
}

void TObjPlayer__sub_801AB688(void* a0) { *(float*)((char*)a0 + 0x15c) = lbl_805DC188; *(float*)((char*)a0 + 0x160) = lbl_805DC188; *(float*)((char*)a0 + 0x164) = lbl_805DC188; *(float*)((char*)a0 + 0x168) = lbl_805DC188; }
void TObjPlayer__sub_801ABBAC(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_801ABBAC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801ABBAC, spC) == 0x4) ? 1 : -1];
    Stack_801ABBAC stack;
    s32 temp_r0;
    s32 temp_r3;
    u32 temp_r3_2;
    M2C_FIELD(arg0, s32 *, 0x1C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C8) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C8) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C4) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1C4) = 1;
        M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
        temp_r3 = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0x158)));
        if (temp_r3 != 0) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (temp_r3 + 0x38));
        }
        stack.spC += lbl_805DC1A0;
        temp_r3_2 = __nw__7TObjectFUl((int) (0xD0));
        if (temp_r3_2 != 0U) {
            TPhotonMagicSquare__ct((int) (temp_r3_2), (void *) (arg0), (int) (3), (void *) (&stack.sp8), (int) (0xFA), (f32) (lbl_805DC1A4));
        }
    }
    if ((lbl_805DC1A8 == (f32) M2C_FIELD(arg0, s32 *, 0x1C8)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1)) {
        TCameraCtrl__sub_801A7310((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0));
        TObjPlayer__sub_801A7748((void *) (arg0), (int) (2));
    }
    M2C_FIELD(arg0, s16 *, 0x1B8) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    update_state__10TSceneSoraFPv((void *) (arg0));
    TBoss1Dragon__sub_80143504((void *) (arg0));
    TObjPlayer__sub_801A7680((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C8) == 0x50) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1AC), (void *) (M2C_FIELD(arg0, s32 *, 0x148) + 0x44));
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x1AC), (int) (0x133));
        TObjPlayer__sub_801AB6A0((void *) (arg0));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C8);
    if ((temp_r0 == 0x56) || (temp_r0 == 0x5C) || (temp_r0 == 0x62) || (temp_r0 == 0x68) || (temp_r0 == 0x6E) || (temp_r0 == 0x74)) {
        TObjPlayer__sub_801AB6A0((void *) (arg0));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C4) != 0) {
        TOTrapAncient01__sub_80226578((int) (0x4002462F), (void *) (arg0), (int) (0), (int) (0), (int) (0));
    }
}

}
