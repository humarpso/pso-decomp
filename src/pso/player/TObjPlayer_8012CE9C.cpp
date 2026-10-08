#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

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

extern M2C_UNK lbl_804A5740[];

void *init_state_1f8__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5740;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 10922;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1536);
    return arg0;
}

}
