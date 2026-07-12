#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_instance__18TItemLockCountCtrlFv(void);
void *TItemLockCountCtrl__ct(void *, int, int, void *, void *);
void *__nw__7TObjectFUl(int);

extern unsigned char notify_if_active__15TItemTimerEventFi[];
extern unsigned char TItemTimerEvent__sub_8011E0E0[];
extern void *lbl_805D5508;

void create_instance__18TItemLockCountCtrlFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TItemLockCountCtrl__ct(o, 0, 12, notify_if_active__15TItemTimerEventFi, TItemTimerEvent__sub_8011E0E0);
    }
    lbl_805D5508 = o;
}

}
