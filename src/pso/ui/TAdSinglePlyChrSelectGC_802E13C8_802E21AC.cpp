#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void build_selection_summary__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
M2C_UNK *TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8039DC70(void *, void *);
M2C_UNK close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void *, void *, int, int, int);
M2C_UNK create_backgrounds__23TAdSinglePlyChrSelectGCFPv();

extern M2C_UNK lbl_805DE8F8;

void build_selection_summary__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    M2C_FIELD(arg0, s8 *, 0x68) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x80) {
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x1D)));
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x100) {
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x1E)));
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x200) {
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x1F)));
        TAdSinglePlyChrSelectGC__sub_8039DC70((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((void *) (arg0), (void *) (arg0 + 0x68), (int) (1), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x2A)), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x2B)));
}

}
