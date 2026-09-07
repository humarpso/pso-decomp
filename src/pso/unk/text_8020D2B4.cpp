#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8020D2B4_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_8020D2B4_lbl_8058D490_size[sizeof(RecoveredGlobal_8020D2B4_lbl_8058D490) == 0x30 ? 1 : -1];

extern "C" {
s32 TObjPlayer__sub_803D97F0(u32);
s32 TObjPlayer__sub_803D9B78(void);
M2C_UNK TCameraCtrl__sub_803D8934(int, void *, void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
extern RecoveredGlobal_8020D2B4_lbl_8058D490 lbl_8058D490;
void TLobby__sub_8020D2B4(s32 arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

int TLobby__sub_8020D6D0(void* p);
int TLobby__sub_8020D5AC(void*);

void TLobby__sub_8020D2B4(s32 arg0, u8 *arg1, u8 *arg2) {
    TObjPlayer__sub_803D97F0((u32) &lbl_8058D490.value);
    TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(arg2, f32 *, 4)), (f32) (M2C_FIELD(arg2, f32 *, 8)), (f32) (M2C_FIELD(arg2, f32 *, 0xC)));
    TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(arg2, s32 *, 0x18)));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg2, s32 *, 0x10)));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg2, s32 *, 0x14)));
    TCameraCtrl__sub_803D8934((int) (0), (void *) (arg0), (void *) (arg0));
    TObjPlayer__sub_803D9B78();
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) + M2C_FIELD(arg2, s32 *, 0x10));
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + M2C_FIELD(arg2, s32 *, 0x14));
    M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) + M2C_FIELD(arg2, s32 *, 0x18));
}

int TLobby__sub_8020D6D0(void* p) { return TLobby__sub_8020D5AC(p); }

}
