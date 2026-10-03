#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801CEAC8();
s32 queue_physical_attack_input(s32, s32, s32, s32);
void TObjPlayer__sub_801CF2AC(void);
int TObjPlayer__sub_801CF3C0(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void update_active_item__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_801CEAC8();
    if (temp_r3 != -1) {
        queue_physical_attack_input(arg0 + 0x7CC, arg0, temp_r3, 1);
    }
}
int TObjPlayer__sub_801CF3C0(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
