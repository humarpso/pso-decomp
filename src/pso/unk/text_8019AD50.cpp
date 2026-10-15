#include "types.h"

struct RecoveredGlobal_8019AD50_lbl_804B8FF8 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8019AD50_lbl_804B8FF8_size[sizeof(RecoveredGlobal_8019AD50_lbl_804B8FF8) == 0x10 ? 1 : -1];

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFv(void *);
extern RecoveredGlobal_8019AD50_lbl_804B8FF8 fe_obj_bigtutate_resource_descriptor;
extern s32 TObjBigTuitate__bml_resource;
void fn_8019AD50(void);
}

extern "C" {

void fn_8019AD50(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &fe_obj_bigtutate_resource_descriptor.value, 0, 0, 0));
    }
    TObjBigTuitate__bml_resource = var_r0;
}

}
