#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6PlotFalz__sub_802B03F4(void);
void TBoss6PlotFalz__sub_802B03F8(s32 arg0);
void TBoss6PlotFalz__sub_802B0448(void* p);
void TBoss6PlotFalz__sub_802B048C(void *arg0);
void TBoss6PlotFalz__sub_802B04D8(void* p);
int TBoss6PlotFalz__sub_802AACEC(void*);
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
s32 TBoss6PlotFalz__sub_802ABA9C();
int TBoss6PlotFalz__sub_802ABC64(void*);
int TBoss6PlotFalz__sub_802AC4D8(void);
int TBoss6PlotFalz__sub_802AC678(void*);
int TBoss6PlotFalz__sub_802AC86C(void*, void*);

void TBoss6PlotFalz__sub_802B03F4(void) {  }
void TBoss6PlotFalz__sub_802B03F8(s32 arg0) {
    if ((TBoss6PlotFalz__sub_802ABA9C() == 0) || (TBoss6PlotFalz__sub_802AACEC((void*)(arg0)) != 0)) {
        TBoss6PlotFalz__sub_802AC86C((void*)(arg0), (void*)(7));
    }
}
void TBoss6PlotFalz__sub_802B0448(void* p) { TBoss6PlotFalz__sub_802AC678(p); TBoss6PlotFalz__sub_802AC4D8(); *(int*)((char*)p + 0x3d0) = 0; *(int*)((char*)p + 0x3cc) = 0; TBoss6PlotFalz__sub_802ABC64(p); }
void TBoss6PlotFalz__sub_802B048C(void *arg0) {
    s32 temp_r0;

    TBoss6PlotFalz__sub_802AC4D8();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x198) {
        TBoss6PlotFalz__sub_802AB2B8(arg0, 6);
    }
}
void TBoss6PlotFalz__sub_802B04D8(void* p) { if (TBoss6PlotFalz__sub_802AACEC(p) != 0) { TBoss6PlotFalz__sub_802AC86C(p, (void*)6); } }

}
