#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8012A3B4(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

extern M2C_UNK s_rank_windmill_weapon_vtable[];

void *TObjPlayer__sub_8012A3B4(void *arg0) {
    construct_srank_weapon(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = s_rank_windmill_weapon_vtable;
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    M2C_FIELD(arg0, u32 *, 0x200) = 3276;
    M2C_FIELD(arg0, u32 *, 0x204) = 0;
    M2C_FIELD(arg0, u32 *, 0x208) = 1;
    return arg0;
}

}
