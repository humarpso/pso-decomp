#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjMotion__ct(void *);
extern M2C_UNK lbl_804E3008[];
void TAdChrSelPlayerGC__ct(void *, void *);

void *fn_802E0FC8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    TObjMotion__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E3008;
    M2C_FIELD(arg0, void **, 0x10C) = arg4;
    M2C_FIELD(arg0, void **, 0x108) = arg3;
    TAdChrSelPlayerGC__ct(arg0, arg2);
    return arg0;
}

}
