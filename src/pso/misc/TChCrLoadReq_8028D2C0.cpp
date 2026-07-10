#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TChCrLoadReq__ct(void *arg0, void *arg1, void *arg2);
void TChCrLoadReq__sub_8028D214(void *);
void copy__12TChCrLoadReqFPvPv(void *, void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__12TChCrLoadReq[];
extern void *lbl_805D3B60;

void *TChCrLoadReq__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TChCrLoadReq;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B60;
    copy__12TChCrLoadReqFPvPv((void *)((char *)arg0 + 56), arg2);
    TChCrLoadReq__sub_8028D214(arg0);
    return arg0;
}

}
