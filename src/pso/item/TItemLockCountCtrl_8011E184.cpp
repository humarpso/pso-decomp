#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TObjPlayer__sub_8011E204(void);
void create_instance__18TItemLockCountCtrlFv(void);
int fn_8011E1D4(void);
void *TItemLockCountCtrl__ct(void *, int, int, void *, void *);
u8 TObjPlayer__sub_8011E29C(void* p);
void TObjPlayer__sub_8011E2A4(void* p, u8 v);
void *__nw__7TObjectFUl(int);
void set_state_flags__10TObjPlayerFPvUi(void* p, u32 v);

extern unsigned char notify_if_active__15TItemTimerEventFi[];
extern unsigned char check_battle_ctrl__15TItemTimerEventFi[];
extern void *lbl_805D5508;

void create_instance__18TItemLockCountCtrlFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TItemLockCountCtrl__ct(o, 0, 12, notify_if_active__15TItemTimerEventFi, check_battle_ctrl__15TItemTimerEventFi);
    }
    lbl_805D5508 = o;
}

int fn_8011E1D4(void) { return 0; }
int TObjPlayer__sub_8011E204(void) { return 0; }

}
