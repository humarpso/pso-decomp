#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_tentacle_if_state2__10TObjPlayerFPv(void* p);
void start_armor_timer_event__10TObjPlayerFPv(void *arg0);
int scale_current_matrix(void*);
s32 get_id__13TItemProArmorFPv(void *);
M2C_UNK init_item_timer_event__10TObjPlayerFPv(s32, u32, s32, M2C_UNK);
int get_player_list__10TObjPlayerFv(void*);
s32 alloc__13TItemProArmorFi(M2C_UNK);

void run_tentacle_if_state2__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 2) { scale_current_matrix((char*)p + 0x1f8); } }

void start_armor_timer_event__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            init_item_timer_event__10TObjPlayerFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
}

}
