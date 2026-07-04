#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80070A00(void);
M2C_UNK TLobby__sub_80074C20();
M2C_UNK fn_8006F848(M2C_UNK *);
u32 fn_800709C4();
M2C_UNK fn_800765B4();

s32 get_main_phase();
extern M2C_UNK lbl_804385B0[];
extern u32 lbl_805D4E28;
extern s32 lbl_805D4E2C;
extern s32 lbl_805D4E30;

void TLobby__sub_80070A00(void) {
    lbl_805D4E2C = 0;
    if ((u32) lbl_805D4E28 == 0U) {
        if (get_main_phase() != 0xF) {
            lbl_805D4E30 = 0;
            return;
        }
        TLobby__sub_80074C20();
        if ((s32) lbl_805D4E30 != 0) {
            lbl_805D4E28 = fn_800709C4();
            lbl_805D4E2C = 1;
            fn_800765B4();
            fn_8006F848(lbl_804385B0);
        }
    }
}

}
