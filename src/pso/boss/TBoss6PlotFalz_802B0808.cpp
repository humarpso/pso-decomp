#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6PlotFalz__sub_802ABADC();
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
int TBoss6PlotFalz__sub_802AACEC(void*);
int TBoss6PlotFalz__sub_802AC86C(void*, void*);
void set_state4_if_ready__14TBoss6PlotFalzFPv(void* p);
void TBoss6PlotFalz__sub_802B08F0(void* p);
int TBoss6PlotFalz__sub_802ABCDC(void*);
int TBoss6PlotFalz__sub_802AC4D8(void);
int TBoss6PlotFalz__sub_802AC678(void*);
void enter_active_state__14TBoss6PlotFalzFPv(void* p);
void TBoss6PlotFalz__sub_802B0808(void);

void TBoss6PlotFalz__sub_802B0808(void) {  }
void update_phase__14TBoss6PlotFalzFi(s32 arg0) {
    if ((TBoss6PlotFalz__sub_802ABADC() == 0) || (TBoss6PlotFalz__sub_802AACEC((void*)(arg0)) != 0)) {
        TBoss6PlotFalz__sub_802AC86C((void*)(arg0), (void*)(3));
    }
}
void enter_active_state__14TBoss6PlotFalzFPv(void* p) { TBoss6PlotFalz__sub_802AC678(p); TBoss6PlotFalz__sub_802AC4D8(); *(int*)((char*)p + 0x3d0) = 1; *(int*)((char*)p + 0x3cc) = 0; TBoss6PlotFalz__sub_802ABCDC(p); }

}
