#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __dt__7TObjectFv(void *, int);
M2C_UNK TCameraCtrl__sub_80069DA8();
M2C_UNK request_destroy__11TBoss4Type2FUi(void *);
M2C_UNK TObjFish__sub_800E3100(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC25C(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC4D8();
extern const M2C_UNK lbl_804EF9C0[];

u8 *fn_8033CAB0(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK*)&lbl_804EF9C0;
        TCameraCtrl__sub_80069DA8();
        TBoss6PlotFalz__sub_802AC4D8();
        TBoss6PlotFalz__sub_802AC25C(arg0 + 0x40);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            TObjFish__sub_800E3100(M2C_FIELD(arg0, void **, 0x60));
            M2C_FIELD(arg0, u32 *, 0x60) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x64));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
