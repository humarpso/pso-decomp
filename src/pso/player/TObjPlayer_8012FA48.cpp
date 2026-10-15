#include "types.h"

extern "C" {

void *initialize_effect_object__10TObjPlayerFPv(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void construct_target_cursor_records__10TObjPlayerFi(void *);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern s32 lbl_804A65E0[];

void *initialize_effect_object__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A65E0;
    construct_target_cursor_records__10TObjPlayerFi((void *)((char *)arg0 + 516));
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    set_effect_state__10TObjPlayerFPvi(arg0, 5);
    return arg0;
}

}
