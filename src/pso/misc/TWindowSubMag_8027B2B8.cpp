#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_mag_help__13TWindowSubMagFPv(void *arg0);
M2C_UNK TLobby__sub_80269C6C(s32, M2C_UNK *, M2C_UNK);
M2C_UNK *TWindowHelpItem__sub_80255DC8(s32);
s32 TWindowSubMag__sub_8027C0C4(s32);
M2C_UNK fn_80263A20(s32, s32);

extern M2C_UNK lbl_805DD648;

void update_mag_help__13TWindowSubMagFPv(void *arg0) {
    s32 temp_r3;

    fn_80263A20(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x28));
    temp_r3 = TWindowSubMag__sub_8027C0C4(M2C_FIELD(arg0, s32 *, 0x48));
    if (temp_r3 != (s8) M2C_FIELD(arg0, u8 *, 0x1D)) {
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) temp_r3;
        if (temp_r3 == -1) {
            TLobby__sub_80269C6C(M2C_FIELD(arg0, s32 *, 0x4C), &lbl_805DD648, 0x80);
            return;
        }
        TLobby__sub_80269C6C(M2C_FIELD(arg0, s32 *, 0x4C), TWindowHelpItem__sub_80255DC8(temp_r3 + 0x27), 0x80);
    }
}

}
