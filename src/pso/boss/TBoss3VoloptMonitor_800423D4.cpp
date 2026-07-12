#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release__19TBoss3VoloptMonitorFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D4CA4;

void release__19TBoss3VoloptMonitorFv(void) {
    if ((u32) lbl_805D4CA4 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D4CA4);
        lbl_805D4CA4 = 0U;
    }
}

}
