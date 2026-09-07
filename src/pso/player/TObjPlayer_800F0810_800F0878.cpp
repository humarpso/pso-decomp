#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800F08AC_lbl_80501080 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_800F08AC_lbl_805010D0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
extern RecoveredGlobal_800F08AC_lbl_80501080 lbl_80501080;
extern RecoveredGlobal_800F08AC_lbl_805010D0 lbl_805010D0;
M2C_UNK *TObjPlayer__sub_800F08AC(s32 arg0, s32 arg1);
}

extern "C" {

void set_alt_model_flag__10TObjPlayerFv(void);
int set_global_pair__10TObjPlayerFii(void*, void*);

    extern int some_id_805c6f74;
void set_alt_model_flag__10TObjPlayerFv(void) { some_id_805c6f74 = (some_id_805c6f74 | 0x800); set_global_pair__10TObjPlayerFii((void*)-513, (void*)0); }
typedef char RecoveredGlobal_800F08AC_lbl_80501080_size[sizeof(RecoveredGlobal_800F08AC_lbl_80501080) == 0x50 ? 1 : -1];
typedef char RecoveredGlobal_800F08AC_lbl_805010D0_size[sizeof(RecoveredGlobal_800F08AC_lbl_805010D0) == 0x10 ? 1 : -1];
M2C_UNK *TObjPlayer__sub_800F08AC(s32 arg0, s32 arg1) {
    M2C_FIELD(&lbl_805010D0.value, s32 *, 4) = arg1;
    M2C_FIELD(&lbl_80501080.value, s32 *, 0x30) = arg0;
    return &lbl_80501080.value;
}

}
