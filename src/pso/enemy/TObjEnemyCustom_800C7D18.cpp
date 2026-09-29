#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_800C7DF8 { u8 pad0[0x326]; s16 state; };

extern "C" {
void update_state__15TObjEnemyCustomFPv(void *arg0);
void TObjEnemyCustom__sub_800C7C30(void *);
void update__15TObjEnemyCustomFPv(void *);
void update_state_machine__15TObjEnemyCustomFPv(void *);
void update_knockback_state__15TObjEnemyCustomFPv(void *);
void TObjEnemyCustom__sub_800C77A4(void *);
void TObjEnemyCustom__sub_800C7DF8(Obj_800C7DF8 *arg0);
}

extern "C" {

int TObjEnemyCustom__sub_800C7DD0(void* p);
void TObjEnemyCustom__sub_800C7DF4(void);
void handle_state_transition__15TObjEnemyCustomFPv(u8 *arg0);
int update_if_active__15TObjEnemyCustomFPv(void* p);
void update_state__15TObjEnemyCustomFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjVoloptCage__sub_800C76F0(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);

int update_if_active__15TObjEnemyCustomFPv(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 1); }

extern f32 lbl_805DA070;

void update_state__15TObjEnemyCustomFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734(arg0, 0, lbl_805DA070);
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        break;
    }
}

int TObjEnemyCustom__sub_800C7DD0(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 0); }
void TObjEnemyCustom__sub_800C7DF4(void) {  }

void TObjEnemyCustom__sub_800C7DF8(Obj_800C7DF8 *arg0) {
    switch (arg0->state) {
    case 0: update_state__15TObjEnemyCustomFPv(arg0); return;
    case 1: TObjEnemyCustom__sub_800C7C30(arg0); return;
    case 2: update__15TObjEnemyCustomFPv(arg0); return;
    case 3: update_state_machine__15TObjEnemyCustomFPv(arg0); return;
    case 4: update_knockback_state__15TObjEnemyCustomFPv(arg0); return;
    case 5: TObjEnemyCustom__sub_800C77A4(arg0); return;
    case 6: break;
    }
}

void handle_state_transition__15TObjEnemyCustomFPv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjVoloptCage__sub_800C76F0(arg0);
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            TObjEnemyCustom__sub_800C7DF8((Obj_800C7DF8 *)(arg0));
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    TObjEnemyCustom__sub_800C7DF8((Obj_800C7DF8 *)(arg0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) == -1) {
        M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        TObjEnemyCustom__sub_800C7DF8((Obj_800C7DF8 *)(arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    update_prev_position__10TObjPlayerFPv(arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
