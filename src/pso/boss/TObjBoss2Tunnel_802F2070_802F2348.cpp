#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802F2400_lbl_804E4A1C {
    M2C_UNK value;
    u8 remaining[0x24];
};

#include <stddef.h>
struct Stack_802F2664 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
s32 queue_destruction__7TObjectFv(int);
s32 approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
extern RecoveredGlobal_802F2400_lbl_804E4A1C lbl_804E4A1C;
extern s32 lbl_805D6968;
extern const f32 lbl_805DEC68;
extern const f32 lbl_805DEC98;
extern const f32 lbl_805DEC9C;
extern const f32 lbl_805DECA8;
extern const f32 lbl_805DECB8;
extern const f32 lbl_805DECBC;
extern const f32 lbl_805DECC0;
extern const f32 lbl_805DECC4;
extern const f32 lbl_805DECC8;
extern const f32 lbl_805DECCC;
extern const f32 lbl_805DECD0;
extern const f32 lbl_805DECD4;
extern const f32 lbl_805DECD8;
extern const f32 lbl_805DECDC;
extern const f32 lbl_805DECE0;
extern const f32 lbl_805DECE4;
void TObjBoss2Tunnel__sub_802F2400(u8 *arg0);
void spawn__15TObjBoss2TunnelFPvii(void *, s32, s32);
extern const f32 lbl_805DEC9C;
extern const f32 lbl_805DECB4;
void TObjBoss2Tunnel__sub_802F2664(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

int TObjBoss2Tunnel__sub_802F2348(void);
void TObjBoss2Tunnel__sub_802F23FC(void);
void init_effect__15TObjBoss2TunnelFPv(void *arg0);
s32 TObjBoss2Tunnel__sub_802F22F4(void);
M2C_UNK TObjBoss2Tunnel__sub_802F25AC(void *);
M2C_UNK advance_effect_timer__15TObjBoss2TunnelFPv();
s32 is_phase_active__15TObjBoss2TunnelFv(s32 a0 = 0);

int TObjBoss2Tunnel__sub_802F2348(void) { return 0; }

void TObjBoss2Tunnel__sub_802F23FC(void) {  }

extern M2C_UNK lbl_804E49A0[];
extern s32 lbl_805D6968;

typedef char RecoveredGlobal_802F2400_lbl_804E4A1C_size[sizeof(RecoveredGlobal_802F2400_lbl_804E4A1C) == 0x28 ? 1 : -1];
void TObjBoss2Tunnel__sub_802F2400(u8 *arg0) {
    f32 temp_f1;
    u32 temp_r3;
    TObjBoss2Tunnel__sub_802F2664((u8 *)((void *)((void *) (arg0))), (s32)((M2C_UNK *)((void *) (&lbl_804E4A1C.value))), (s32)((M2C_UNK)((int) (0xA))), (s32)((M2C_UNK)((int) (1))));
    if (lbl_805D6968 & 8) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x80);
        if (temp_f1 < lbl_805DEC98) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
            M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805DEC9C;
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DECB8;
            temp_r3 = M2C_FIELD(arg0, u32 *, 0x88);
            if (temp_r3 != 0U) {
                queue_destruction__7TObjectFv((int) (temp_r3));
                M2C_FIELD(arg0, u32 *, 0x88) = 0U;
            }
            lbl_805D6968 |= 0x8000;
            return;
        }
        if (temp_f1 < lbl_805DECBC) {
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) ((u8 *)(arg0) + 0x5C), (f32) (lbl_805DECC0), (f32) (lbl_805DECC4 * lbl_805DEC68));
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) ((u8 *)(arg0) + 0x54), (f32) (lbl_805DECC8), (f32) (lbl_805DECB8));
            return;
        }
        if (temp_f1 < lbl_805DECCC) {
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) ((u8 *)(arg0) + 0x5C), (f32) (lbl_805DECD0), (f32) (lbl_805DECD4 * lbl_805DEC68));
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) ((u8 *)(arg0) + 0x54), (f32) (lbl_805DECC8), (f32) (lbl_805DECD8));
            return;
        }
        if (temp_f1 < lbl_805DECA8) {
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) ((u8 *)(arg0) + 0x5C), (f32) (lbl_805DECDC), (f32) (lbl_805DECE0 * lbl_805DEC68));
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) ((u8 *)(arg0) + 0x54), (f32) (lbl_805DECC8), (f32) (lbl_805DECE4));
        }
    }
}

void init_effect__15TObjBoss2TunnelFPv(void *arg0) {
    advance_effect_timer__15TObjBoss2TunnelFPv();
    TObjBoss2Tunnel__sub_802F2664((u8 *)(arg0), (s32)(lbl_804E49A0), (s32)(0x1F), (s32)(0));
    if (lbl_805D6968 & 0x200) {
        lbl_805D6968 &= 0xFFFFFDFF;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        M2C_FIELD(arg0, s32 *, 0x70) = 0;
    }
    TObjBoss2Tunnel__sub_802F25AC(arg0);
}
#pragma push
#pragma opt_common_subs off
void TObjBoss2Tunnel__sub_802F2664(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    typedef char sp8_offset[(offsetof(Stack_802F2664, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802F2664, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802F2664, sp10) == 0x8) ? 1 : -1];
    Stack_802F2664 stack;
    f32 temp_f1;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) (M2C_FIELD(arg0, f32 *, 0x58) + M2C_FIELD(arg0, f32 *, 0x5C));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x58);
    if (temp_f1 >= lbl_805DECB4) {
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) (temp_f1 - lbl_805DECB4);
        M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x70) == arg2) {
            if (arg3 != 0) {
                M2C_FIELD(arg0, s32 *, 0x70) = (s32) (arg2 - 1);
            } else {
                M2C_FIELD(arg0, s32 *, 0x70) = 0;
            }
        }
        stack.sp8 = M2C_FIELD(arg0, f32 *, 0x54);
        stack.spC = lbl_805DEC9C;
        stack.sp10 = M2C_FIELD(arg0, f32 *, 0x84) - M2C_FIELD(arg0, f32 *, 0x58);
        spawn__15TObjBoss2TunnelFPvii(arg0, M2C_FIELD((arg1 + (M2C_FIELD(arg0, s32 *, 0x70) * 4)), s32 *, 0), (s32) &stack.sp8);
    }
}
#pragma pop

}
