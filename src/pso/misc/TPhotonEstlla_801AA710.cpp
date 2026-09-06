#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_801AA930 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 TBoss1Dragon__sub_80143504(void *);
u8 *TPhotonMylla__sub_80154CB4(u16);
s32 TCameraCtrl__sub_801A7310(void *, int);
s32 TObjPlayer__sub_801A7680(void *);
s32 TObjPlayer__sub_801A7748(void *, int);
s32 update_state__10TSceneSoraFPv(void *);
s32 fn_801AA710(void *);
s32 TPhotonMagicSquare__sub_801AD218(int, void *, int, void *, int);
s32 TOTrapAncient01__sub_80226578(int, void *, int, int, int);
u32 __nw__7TObjectFUl(int);
extern const f32 lbl_805DC140;
extern const f32 lbl_805DC144;
extern const f32 lbl_805DC148;
extern const f32 lbl_805DC14C;
extern const f32 lbl_805DC150;
void run_task__13TPhotonEstllaFv(u8 *arg0);
}

extern "C" {

void run_task__13TPhotonEstllaFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_801AA930, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801AA930, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_801AA930, sp10) == 0x8) ? 1 : -1];
    Stack_801AA930 stack;
    f32 temp_f1;
    u32 temp_r3_2;
    u8 *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x19C) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x19C) = 1;
        temp_r3 = (u8 *)(TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x17C)));
        if (temp_r3 != NULL) {
            stack.sp8 = M2C_FIELD(temp_r3, f32 *, 0x38);
            stack.spC = lbl_805DC140 + M2C_FIELD(temp_r3, f32 *, 0x3C);
            stack.sp10 = M2C_FIELD(temp_r3, f32 *, 0x40);
        }
        temp_r3_2 = __nw__7TObjectFUl((int) (0xD0));
        if (temp_r3_2 != 0U) {
            TPhotonMagicSquare__sub_801AD218((int) (temp_r3_2), (void *) (arg0), (int) (1), (void *) (&stack.sp8), (int) (0x78));
        }
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0x64) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1)) {
        TCameraCtrl__sub_801A7310((void *) (arg0), (int) (0));
        M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0));
        TObjPlayer__sub_801A7748((void *) (arg0), (int) (1));
    }
    M2C_FIELD(arg0, s16 *, 0x190) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    update_state__10TSceneSoraFPv((void *) (arg0));
    TBoss1Dragon__sub_80143504((void *) (arg0));
    TObjPlayer__sub_801A7680((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    if (lbl_805DC144 == (f32) M2C_FIELD(arg0, s32 *, 0x1A0)) {
        fn_801AA710((void *) (arg0));
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x1A0) > lbl_805DC148) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x180);
        if (temp_f1 > lbl_805DC14C) {
            M2C_FIELD(arg0, f32 *, 0x180) = (f32) (temp_f1 - lbl_805DC150);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x19C) != 0) {
        TOTrapAncient01__sub_80226578((int) (0x4002462F), (void *) (arg0), (int) (0), (int) (0), (int) (0));
    }
}

}
