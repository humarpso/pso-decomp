#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field_1c__6TLobbyFPvf(void *arg0, f32 farg0);
M2C_UNK TWindowCtrlMain__sub_8026CC28();
M2C_UNK TWindowCtrlMain__sub_8026CCA4(void *);

void set_field_1c__6TLobbyFPvf(void *arg0, f32 farg0) {
    TWindowCtrlMain__sub_8026CC28();
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    TWindowCtrlMain__sub_8026CCA4(arg0);
}

}
