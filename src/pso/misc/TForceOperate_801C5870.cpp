#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TForceOperate__ct(void *arg0, void *arg1, void *arg2);
void TForceOperate__sub_8013E018(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void fn_8013E020(void *);

extern M2C_UNK __vt__13TForceOperate[];
extern void *lbl_805D3560;
struct VOff_801C5870_arg0 { char pad_0[0x1C]; char f_1C[1]; };

void *TForceOperate__ct(void *arg0, void *arg1, void *arg2) {
    struct VOff_801C5870_arg0 *self = (struct VOff_801C5870_arg0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TForceOperate;
    fn_8013E020(self->f_1C);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3560;
    TForceOperate__sub_8013E018(self->f_1C, arg2);
    return arg0;
}

}
