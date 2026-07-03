#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80120D50(void *);
extern M2C_UNK lbl_804A0CB8[];
void fn_8001BED8(void *, int);
extern const f32 lbl_805DACD4;
void fn_8012106C(void *, int);

void *fn_80121F58(void *arg0) {
    fn_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0CB8;
    fn_8001BED8((void *)((char *)arg0 + 376), 32);
    M2C_FIELD(arg0, f32 *, 0x1E4) = lbl_805DACD4;
    fn_8012106C(arg0, 2);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 1;
    return arg0;
}

}
