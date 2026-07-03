#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80120D50(void *);
extern M2C_UNK lbl_804A3830[];
void fn_801210B0(void *, int, int, int);
void fn_8012106C(void *, int);

void *fn_80128060(void *arg0) {
    fn_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3830;
    fn_801210B0(arg0, 2, 1, 2);
    fn_801210B0(arg0, 3, 3, 4);
    fn_8012106C(arg0, 513);
    return arg0;
}

}
