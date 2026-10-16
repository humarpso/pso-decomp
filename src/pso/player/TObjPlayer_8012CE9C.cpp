#include "types.h"
#include "pso/player/TUnk_804A5740.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TObjPlayer__sub_8012CE9C(void* p);
int rotate_matrix_x(void*, void*);
int add_angle_clamped__10TObjPlayerFPlll(void*, int, int);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFUl(void *, int);
int get_player_list__10TObjPlayerFv(void*);

int TObjPlayer__sub_8012CE9C(void* p) { return add_angle_clamped__10TObjPlayerFPlll((char*)p + 0x1f8, 1820, 10922); }
void TUnk_804A5740::update_attack() { add_angle_clamped__10TObjPlayerFPlll((char*)this + 0x1f8, -1820, 0); }
void TObjPlayer::release_container_if_positive() { if (get_player_list__10TObjPlayerFv(this) > 0) { rotate_matrix_x((void*)0, *(void**)((char*)this + 0x1f8)); } }

extern s32 lbl_804A5740[];

void *TUnk_804A5740::init_state_1f8() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A5740;
    *(u32 *)((s8 *)this + 0x1F8) = 10922;
    set_status_flags__10TObjPlayerFUl(this, 1536);
    return this;
}

}
