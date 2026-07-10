#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801F4830(M2C_UNK);
M2C_UNK fn_802274B8(M2C_UNK *);
M2C_UNK fn_802AC6D0();
M2C_UNK fn_8033CC80(void *);
extern M2C_UNK lbl_804709B4[];

void init_proto1_adx(void *arg0) {
    fn_802274B8(lbl_804709B4);
    fn_802AC6D0();
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    fn_801F4830(0x56);
    fn_8033CC80(arg0);
}

}
