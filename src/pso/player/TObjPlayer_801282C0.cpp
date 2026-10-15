#include "types.h"

extern "C" {

void *init_mode__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

extern s32 lbl_804A3A20[];

void *init_mode__10TObjPlayerFPv(void *arg0) {
    construct_srank_weapon(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A3A20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1536);
    return arg0;
}

}
