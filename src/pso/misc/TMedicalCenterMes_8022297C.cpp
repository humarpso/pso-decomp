#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void show_message__17TMedicalCenterMesFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_80222CFC(s32);
M2C_UNK TWindowMessagePage__sub_8026AE20(u32, void *, s32);
M2C_UNK TQuestVmDownLoadServer__sub_80222774(void *, s32, void *);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);

void show_message__17TMedicalCenterMesFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) != 0U) {
        temp_r31 = TLobby__sub_80222CFC(arg1);
        memset(arg0 + 4, 0, 0x200);
        TQuestVmDownLoadServer__sub_80222774(arg0, temp_r31, arg0 + 4);
        TWindowMessagePage__sub_8026AE20(M2C_FIELD(arg0, u32 *, 0x20C), arg0 + 4, arg2 | 0x80);
    }
}

}
