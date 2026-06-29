#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8011E140 { char pad[0x18]; };
struct VObj_8011E140 : Base_8011E140 {
    virtual void m0(int);
};

extern "C" {

extern struct VObj_8011E140 *lbl_805D5508;

void fn_8011E140(void) {
    if (lbl_805D5508 != NULL) {
        lbl_805D5508->m0(1);
    }
    lbl_805D5508 = NULL;
}

}
