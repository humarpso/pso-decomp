#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802B9C00(void *, s32);
s32 TBoss6Type2__sub_802BB7C0(void *);
u16 TBoss6Type2__sub_802BB694();
s32 update_action_state__11TBoss6Type2FPv(void *);
s32 update_zako__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BAA74();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
int TBoss6Type2__sub_802BDC5C(void*);
int TBoss6Type2__sub_802BDDF8(void*, void*);
void TBoss6Type2__sub_802BF528(void* p);
void TBoss6Type2__sub_802BF8D8(void* p);
void TBoss6Type2__sub_802BF904(void* p);

void TBoss6Type2__sub_802BF8D8(void* p) { if (*(int*)((char*)p + 0x460) == 0) { TBoss6Type2__sub_802BDC5C(p); } }
void TBoss6Type2__sub_802BF904(void* p) { *(s32*)((char*)p + 0x45c) = 45; *(s32*)((char*)p + 0x460) = 45; }
void TBoss6Type2__sub_802BF914(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014(arg0, 0x22);
    }
}
void pick_next_zako__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        M2C_FIELD(arg0, u16 *, 0x466) = TBoss6Type2__sub_802BB694();
        if (M2C_FIELD(arg0, u16 *, 0x466) == 0xFFFF) {
            update_action_state__11TBoss6Type2FPv(arg0);
            return;
        }
        TBoss6Type2__sub_802BDDF8((void*)(arg0), (void*)(3));
    }
}

}
