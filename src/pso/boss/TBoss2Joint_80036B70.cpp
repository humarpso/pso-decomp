#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2Joint__vt91(void *arg0);

M2C_UNK TObjEneDD__vt91(void *);
M2C_UNK TObjEneDD__vt90(void *);

void TBoss2Joint__vt91(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 6) {
        TObjEneDD__vt90(arg0);
        return;
    }
    TObjEneDD__vt91(arg0);
}

}
