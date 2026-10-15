#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void set_flags__10TObjPlayerFUl(void *, int);
void construct_target_cursor_records__10TObjPlayerFv(void *);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFl(void *, int);

extern s32 lbl_804A65E0[];

void *TObjPlayer::initialize_effect_object() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A65E0;
    construct_target_cursor_records__10TObjPlayerFv((void *)((char *)this + 516));
    set_flags__10TObjPlayerFUl((void *)((char *)this + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(this, 34);
    set_effect_state__10TObjPlayerFl(this, 5);
    return this;
}

}
