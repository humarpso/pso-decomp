#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_periodic_tick__6TLobbyFv(void);
M2C_UNK fn_801D9E50(void*);

extern s32 lbl_805D53A4;
extern u32 lbl_805D5580;
extern s32 lbl_805D5E24;

void update_periodic_tick__6TLobbyFv(void) {
    if ((lbl_805D5E24 & 1) && ((lbl_805D53A4 % 900) == 0) && ((u32) lbl_805D5580 != 0U)) {
        fn_801D9E50((void*)lbl_805D5580);
    }
}

}
