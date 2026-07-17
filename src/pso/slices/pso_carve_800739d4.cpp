#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK send_and_handle__6TLobbyFPvii(u32, void *, M2C_UNK);
u32 set_window_mode_4__6TLobbyFPvii(void *, void *, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8039DC70(void *, void *);
extern M2C_UNK lbl_8048D168[];
extern M2C_UNK lbl_805D9140;
extern M2C_UNK lbl_805D9144;

void fn_800739D4(u8 *arg0) {
    s8 sp8[0x44];
    s32 var_r31;
    s32 var_r30;
    u8 *temp_r4;

    M2C_FIELD(arg0, u32 *, 0x20) = set_window_mode_4__6TLobbyFPvii((void *) TWindowSubComCard__sub_8026CBB8(0x3C), lbl_8048D168, 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
        sp8[0] = 0;
        TAdSinglePlyChrSelectGC__sub_8039DC70(sp8, &lbl_805D9140);
        var_r30 = 0;
        var_r31 = 0;
        do {
            temp_r4 = arg0 + var_r31;
            if ((s8) M2C_FIELD(temp_r4, u8 *, 0x28) != 0) {
                TAdSinglePlyChrSelectGC__sub_8039DC70(sp8, temp_r4 + 0x28);
                if (var_r30 != 3) {
                    TAdSinglePlyChrSelectGC__sub_8039DC70(sp8, &lbl_805D9144);
                }
            }
            var_r30 += 1;
            var_r31 += 0x10;
        } while (var_r30 < 4);
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x20), sp8, 2);
    }
}

}
