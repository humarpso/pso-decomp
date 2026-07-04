#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802274B8(M2C_UNK *);
M2C_UNK TBoss6PlotFalz__sub_802ABB84(void *);
M2C_UNK fn_802AC4D8();
M2C_UNK TBoss6EmptyWarp__sub_802AC654();
s32 fn_803403B0(void *);
extern M2C_UNK lbl_804709A8[];

void fn_802B0678(void *arg0) {
    TBoss6EmptyWarp__sub_802AC654();
    TBoss6PlotFalz__sub_802ABB84(arg0);
    fn_802274B8(lbl_804709A8);
    fn_802AC4D8();
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = fn_803403B0(arg0);
}

}
