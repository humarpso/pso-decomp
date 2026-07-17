#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_set_value__6TLobbyFf(f32 farg0);
s32 is_flag_set__6TLobbyFv();

extern M2C_UNK lbl_8048C9D8[];
extern f32 lbl_805D9108;
extern f32 lbl_805D910C;

s32 try_set_value__6TLobbyFf(f32 farg0) {
    if (is_flag_set__6TLobbyFv() == 0) {
        return 0;
    }
    if ((farg0 < lbl_805D9108) || (farg0 > lbl_805D910C)) {
        return 0;
    }
    M2C_FIELD(&lbl_8048C9D8, f32 *, 4) = farg0;
    return 1;
}

}
