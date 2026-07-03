#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern unsigned char fn_8011E110[];
extern unsigned char fn_8011E0E0[];
extern void *lbl_805D5508;
void *__nw__7TObjectFUl(int);
void *TItemLockCountCtrl__ct(void *, int, int, void *, void *);

void fn_8011E184(void) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TItemLockCountCtrl__ct(o, 0, 12, fn_8011E110, fn_8011E0E0);
    }
    lbl_805D5508 = o;
}

}
