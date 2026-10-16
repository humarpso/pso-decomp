#include "types.h"
#include "pso/player/TUnk_804A5E20.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFUl(void *, int);

extern s32 lbl_804A5E20[];
extern s32 spawn_target_needle[];
extern s32 spawn_needle_wall_impact[];
extern s32 create_shoot_model__10TObjPlayerFUiiif[];

void *TUnk_804A5E20::init_state_2() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A5E20;
    set_status_flags__10TObjPlayerFUl(this, 2);
    (*(s32 * *)((u8 *)this + 0x1F4)) = spawn_target_needle;
    (*(s32 * *)((u8 *)this + 0x1EC)) = spawn_needle_wall_impact;
    *(s32 **)((s8 *)this + 0x1F0) = create_shoot_model__10TObjPlayerFUiiif;
    return this;
}

}
