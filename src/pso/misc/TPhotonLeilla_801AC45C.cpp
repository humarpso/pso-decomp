#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_801AC574 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

extern "C" {
u16 obj_getField1c(void *);
u8 * TPhotonMylla__sub_80154CB4(u16);
u8 * TPhotonMagicSquare__sub_801AD218(void *, M2C_UNK, s32, s32, s32);
s32 TOTrapAncient01__sub_80226578(s32, s32, u32, s16, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjPlayer__sub_801A720C(int, int, int, f32);
M2C_UNK TCameraCtrl__sub_801A7310(void *, int);
M2C_UNK TObjPlayer__sub_801A7680(void *);
M2C_UNK TObjPlayer__sub_801A7748(void *, int);
M2C_UNK update_state__10TSceneSoraFPv(void *);
u8 *__nw__7TObjectFUl(M2C_UNK, f32);
extern const f64 lbl_80446DE8;
extern const f32 lbl_805DC1C4;
extern const f32 lbl_805DC1C8;
extern const f32 lbl_805DC1CC;
extern const f32 lbl_805DC1D0;
extern const f32 lbl_805DC1D4;
void run_task__13TPhotonLeillaFv(u8 *arg0);
}

extern "C" {

void run_task__13TPhotonLeillaFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_801AC574, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801AC574, spC) == 0x4) ? 1 : -1];
    Stack_801AC574 stack;
    f32 temp_f1;
    f32 temp_f1_2;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    M2C_FIELD(arg0, s32 *, 0x1AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1AC) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1AC) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x19C) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x19C) = 1;
        M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
        temp_r3 = (u8 *)(TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x17C)));
        if (temp_r3 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (temp_r3 + 0x38));
        }
        temp_f1 = stack.spC;
        stack.spC = temp_f1 + lbl_805DC1C4;
        temp_r3_2 = (u8 *)(__nw__7TObjectFUl(0xD0, temp_f1));
        if (temp_r3_2 != NULL) {
            TPhotonMagicSquare__sub_801AD218(temp_r3_2, (s32) arg0, 4, (s32) &stack.sp8, 0x78);
        }
    }
    if ((lbl_805DC1C8 == (f32) M2C_FIELD(arg0, s32 *, 0x1AC)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1)) {
        TCameraCtrl__sub_801A7310((void *) (arg0), (int) (2));
        M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0));
        TObjPlayer__sub_801A7748((void *) (arg0), (int) (4));
    }
    M2C_FIELD(arg0, s16 *, 0x190) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    update_state__10TSceneSoraFPv((void *) (arg0));
    TBoss1Dragon__sub_80143504((void *) (arg0));
    TObjPlayer__sub_801A7680((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    if (lbl_805DC1CC == (f32) M2C_FIELD(arg0, s32 *, 0x1AC)) {
        temp_r3_3 = (u8 *)(TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x17C)));
        if (temp_r3_3 != NULL) {
            TObjPlayer__sub_801A720C((int) (obj_getField1c(temp_r3_3)), (int) (4), (int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x150)));
        }
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x1AC) > lbl_805DC1D0) {
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x180);
        if (temp_f1_2 > lbl_805DC1D4) {
            M2C_FIELD(arg0, f32 *, 0x180) = (f32) ((f64) temp_f1_2 - lbl_80446DE8);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x19C) != 0) {
        TOTrapAncient01__sub_80226578(0x4002462F, (s32) arg0, 0U, 0, 0);
    }
}

}
