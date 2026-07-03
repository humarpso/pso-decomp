#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCMProportion__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void fn_8029ACA8(int);

extern M2C_UNK __vt__16TObjCMProportion[];
extern const f32 lbl_805DDA90;
extern void *lbl_805D3CE8;
extern void *lbl_805D6520;

void *TObjCMProportion__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCMProportion;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3CE8;
    M2C_FIELD(arg0, void **, 0x1C) = lbl_805D6520;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 1;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DDA90;
    fn_8029ACA8(9);
    return arg0;
}

}
