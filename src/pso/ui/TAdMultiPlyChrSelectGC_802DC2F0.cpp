#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 queue_destruction__7TObjectFv(void *);
s32 TAdMultiPlyChrSelectGC__sub_802D50A0(s32);
s32 TAdMultiPlyChrSelectGC__sub_802D50A8(s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802E00BC(s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802E00C4(s32);
u32 TAdMultiPlyChrSelectGC__sub_802E0100();
s32 TAdChrMoveEffectGC__sub_803490AC();
int TAdMultiPlyChrSelectGC__sub_802DC2F0(void* p);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

int TAdMultiPlyChrSelectGC__sub_802DC2F0(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
void TAdMultiPlyChrSelectGC__sub_802DC310(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x88));
        M2C_FIELD(arg0, u32 *, 0x88) = 0U;
    }
    if (TAdMultiPlyChrSelectGC__sub_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (TAdMultiPlyChrSelectGC__sub_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        if (TAdMultiPlyChrSelectGC__sub_802E0100() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x1D) {
        if (TAdMultiPlyChrSelectGC__sub_802E0100() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        TAdMultiPlyChrSelectGC__sub_802D50A8(M2C_FIELD(arg0, s32 *, 0x68), 1);
        TAdMultiPlyChrSelectGC__sub_802E00BC(M2C_FIELD(arg0, s32 *, 0x6C), 1);
    }
}

}
