#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjTailsTailsMove__ct(void *arg0, void *arg1);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__18TObjTailsTailsMove[];
extern void *lbl_805D2B58;

void *TObjTailsTailsMove__ct(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjTailsTailsMove;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2B58;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

}
