#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_800F8F58(void);
s32 TLobby__sub_800F8FB8();
M2C_UNK TLobby__sub_801384E4();
M2C_UNK TAdPlayerLoadGC__sub_800F9EF8(M2C_UNK);
s32 get_main_phase();
M2C_UNK render_tick__Fv();

extern s8 lbl_805D5359;

void TLobby__sub_800F8F58(void) {
    lbl_805D5359 = 0;
loop_1:
    if (TLobby__sub_800F8FB8() != 1) {
        if (get_main_phase() == 0xF) {
            TLobby__sub_801384E4();
        }
        TAdPlayerLoadGC__sub_800F9EF8(1);
        lbl_805D5359 = 1;
        render_tick__Fv();
        goto loop_1;
    }
}

}
