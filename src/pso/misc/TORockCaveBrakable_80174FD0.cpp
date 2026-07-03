#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TORockCaveBrakable__ct(void *arg0);
void TORockCave__ct(void *);

extern M2C_UNK __vt__18TORockCaveBrakable[];
extern void *lbl_805D3100;

void *TORockCaveBrakable__ct(void *arg0) {
    TORockCave__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TORockCaveBrakable;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3100;
    M2C_FIELD(arg0, u32 *, 0xB4) = 0;
    M2C_FIELD(arg0, u32 *, 0xB8) = -1;
    return arg0;
}

}
