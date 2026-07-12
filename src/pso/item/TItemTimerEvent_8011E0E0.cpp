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

void TItemTimerEvent__sub_8011E0E0(int arg0);
void notify_if_active__15TItemTimerEventFi(int arg0);
void TItemTimerEvent__sub_8011E140(void);
M2C_UNK set_flag_10000__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK fn_8011E1D4();

void TItemTimerEvent__sub_8011E0E0(int arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) != 0U) {
        fn_8011E1D4();
    }
}

void notify_if_active__15TItemTimerEventFi(int arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) != 0U) {
        set_flag_10000__10TObjPlayerFPv();
    }
}

extern struct VObj_8011E140 *lbl_805D5508;

void TItemTimerEvent__sub_8011E140(void) {
    if (lbl_805D5508 != NULL) {
        lbl_805D5508->m0(1);
    }
    lbl_805D5508 = NULL;
}

}
