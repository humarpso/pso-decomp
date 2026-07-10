#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowCtrl__sub_8024C5A4(void*);
struct Obj054 { char pad[0x38]; u32 field38; };
extern struct Obj054 *lbl_805D63F8;

void request_active_window_close(void) {
    if ((lbl_805D63F8 != NULL) && (lbl_805D63F8->field38 != 0U)) {
        TWindowCtrl__sub_8024C5A4((void*)lbl_805D63F8->field38);
    }
}

}
