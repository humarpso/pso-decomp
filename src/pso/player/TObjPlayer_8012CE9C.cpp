#include "types.h"

extern "C" {

int TObjPlayer__sub_8012CE9C(void* p);
int TObjPlayer__sub_8012CEC8(void* p);
void release_container_if_positive__10TObjPlayerFPv(void* p);
void *init_state_1f8__10TObjPlayerFPv(void *arg0);
int rotate_matrix_x(void*, void*);
int add_angle_clamped__10TObjPlayerFPvii(void*, int, int);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
int get_player_list__10TObjPlayerFv(void*);

int TObjPlayer__sub_8012CE9C(void* p) { return add_angle_clamped__10TObjPlayerFPvii((char*)p + 0x1f8, 1820, 10922); }
int TObjPlayer__sub_8012CEC8(void* p) { return add_angle_clamped__10TObjPlayerFPvii((char*)p + 0x1f8, -1820, 0); }
void release_container_if_positive__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) > 0) { rotate_matrix_x((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern s32 lbl_804A5740[];

void *init_state_1f8__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A5740;
    *(u32 *)((s8 *)arg0 + 0x1F8) = 10922;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1536);
    return arg0;
}

}
