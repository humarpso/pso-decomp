#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80120D50(void *);
extern M2C_UNK lbl_804A204C[];
void fn_8001BED8(void *, int);
void fn_8012106C(void *, int);
void fn_80121CB0(void *, int);

void *fn_80124694(void *arg0) {
    fn_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A204C;
    fn_8001BED8((void *)((char *)arg0 + 376), 32);
    fn_8012106C(arg0, 35);
    fn_80121CB0(arg0, 12);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x200) = 0;
    M2C_FIELD(arg0, u32 *, 0x204) = -1;
    return arg0;
}

}
