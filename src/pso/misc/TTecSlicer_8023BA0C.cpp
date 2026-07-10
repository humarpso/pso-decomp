#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__10TTecSlicerFv(u8 *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK TTecSlicer__sub_8023B670(void *, s32);
M2C_UNK TTecSlicer__sub_8023B6BC(void *);
M2C_UNK update__10TTecSlicerFi(void *);
M2C_UNK __ct__14TSlicerHistoryFv(void *, void *, s32, void *, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK allow_rendering__7TObjectFv(void *);
s32 fn_8001BEF8(void *, M2C_UNK);
M2C_UNK fn_80084E98(void *, void *);
u32 fn_80100490(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__10TTecSlicerFv(u8 *arg0) {
    s32 temp_r4;
    u8 *var_r31;
    void *new_obj;

    M2C_FIELD(arg0, u32 *, 0x10C) = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x114));
    M2C_FIELD(arg0, u32 *, 0x108) = fn_80100490(M2C_FIELD(arg0, s32 *, 0x118));
    if (((u32) M2C_FIELD(arg0, u32 *, 0x108) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x10C) == 0U)) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    allow_rendering__7TObjectFv(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x13C) != 0) {
        var_r31 = arg0 + 0x128;
    } else {
        var_r31 = NULL;
    }
    new_obj = (void *)__nw__7TObjectFUl(0x60);
    if (new_obj != 0U) {
        __ct__14TSlicerHistoryFv(new_obj, arg0, M2C_FIELD(arg0, s32 *, 0x24), var_r31, M2C_FIELD(arg0, s32 *, 0x118));
    }
    if (fn_8001BEF8(arg0 + 0xC0, 1) == 0) {
        update__10TTecSlicerFi(arg0);
    }
    TTecSlicer__sub_8023B6BC(arg0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x124) != 0U) {
        fn_80084E98(M2C_FIELD(arg0, void **, 0x124), arg0 + 0x38);
    }
    if (fn_8001BEF8(arg0 + 0xC0, 2) != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x5C);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (temp_r4 + M2C_FIELD(arg0, s32 *, 0x138));
    TTecSlicer__sub_8023B670(arg0, temp_r4);
    M2C_FIELD(arg0, u32 *, 0x108) = 0U;
    M2C_FIELD(arg0, u32 *, 0x10C) = 0U;
}

}
