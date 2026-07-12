#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6PlotFalz__sub_802B0228(void *arg0);
void TBoss6PlotFalz__sub_802B0270(void* p);
M2C_UNK TBoss6PlotFalz__sub_802AB490(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC678();
int TBoss6PlotFalz__sub_802AC6D0(void*);
int TObjOnlineEnding__sub_802E522C(void*);

void TBoss6PlotFalz__sub_802B0228(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x1C6) {
        TBoss6PlotFalz__sub_802AC678();
        TBoss6PlotFalz__sub_802AB490(arg0);
    }
}

void TBoss6PlotFalz__sub_802B0270(void* p) { TBoss6PlotFalz__sub_802AC6D0(p); *(int*)((char*)p + 0x3d0) = 0; *(int*)((char*)p + 0x3cc) = 0; TObjOnlineEnding__sub_802E522C(p); }

}
