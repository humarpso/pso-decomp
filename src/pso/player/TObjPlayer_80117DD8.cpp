#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *construct_timer_event__10TObjPlayerFPv(void *arg0);
void *init_item_timer_event__10TObjPlayerFPv(void *arg0);
void TItemTimerEvent__ct(void *);

extern M2C_UNK lbl_804A0628[];

void *construct_timer_event__10TObjPlayerFPv(void *arg0) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0628;
    return arg0;
}

extern M2C_UNK lbl_804A0648[];

void *init_item_timer_event__10TObjPlayerFPv(void *arg0) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0648;
    return arg0;
}

}
