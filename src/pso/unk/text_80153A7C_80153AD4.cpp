#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjFogCollisionSwitch__ct(void *arg0);
void TObjFogCollision__ct(void *);

extern M2C_UNK __vt__22TObjFogCollisionSwitch[];
extern void *lbl_805D2E7C;

void *TObjFogCollisionSwitch__ct(void *arg0) {
    TObjFogCollision__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjFogCollisionSwitch;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2E7C;
    return arg0;
}

}
