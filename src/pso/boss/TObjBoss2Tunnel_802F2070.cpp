#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct RecoveredGlobal_802F2400_lbl_804E4A1C {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct Stack_802F2664 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_802F1FB0(void *, s32, s32, f32, s32);
void spawn__15TObjBoss2TunnelFPvii(void *arg0, s32 arg1, s32 arg2);
extern u32 lbl_805D6968;
void TObjBoss2Tunnel__sub_802F2278(void);
extern u32 lbl_805D6968;
void set_flag_0x200__15TObjBoss2TunnelFv(void);
extern u32 lbl_805D6968;
void clear_flags_0x3000__15TObjBoss2TunnelFv(void);
extern u32 lbl_805D6968;
s32 TObjBoss2Tunnel__sub_802F22F4(void);
extern u32 lbl_805D6968;
s32 is_phase_active__15TObjBoss2TunnelFv(s32 a0);
s32 TObjBoss2Tunnel__sub_802F22F4(void);
int TObjBoss2Tunnel__sub_802F2348(void);
void TObjBoss2Tunnel__sub_802F23FC(void);
s32 queue_destruction__7TObjectFv(int);
s32 approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
extern RecoveredGlobal_802F2400_lbl_804E4A1C lbl_804E4A1C;
extern u32 lbl_805D6968;
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
extern u32 lbl_805D6968;
M2C_UNK TObjBoss2Tunnel__sub_802F25AC(void *);
extern M2C_UNK lbl_804E49A0[];
void init_effect__15TObjBoss2TunnelFPv(void *arg0);
extern const f32 lbl_805DEC9C;
void spawn__15TObjBoss2TunnelFPvii(void *arg0, s32 arg1, s32 arg2);
extern const f32 lbl_805DECB4;
void TObjBoss2Tunnel__sub_802F2664(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern const f32 lbl_805DEC68;
extern const f32 lbl_805DECFC;
void advance_effect_timer__15TObjBoss2TunnelFPv(void *arg0);
void TObjBoss2Tunnel__sub_802F273C(void);
M2C_UNK TObjBoss2Tunnel__sub_8007DEE4(void *, f32, f32, f32, f32, f32);
s32 advance_phase__15TObjBoss2TunnelFPv(void *, void *);
s32 check_both__15TObjBoss2TunnelFi(s32 arg0);
f32 get_random_float__8TObjFishFv(f32);
s32 is_phase_active__15TObjBoss2TunnelFv(s32 _w0);
f32 update_position__15TObjBoss2TunnelFPv(void *);
extern const f32 lbl_805DEC98;
extern const f32 lbl_805DEC9C;
extern const f32 lbl_805DECC4;
extern const f32 lbl_805DECC8;
extern const f32 lbl_805DECF8;
extern const f32 lbl_805DED00;
extern const f32 lbl_805DED04;
extern const f32 lbl_805DED08;
void update_phase_motion__15TObjBoss2TunnelFPv(u8 *arg0);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void dt__15TObjBoss2TunnelFis(void *, int);
s32 queue_destruction__7TObjectFv(int);
extern M2C_UNK lbl_804E4B3C[];
void *destroy__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1);
void TObjBoss2Tunnel__sub_802F2C4C(void);
void* TObjBoss2Tunnel__sub_802F2A2C(void*, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
extern s32 tl_04;
void TObjBoss2Tunnel__sub_802F2C50(void);
extern u32 lbl_805D6968;
void TObjBoss2Tunnel__sub_802F2C84(void);
}

extern "C" {

s32 TObjBoss2Tunnel__sub_802F2070(void);

extern u32 lbl_805D6968;

s32 TObjBoss2Tunnel__sub_802F2070(void) {
    return ((u32) lbl_805D6968 >> 0xFU) & 1;
}
void spawn__15TObjBoss2TunnelFPvii(void *arg0, s32 arg1, s32 arg2) {
    void *new_obj = (void *) __nw__7TObjectFUl(0x78);
    if ((u32) new_obj != 0U) {
        fn_802F1FB0(new_obj, M2C_FIELD(arg0, s32 *, 0x8C), arg1, M2C_FIELD(arg0, f32 *, 0x84), arg2);
    }
}
void TObjBoss2Tunnel__sub_802F2278(void) { (*(int *)&lbl_805D6968) = ((*(int *)&lbl_805D6968) | 0x8); }
void set_flag_0x200__15TObjBoss2TunnelFv(void) { (*(int *)&lbl_805D6968) = ((*(int *)&lbl_805D6968) | 0x200); clear_flags_0x3000__15TObjBoss2TunnelFv(); }
void clear_flags_0x3000__15TObjBoss2TunnelFv(void) { (*(int *)&lbl_805D6968) = ((*(int *)&lbl_805D6968) & 0xffffcfff); }
s32 TObjBoss2Tunnel__sub_802F22F4(void) {
    return ((u32) lbl_805D6968 >> 0xDU) & 1;
}
s32 is_phase_active__15TObjBoss2TunnelFv(s32 _w0) {
    return ((u32) lbl_805D6968 >> 0xCU) & 1;
}
s32 check_both__15TObjBoss2TunnelFi(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;
    temp_r31 = TObjBoss2Tunnel__sub_802F22F4();
    temp_r3 = is_phase_active__15TObjBoss2TunnelFv((s32)(arg0));
    return temp_r3 | temp_r31;
}
int TObjBoss2Tunnel__sub_802F2348(void) { return 0; }
void TObjBoss2Tunnel__sub_802F23FC(void) {  }
void TObjBoss2Tunnel__sub_802F2400(u8 *arg0) {
    f32 temp_f1;
    u32 temp_r3;
    TObjBoss2Tunnel__sub_802F2664((u8 *)((u8 *)((void *)((void *) (arg0)))), (s32)((s32)((M2C_UNK *)((void *) (&lbl_804E4A1C.value)))), (s32)((s32)((M2C_UNK)((int) (0xA)))), (s32)((s32)((M2C_UNK)((int) (1)))));
    if ((*(s32 *)&lbl_805D6968) & 8) {
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
            (*(s32 *)&lbl_805D6968) |= 0x8000;
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
    advance_effect_timer__15TObjBoss2TunnelFPv((void *)(arg0));
    TObjBoss2Tunnel__sub_802F2664((u8 *)((u8 *)(arg0)), (s32)((s32)(lbl_804E49A0)), (s32)((s32)(0x1F)), (s32)((s32)(0)));
    if ((*(s32 *)&lbl_805D6968) & 0x200) {
        (*(s32 *)&lbl_805D6968) &= 0xFFFFFDFF;
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

void advance_effect_timer__15TObjBoss2TunnelFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) (M2C_FIELD(arg0, f32 *, 0x5C) + lbl_805DECFC);
    if (M2C_FIELD(arg0, f32 *, 0x5C) > lbl_805DEC68) {
        M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805DEC68;
    }
}
void TObjBoss2Tunnel__sub_802F273C(void) {  }
void update_phase_motion__15TObjBoss2TunnelFPv(u8 *arg0) {
    f32 sp8;
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    switch (temp_r0) {
    case 0:
        if (check_both__15TObjBoss2TunnelFi((s32)(arg0)) != 0) {
            if (is_phase_active__15TObjBoss2TunnelFv((s32)((void *) (arg0))) != 0) {
                M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805DECC8;
            } else {
                M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805DEC98;
            }
            M2C_FIELD(arg0, s32 *, 0x4C) = 1;
            TObjBoss2Tunnel__sub_8007DEE4((void *) (arg0 + 0x20), (f32) (lbl_805DECC4), (f32) (lbl_805DED00), (f32) (lbl_805DED04), (f32) (lbl_805DED08), (f32) (lbl_805DECF8));
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DEC9C;
        }
        break;
    case 1:
        if (check_both__15TObjBoss2TunnelFi((s32)(arg0)) == 0) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 3;
            sp8 = get_random_float__8TObjFishFv((f32) (M2C_FIELD(arg0, f32 *, 0x54)));
            TObjBoss2Tunnel__sub_8007DEE4((void *) (arg0 + 0x20), (f32) (lbl_805DECC4), (f32) (lbl_805DED00), (f32) (M2C_FIELD(arg0, f32 *, 0x54)), (f32) (-update_position__15TObjBoss2TunnelFPv((void *) (arg0 + 0x20))), (f32) (lbl_805DECF8));
            return;
        }
        if (advance_phase__15TObjBoss2TunnelFPv((void *) (arg0 + 0x20), (void *) (&sp8)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 2;
        }
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (sp8 * M2C_FIELD(arg0, f32 *, 0x50));
        return;
    case 2:
        if (check_both__15TObjBoss2TunnelFi((s32)(arg0)) == 0) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 3;
            TObjBoss2Tunnel__sub_8007DEE4((void *) (arg0 + 0x20), (f32) (lbl_805DECC4), (f32) (lbl_805DED00), (f32) (lbl_805DED04), (f32) (lbl_805DEC9C), (f32) (lbl_805DECF8));
            return;
        }
        break;
    case 3:
        if (advance_phase__15TObjBoss2TunnelFPv((void *) (arg0 + 0x20), (void *) (&sp8)) != 0) {
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DEC9C;
            M2C_FIELD(arg0, s32 *, 0x4C) = 0;
            return;
        }
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) * (lbl_805DED04 - sp8));
        break;
    }
}
void *destroy__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E4B3C;
        if (M2C_FIELD(arg0, void **, 0x88) != NULL) { queue_destruction__7TObjectFv((int)(M2C_FIELD(arg0, void **, 0x88))); }
        dt__15TObjBoss2TunnelFis((s8 *)arg0 + 0x20, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void TObjBoss2Tunnel__sub_802F2C4C(void) {  }
void TObjBoss2Tunnel__sub_802F2C50(void) {
    void* obj = ((void*)__nw__7TObjectFUl((M2C_UNK)(0x94)));
    if (obj != 0) {
        TObjBoss2Tunnel__sub_802F2A2C(obj, tl_04);
    }
}
void TObjBoss2Tunnel__sub_802F2C84(void) { (*(int *)&lbl_805D6968) = 0; }

#pragma push
#pragma opt_common_subs off
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma pop

typedef char RecoveredGlobal_802F2400_lbl_804E4A1C_size[sizeof(RecoveredGlobal_802F2400_lbl_804E4A1C) == 0x28 ? 1 : -1];
#pragma push
#pragma opt_common_subs off
#pragma pop

}
