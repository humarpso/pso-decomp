#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdChrSelASlotGC__ct(void *arg0, void *arg1, void *arg2);
void TAdChrSelASlotGC__sub_8030DE58(void *, void *);
void init__16TAdChrSelASlotGCFPvi(void *, void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__16TAdChrSelASlotGC[];
extern void *lbl_805D4100;

void *TAdChrSelASlotGC__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdChrSelASlotGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4100;
    init__16TAdChrSelASlotGCFPvi(arg0, arg2);
    TAdChrSelASlotGC__sub_8030DE58(arg0, arg2);
    return arg0;
}

}
