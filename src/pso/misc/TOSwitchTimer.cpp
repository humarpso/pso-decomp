#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_801783BC {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

struct RecoveredGlobal_8017858C___vt__13TOSwitchTimer { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_8017858C___vt__13TOSwitchTimer_size[sizeof(RecoveredGlobal_8017858C___vt__13TOSwitchTimer) == 0x38 ? 1 : -1];

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjRoomId__sub_80141CF4(s32, f32 *, f32, f32, f32);
extern const f32 lbl_805DBA18;
extern const f32 lbl_805DBA1C;
extern const f32 lbl_805DBA20;
extern const f32 lbl_805DBA24;
void render__13TOSwitchTimerFv(s32 arg0);
u8 * destroy_particle__13TParticleCtrlFPvs(void *, s16);
void TSwitch__sub_80229258(u16, s16);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_8017858C___vt__13TOSwitchTimer __vt__13TOSwitchTimer;
u8 *__dt__13TOSwitchTimerFv(u8 *arg0, s16 arg1);
}

extern "C" {

void TOSwitchTimer__sub_80178584(void);
void TOSwitchTimer__sub_80178588(void);
void *create__13TOSwitchTimerFPv(void *arg0);
void run_task__13TOSwitchTimerFv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TOChatSensor__sub_801781D8(void *);
u8 TODoorAncient08__sub_80229220(u16);
void *TOSwitchTimer__ct(void *, void *, void *);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
void *__nw__7TObjectFUl(int);

void render__13TOSwitchTimerFv(s32 arg0) {
    Stack_801783BC stack;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        stack.sp8 = lbl_805DBA18;
        stack.spC = lbl_805DBA1C;
        stack.sp10 = lbl_805DBA18;
        stack.sp14 = lbl_805DBA20;
        TObjRoomId__sub_80141CF4(arg0 + 0x38, &stack.sp8, lbl_805DBA24, lbl_805DBA1C, lbl_805DBA18);
    }
}

void run_task__13TOSwitchTimerFv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3_2;
    u32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x90);
    switch (temp_r0) {
    case 0:
        temp_r3 = TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0xA8));
        if ((s32) M2C_FIELD(arg0, u8 *, 0xB0) != (s32) temp_r3) {
            M2C_FIELD(arg0, u8 *, 0xB0) = temp_r3;
            if (temp_r3 == 1) {
                M2C_FIELD(arg0, s32 *, 0x90) = 1;
                M2C_FIELD(arg0, s32 *, 0x94) = 0;
                if ((u32) M2C_FIELD(arg0, u32 *, 0x98) == 0U) {
                    M2C_FIELD(arg0, u8 *, 0xB0) = 0U;
                }
            }
        }
        return;
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x9C) == 1) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x94) < (s32) M2C_FIELD(arg0, s32 *, 0xA4)) {
                if ((M2C_FIELD(arg0, s32 *, 0x94) % 30) == 0) {
                    TBoss3Volopt__sub_8022675C(0x53218, 0, 0, 0);
                }
            } else {
                TOTrapAncient01__sub_80226578(0x53218, arg0, 0, 0, 0);
            }
        }
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x94);
        M2C_FIELD(arg0, s32 *, 0x94) = (s32) (temp_r3_2 + 1);
        if (temp_r3_2 == (s32) M2C_FIELD(arg0, s32 *, 0xA0)) {
            TOChatSensor__sub_801781D8(arg0);
            M2C_FIELD(arg0, s32 *, 0x90) = 0;
        }
        break;
    }
}

extern void *tl_05;

void *create__13TOSwitchTimerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TOSwitchTimer__ct(o, tl_05, arg0);
    }
    return o;
}

void TOSwitchTimer__sub_80178584(void) {  }
void TOSwitchTimer__sub_80178588(void) {  }
u8 *__dt__13TOSwitchTimerFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__13TOSwitchTimer.value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x98) == 0U) {
            TSwitch__sub_80229258(M2C_FIELD(arg0, u16 *, 0xA8), (s16) M2C_FIELD(arg0, s32 *, 0xB4));
        }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}
