#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 {
    M2C_UNK value;
    u8 remaining[0x54];
};

extern "C" {
s32 TObjCMIcon__sub_80299598(M2C_UNK arg0, s32 arg1);
extern RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 TObjCMIcon__data_805409E0;
void TObjCMIcon__sub_802994B0(s32 arg0);
}

extern "C" {

void TObjCMIcon__sub_8029957C(void* p, void* q);

typedef char RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0_size[sizeof(RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0) == 0x58 ? 1 : -1];
void TObjCMIcon__sub_802994B0(s32 arg0) {
    M2C_FIELD(((u8 *)(&TObjCMIcon__data_805409E0.value) + (arg0 * 0xC)), s32 *, 0) = 0;
}

void TObjCMIcon__sub_8029957C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); }
s32 TObjCMIcon__sub_80299598(M2C_UNK arg0, s32 arg1) {
    return arg1;
}

}
