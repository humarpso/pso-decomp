#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable__13TLockOnCursorFPv(void *arg0);
void init_gc_tag(void *);

extern M2C_UNK lbl_804A7248[];

void *init_vtable__13TLockOnCursorFPv(void *arg0) {
    init_gc_tag(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x8) = lbl_804A7248;
    M2C_FIELD(arg0, u32 *, 0x4) = 0;
    return arg0;
}

}
