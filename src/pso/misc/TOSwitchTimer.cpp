#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TOSwitchTimer__sub_80178584(void);
void TOSwitchTimer__sub_80178588(void);

void TOSwitchTimer__sub_80178584(void) {  }
void TOSwitchTimer__sub_80178588(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8017841C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TOSwitchTimerFv(void *arg0);
u8 TODoorAncient08__sub_80229220(u16);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TOChatSensor__sub_801781D8(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80178538
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__13TOSwitchTimerFPv(void *arg0);
void *TOSwitchTimer__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__13TOSwitchTimerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TOSwitchTimer__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
