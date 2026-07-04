#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void __ct__7TObjectFP7TObject(void *);
extern M2C_UNK __vt__22TChallenge4PItemSelect[];
extern void *lbl_805D433C;
void queue_destruction__7TObjectFv(void *);

void *TChallenge4PItemSelect__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TChallenge4PItemSelect;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D433C;
    M2C_FIELD(arg0, void **, 0x28) = arg2;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 90;
    if (M2C_FIELD(arg0, void **, 0x28) == NULL) {
        queue_destruction__7TObjectFv(arg0);
    }
    return arg0;
}

}
