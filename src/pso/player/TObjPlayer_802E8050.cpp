#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_802E8274 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
};

struct RecoveredGlobal_802E8274_lbl_80472CB0 { M2C_UNK value; u8 remaining[0x50]; };
typedef char RecoveredGlobal_802E8274_lbl_80472CB0_size[sizeof(RecoveredGlobal_802E8274_lbl_80472CB0) == 0x54 ? 1 : -1];

struct RecoveredGlobal_802E8274_lbl_804E3BFC { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_802E8274_lbl_804E3BFC_size[sizeof(RecoveredGlobal_802E8274_lbl_804E3BFC) == 0x30 ? 1 : -1];

extern "C" {
s32 TObjPlayer__sub_803D8960(int, void *, void *, int);
s32 TObjPlayer__sub_803D898C(void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
f32 TObjPlayer__sub_803D9884(void *, void *);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_802E8274_lbl_80472CB0 lbl_80472CB0;
extern RecoveredGlobal_802E8274_lbl_804E3BFC lbl_804E3BFC;
extern s32 lbl_805D691C;
extern s32 lbl_805D6920;
extern s32 lbl_805D6924;
extern s32 lbl_805D6928;
extern s32 lbl_805D692C;
extern s32 lbl_805D6930;
extern s32 lbl_805D6934;
extern s32 lbl_805D6944;
extern const f32 lbl_805DEA10;
void TObjPlayer__sub_802E8274(void);
}

extern "C" {

void TObjPlayer__sub_802E80A0(void);
void TObjPlayer__sub_802E8234(u8 *arg0);
void draw_effect__10TObjPlayerFv(void);
void notify_fish_obj__10TObjPlayerFPv(void* a0);
void queue_boss_effect__10TObjPlayerFPv(void* a0);
int TObjFish__sub_8001ED9C(void*, void*);
int TObjFish__sub_8001EDB0(void*, void*);
int TObjFish__sub_8001EDC4(void*, void*);
int set_global_param__8TObjFishFi(void);

    extern int lbl_805D6918;
void notify_fish_obj__10TObjPlayerFPv(void* a0) { TObjFish__sub_8001ED9C((void*)(lbl_805D6918), a0); }

    extern int lbl_805D6918;
void queue_boss_effect__10TObjPlayerFPv(void* a0) { TObjFish__sub_8001EDC4((void*)(lbl_805D6918), a0); }

    extern int lbl_805D6918;
void TObjPlayer__sub_802E80A0(void) { TObjFish__sub_8001EDB0((void*)(lbl_805D6918), (void*)0); }

    extern int lbl_805D6918;
void draw_effect__10TObjPlayerFv(void) { TObjFish__sub_8001EDB0((void*)(lbl_805D6918), (void*)0); set_global_param__8TObjFishFi(); }

extern s32 lbl_805D691C;
extern s32 lbl_805D6920;
extern s32 lbl_805D6924;
extern s32 lbl_805D6928;
extern s32 lbl_805D692C;
extern s32 lbl_805D6930;
extern s32 lbl_805D6934;
extern s32 lbl_805D6944;

void TObjPlayer__sub_802E8234(u8 *arg0) {
    lbl_805D691C = 0;
    lbl_805D6924 = M2C_FIELD(arg0, s32 *, 0x628);
    lbl_805D6920 = 0;
    lbl_805D6928 = (long) (arg0 + 0x3EC);
    lbl_805D6930 = M2C_FIELD(arg0, s32 *, 0x6D8);
    lbl_805D6934 = M2C_FIELD(arg0, s32 *, 0x6D4);
    lbl_805D692C = (long) (arg0 + 0x4DC);
    lbl_805D6944 = (long) (arg0 + 0x7B4);
}
void TObjPlayer__sub_802E8274(void) {
    typedef char sp8_offset[(offsetof(Stack_802E8274, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802E8274, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802E8274, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802E8274, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_802E8274, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_802E8274, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_802E8274, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_802E8274, sp24) == 0x1C) ? 1 : -1];
    typedef char sp28_offset[(offsetof(Stack_802E8274, sp28) == 0x20) ? 1 : -1];
    Stack_802E8274 stack;
    if ((s32) lbl_805D691C == 0x5F) {
        stack.sp20 = lbl_805DEA10;
        stack.sp24 = lbl_805DEA10;
        stack.sp28 = lbl_805DEA10;
        TObjPlayer__sub_803D9884((void *) (&stack.sp20), (void *) (lbl_805D6944));
    }
    if ((s32) lbl_805D691C == 0x71) {
        stack.sp14 = lbl_805DEA10;
        stack.sp18 = lbl_805DEA10;
        stack.sp1C = lbl_805DEA10;
        TObjPlayer__sub_803D9884((void *) (&stack.sp14), (void *) (lbl_805D6944 + 0xC));
    }
    if ((s32) lbl_805D691C == (s32) M2C_FIELD(&lbl_80472CB0.value, M2C_UNK *, (lbl_805D6920 * 4))) {
        stack.sp8 = lbl_805DEA10;
        stack.spC = lbl_805DEA10;
        stack.sp10 = lbl_805DEA10;
        TObjPlayer__sub_803D9884((void *) (&stack.sp8), (void *) (lbl_805D6928));
        lbl_805D6920 += 1;
        lbl_805D6928 += 0xC;
    }
    if ((s32) lbl_805D691C == 0x33) {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D8960((int) (0), (void *) (&lbl_804E3BFC.value), (void *) (lbl_805D692C), (int) (4));
        TObjPlayer__sub_803D9B78();
        TBoss6Type1__sub_803D9370((void *) (lbl_805D692C + 0xC), (void *) (lbl_805D692C));
    }
    if ((lbl_805D6924 & 0x80) && ((s32) lbl_805D691C >= 0x4D) && ((s32) lbl_805D691C <= 0x58)) {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D898C((void *) (lbl_805D6934));
        TObjPlayer__sub_803D9B78();
        lbl_805D6934 += 0x30;
    }
    if (((s32) lbl_805D691C >= 0x1D) && ((s32) lbl_805D691C <= 0x20)) {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D898C((void *) (lbl_805D6930));
        TObjPlayer__sub_803D9B78();
        lbl_805D6930 += 0x30;
    }
    lbl_805D691C += 1;
}

}
