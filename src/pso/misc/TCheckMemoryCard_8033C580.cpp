#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCheckMemoryCard__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void __ct__7TObjectFP7TObject(void *);
void reset__17TWindowSubComCardFPv(void *);

extern M2C_UNK __vt__16TCheckMemoryCard[];
extern void *lbl_805D4290;

void *TCheckMemoryCard__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TCheckMemoryCard;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4290;
    M2C_FIELD(arg0, void **, 0x48) = arg2;
    M2C_FIELD(arg0, void **, 0x1C) = arg4;
    M2C_FIELD(arg0, void **, 0x4C) = arg3;
    reset__17TWindowSubComCardFPv(arg0);
    return arg0;
}

}
