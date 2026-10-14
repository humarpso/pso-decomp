#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void madam_umbrella_scale_canopy(void* p);
void madam_umbrella_start_regen(void *arg0);
int scale_current_matrix(void*);
s32 get_id__13TItemProArmorFPv(void *);
int get_player_list__10TObjPlayerFv(void*);
s32 __nw__15TItemHeapObjectFUl(M2C_UNK);
M2C_UNK construct_timer_event__10TObjPlayerFPv(s32, u32, s32, M2C_UNK);

void madam_umbrella_scale_canopy(void* p) { if (get_player_list__10TObjPlayerFv(p) == 2) { scale_current_matrix((char*)p + 0x1f8); } }

void madam_umbrella_start_regen(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x2C);
        if (temp_r3 != 0) {
            construct_timer_event__10TObjPlayerFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
}

}
