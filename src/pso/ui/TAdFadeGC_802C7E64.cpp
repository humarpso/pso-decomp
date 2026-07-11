#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__9TAdFadeGCFv(void *arg0, void *arg1, void *arg2);
void TAdFadeGC__sub_802C7DBC(void *, void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__9TAdFadeGC[];
extern const f32 TAdFadeGC__data_805DE5E8;
extern void *lbl_805D3EF0;

void *__ct__9TAdFadeGCFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TAdFadeGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3EF0;
    M2C_FIELD(arg0, u32 *, 0x1C) = -1;
    M2C_FIELD(arg0, f32 *, 0x20) = TAdFadeGC__data_805DE5E8;
    M2C_FIELD(arg0, void **, 0x28) = arg2;
    TAdFadeGC__sub_802C7DBC(arg0, M2C_FIELD(arg0, void **, 0x28));
    return arg0;
}

}
