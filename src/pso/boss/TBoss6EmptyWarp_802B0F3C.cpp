#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss6EmptyWarp__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void fn_802AC6D0(void);

extern M2C_UNK __vt__15TBoss6EmptyWarp[];
extern void *lbl_805D3E90;

void *TBoss6EmptyWarp__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss6EmptyWarp;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3E90;
    fn_802AC6D0();
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
