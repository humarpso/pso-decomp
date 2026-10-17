#include "types.h"
#include "pso/item/TItemLockCountCtrl.h"
#include "pso/item/TItemLockCountCtrl_8011E184.h"
#include "pso/TItemLockCountCtrl.h"
#include "pso/items/TItemWeapon.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void *__nw__7TObjectFUl(int);

extern unsigned char notify_if_active__15TItemTimerEventFi[];
extern unsigned char check_battle_ctrl__15TItemTimerEventFi[];
extern void *item_timer_event_instance;

void TItemLockCountCtrl::create_instance() {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TItemLockCountCtrl__ct((void *)o, 0, 12, (s32)notify_if_active__15TItemTimerEventFi, (s32)check_battle_ctrl__15TItemTimerEventFi);
    }
    item_timer_event_instance = o;
}

void fn_8011E1D4(u8 *arg0) {
    if (!(*(s32 *)((s8 *)arg0 + 0x890) & 0x10)) {
        TObjPlayer__sub_8011E204((void *)((void *)(arg0)), 0x10000);
    }
}
void TObjPlayer__sub_8011E204(void *arg0, s32 arg1) {
  s32 *new_var;
  int new_var2;
  new_var2 = ~arg1;
  new_var = (s32 *) (((s8 *) arg0) + 0x334);
  *new_var = (s32) ((*(s32 *)&((TObjPlayer *)arg0)->m_334) & new_var2);
}

}
