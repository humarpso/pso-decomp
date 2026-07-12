#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 load_data__9TItemLoadFPvi(void *arg0, s32 arg1);
M2C_UNK free_texture__9TItemLoadFPv();
s32 TLobby__sub_803CC53C(u32);
u32 TLobby__sub_803CD16C(s32, s32);

u32 load_data__9TItemLoadFPvi(void *arg0, s32 arg1) {
    u32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) == 1) {
        free_texture__9TItemLoadFPv();
        M2C_FIELD(arg0, u32 *, 4) = TLobby__sub_803CD16C(M2C_FIELD(arg0, s32 *, 8), arg1);
        temp_r3 = M2C_FIELD(arg0, u32 *, 4);
        if (temp_r3 != 0U) {
            M2C_FIELD(arg0, s32 *, 0xC) = TLobby__sub_803CC53C(temp_r3);
        }
    }
    return M2C_FIELD(arg0, u32 *, 4);
}

}
