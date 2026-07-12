#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_timeout__14TBoss6PlotFalzFPv(void *arg0);
void TBoss6PlotFalz__sub_802B08F0(void* p);
int TBoss6PlotFalz__sub_802AACEC(void*);
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
s32 TBoss6PlotFalz__sub_802ABADC();
int TBoss6PlotFalz__sub_802ABCDC(void*);
int TBoss6PlotFalz__sub_802AC4D8(void);
int TBoss6PlotFalz__sub_802AC678(void*);
int TBoss6PlotFalz__sub_802AC86C(void*, void*);
void set_state4_if_ready__14TBoss6PlotFalzFPv(void* p);
void TBoss6PlotFalz__sub_802B0808(void);
void enter_active_state__14TBoss6PlotFalzFPv(void* p);

void tick_timeout__14TBoss6PlotFalzFPv(void *arg0) {
    s32 temp_r0;

    TBoss6PlotFalz__sub_802AC4D8();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x1F4) {
        TBoss6PlotFalz__sub_802AB2B8(arg0, 2);
    }
}
void TBoss6PlotFalz__sub_802B08F0(void* p) { if (TBoss6PlotFalz__sub_802AACEC(p) != 0) { TBoss6PlotFalz__sub_802AC86C(p, (void*)2); } }

}
