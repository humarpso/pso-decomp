#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *fn_80235B84(void *arg0, s16 arg1);
void update_lifetime__9TTecMegidFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, void *, M2C_UNK, M2C_UNK);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_lifetime__9TTecMegidFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (M2C_FIELD(arg0, s16 *, 0x1E) + 1);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1E) > (s16) M2C_FIELD(arg0, s16 *, 0x1C)) {
        TBoss3Volopt__sub_8022675C(M2C_FIELD(arg0, s32 *, 0x20), arg0 + 0x24, 0, 0);
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK lbl_804CCA90[];

void *fn_80235B84(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCA90;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
