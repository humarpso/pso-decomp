#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80214A84_lbl_804C97F0 { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80214A84_lbl_804C97F0_size[sizeof(RecoveredGlobal_80214A84_lbl_804C97F0) == 0x38 ? 1 : -1];

struct RecoveredGlobal_80214A84_lbl_80513E60 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80214A84_lbl_80513E60_size[sizeof(RecoveredGlobal_80214A84_lbl_80513E60) == 0x10 ? 1 : -1];

extern "C" {
s32 queue_destruction__7TObjectFv(int);
s32 close_message_window__13TShopSequenceFPv(void *);
s32 __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __dl__7TObjectFPv(void *);
s32 TWindow__close(int);
extern RecoveredGlobal_80214A84_lbl_804C97F0 lbl_804C97F0;
extern RecoveredGlobal_80214A84_lbl_80513E60 lbl_80513E60;
extern s32 lbl_805D61B8;
u8 *THunterGuildSeqOffline__sub_80214A84(u8 *arg0, s16 arg1);
extern RecoveredGlobal_80214A84_lbl_80513E60 lbl_80513E60;
void THunterGuildSeqOffline__sub_80214A5C(void);
extern RecoveredGlobal_80214A84_lbl_80513E60 lbl_80513E60;
void THunterGuildSeqOffline__sub_80214A34(void);
}

extern "C" {

void THunterGuildSeqOffline__sub_80214A34(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&lbl_80513E60)[i] = 0;
    }
}

void THunterGuildSeqOffline__sub_80214A5C(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&lbl_80513E60)[i] = 0;
    }
}

u8 *THunterGuildSeqOffline__sub_80214A84(u8 *arg0, s16 arg1) {
    u32 temp_r3;
    u32 temp_r3_2;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804C97F0.value;
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x2C);
        if (temp_r3 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x38);
        if (temp_r3_2 != 0U) {
            TWindow__close((int) (temp_r3_2));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        M2C_FIELD(&lbl_80513E60.value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        lbl_805D61B8 = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
