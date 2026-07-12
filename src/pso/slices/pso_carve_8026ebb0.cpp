#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_flag70_bit10__16TObjCityMainWarpFPv();
void *TCheckRoomSequence__sub_802664A8(s32, s32, s32);
s32 set_flag70_bit100__17TWindowOptionCtrlFPv(void *);
void render__20TWindowShortListCtrlFv(void);

int TWindowShortListCtrl__sub_8026EBB0(void* a0 = 0, void* a1 = 0, void* a2 = 0) { return 0; }

}
