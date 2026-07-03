#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowMainMenu4P__ct(void *arg0);
void TWindowMainMenu__ct(void *);

extern M2C_UNK __vt__17TWindowMainMenu4P[];
extern void *lbl_805D3AF0;

void *TWindowMainMenu4P__ct(void *arg0) {
    TWindowMainMenu__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowMainMenu4P;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3AF0;
    return arg0;
}

}
