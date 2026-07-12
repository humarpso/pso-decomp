#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemMenuCtrl__ct(void *arg0);
void init_forward__10TObjPlayerFPv(void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__13TItemMenuCtrl[];
extern void * TItemMenuCtrl__data_805D54C0;
extern void *lbl_805D2C18;

void *TItemMenuCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TItemMenuCtrl;
    init_forward__10TObjPlayerFPv((void *)((char *)arg0 + 28));
    TItemMenuCtrl__data_805D54C0 = arg0;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2C18;
    return arg0;
}

}
