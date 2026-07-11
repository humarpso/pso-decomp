#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK fn_800F6B14(void *, void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
extern f32 lbl_805D9A10;

void fn_800A45C4(void *arg0) {
    void *temp_r4;
    s16 temp_s16;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
        temp_s16 = 0xA;
        M2C_FIELD(arg0, s16 *, 0x326) = temp_s16;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        if (calc_boss4_scale__10TObjPlayerFi(arg0) < lbl_805D9A10) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0xA;
        }
        temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
        fn_800F6B14(arg0, temp_r4);
        send_entity_set_flags__6TLobbyFPv(arg0);
    }
}

}
