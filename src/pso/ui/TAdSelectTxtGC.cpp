#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__14TAdSelectTxtGCFv(void *arg0, void *arg1, void *arg2, void *arg3);
void TAdSelectTxtGC__sub_802A1838(void *, void *, void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__14TAdSelectTxtGC[];
extern void *lbl_805D3D88;

void *__ct__14TAdSelectTxtGCFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TAdSelectTxtGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D88;
    TAdSelectTxtGC__sub_802A1838(arg0, arg2, arg3);
    return arg0;
}

}
