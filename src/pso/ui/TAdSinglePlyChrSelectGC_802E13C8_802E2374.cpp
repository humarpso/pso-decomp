#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_menu_window__23TAdSinglePlyChrSelectGCFi(s32 arg0);
M2C_UNK close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, M2C_UNK, s32, M2C_UNK);
M2C_UNK create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK strcat(s32, M2C_UNK *);
M2C_UNK strcpy(s32, s32);

extern M2C_UNK lbl_805DE8F8;

void init_menu_window__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    strcpy(arg0 + 0x68, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 1));
    strcat(arg0 + 0x68, &lbl_805DE8F8);
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, arg0 + 0x68, -2, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x16), 0);
}

}
