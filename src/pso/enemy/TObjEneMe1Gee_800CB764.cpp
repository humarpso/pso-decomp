#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800CB764_lbl_8043BDD0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 destroy_subobj__13TObjEneMe1GeeFPv(void *, void *);
extern RecoveredGlobal_800CB764_lbl_8043BDD0 lbl_8043BDD0;
void TObjEneMe1Gee__sub_800CB764(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_800CB764_lbl_8043BDD0_size[sizeof(RecoveredGlobal_800CB764_lbl_8043BDD0) == 0x10 ? 1 : -1];
void TObjEneMe1Gee__sub_800CB764(u8 *arg0, s32 arg1) {
    destroy_subobj__13TObjEneMe1GeeFPv((void *) (arg0), (void *) (&lbl_8043BDD0.value));
    M2C_FIELD(arg0, s32 *, 0x47C) = 3;
    M2C_FIELD(arg0, s32 *, 0x480) = arg1;
    M2C_FIELD(arg0, s32 *, 0x484) = 2;
    M2C_FIELD(arg0, s32 *, 0x488) = 0;
}

}
