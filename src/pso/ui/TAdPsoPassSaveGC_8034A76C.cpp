#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdPsoPassSaveGC__ct(void *arg0);
void TAdYesNoBaseGC__ct(void *);
void *__ct__10TAdTitleGCFv(void *, void *, int);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__16TAdPsoPassSaveGC[];
extern void *lbl_805D4310;

void *TAdPsoPassSaveGC__ct(void *arg0) {
    void *o;
    TAdYesNoBaseGC__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdPsoPassSaveGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4310;
    o = __nw__7TObjectFUl(0x138);
    if (o != NULL) {
        __ct__10TAdTitleGCFv(o, arg0, 18);
    }
    return arg0;
}

}
