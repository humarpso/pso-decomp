#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TGStream__ct(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK tmp_buf_release__6TLobbyFi(M2C_UNK *);
M2C_UNK close_adxf_handle__6TLobbyFPv(s32);

extern M2C_UNK lbl_8043DAF8[];

void *TGStream__ct(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U) {
            close_adxf_handle__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x20));
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
            tmp_buf_release__6TLobbyFi(lbl_8043DAF8);
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
