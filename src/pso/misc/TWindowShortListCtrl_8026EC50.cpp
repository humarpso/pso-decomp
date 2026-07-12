#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TWindowShortListCtrl__sub_8026EBB0(void* a0 = 0, void* a1 = 0, void* a2 = 0);

s32 set_flag70_bit10__16TObjCityMainWarpFPv();
void *TCheckRoomSequence__sub_802664A8(s32, s32, s32);
s32 set_flag70_bit100__17TWindowOptionCtrlFPv(void *);
void render__20TWindowShortListCtrlFv(void);

void *create_window__20TWindowShortListCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r31;

    temp_r31 = TCheckRoomSequence__sub_802664A8(arg1, 0x13, M2C_FIELD(arg0, s32 *, 0x24));
    set_flag70_bit10__16TObjCityMainWarpFPv();
    M2C_FIELD(temp_r31, s32 *, 0x5C) = 0x01000000;
    set_flag70_bit100__17TWindowOptionCtrlFPv(temp_r31);
    TWindowShortListCtrl__sub_8026EBB0((void*)(arg0), (void*)(temp_r31), (void*)(arg2));
    return temp_r31;
}
void render__20TWindowShortListCtrlFv(void) {  }

}
