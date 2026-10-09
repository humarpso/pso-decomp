#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802E10D8_lbl_804D3900 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802E10D8_lbl_804D3900_size[sizeof(RecoveredGlobal_802E10D8_lbl_804D3900) == 0x10 ? 1 : -1];

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_802E10D8_lbl_804D3900 creation_menu_resource_descriptor;
extern s32 lbl_805D68D8;
void fn_802E10D8(void);
}

extern "C" {

void fn_802E10D8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &creation_menu_resource_descriptor.value, 0, 0, 0));
    }
    lbl_805D68D8 = var_r0;
}

}
