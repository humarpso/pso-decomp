#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdLicAgreementGC__ct(void *arg0);
void TAdAgreementBaseGC__ct(void *);
void *TAdScrollWinGC__ct(void *, void *, int, int);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__17TAdLicAgreementGC[];
extern void *lbl_805D41C0;

void *TAdLicAgreementGC__ct(void *arg0) {
    void *o;
    TAdAgreementBaseGC__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdLicAgreementGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D41C0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    o = __nw__7TObjectFUl(0x54);
    if (o != NULL) {
        o = TAdScrollWinGC__ct(o, arg0, 0, 0);
    }
    M2C_FIELD(arg0, void **, 0x38) = o;
    return arg0;
}

}
