#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_break_model__14TObjVoloptCageFv(void);
s32 TBreakUpMdl__sub_8009705C(s32, s32);
s32 TLobby__sub_8001E1D8(M2C_UNK);
s32 TLobby__sub_8001E280(M2C_UNK);
s32 fn_8007EB94(M2C_UNK, void *);

extern void *lbl_805D4C10;
extern s32 lbl_805D4D18;
extern s32 lbl_805D4D1C;
extern s32 lbl_805D4D20;
extern s32 lbl_805D4D24;

void init_break_model__14TObjVoloptCageFv(void) {
    s32 var_r0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(lbl_805D4C10, void **, 0x42C);
    lbl_805D4D24 = M2C_FIELD(temp_r4, s32 *, 0x128);
    var_r0 = fn_8007EB94(0x10, temp_r4);
    if (var_r0 != 0) {
        var_r0 = TBreakUpMdl__sub_8009705C(var_r0, lbl_805D4D24);
    }
    lbl_805D4D20 = var_r0;
    lbl_805D4D18 = TLobby__sub_8001E280(0x26);
    lbl_805D4D1C = TLobby__sub_8001E1D8(0x26);
}

}
