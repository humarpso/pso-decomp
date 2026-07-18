#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_photon_blast_state__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_80312F0C(void*);

extern u32 lbl_805D5D68;

void update_photon_blast_state__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5D68 != 0U) {
        TObjPlayer__sub_80312F0C((void*)lbl_805D5D68);
    }
}

}
