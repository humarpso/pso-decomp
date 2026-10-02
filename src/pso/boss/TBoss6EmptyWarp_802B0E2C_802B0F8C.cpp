#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__15TBoss6EmptyWarpFv(void);
void activate_warp__15TBoss6EmptyWarpFPv(void *arg0);
void TBoss6EmptyWarp__sub_802B1004(void* p);
int TBoss6EmptyWarp__sub_802B1018(void);
s32 play_sound_effect(s32, s32, s32, s32);
void *TBoss6EmptyWarp__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__15TBoss6EmptyWarpFv(void) {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TBoss6EmptyWarp__ct(o, tl_02);
    }
    return o;
}

void activate_warp__15TBoss6EmptyWarpFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    play_sound_effect(0x4003351F, 0, 0, 0);
}
void TBoss6EmptyWarp__sub_802B1004(void* p) { *(s32*)((char*)p + 0x20) = 0; *(s32*)((char*)p + 0x1c) = 2; }
int TBoss6EmptyWarp__sub_802B1018(void) { return 0; }

}
