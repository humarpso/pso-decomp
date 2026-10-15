#include "types.h"

extern "C" {

void start_srank_regen_timer__10TObjPlayerFPv(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
s32 init_item_timer_event__10TObjPlayerFPv(s32, s32, s32, s32);
s32 __nw__15TItemHeapObjectFUl(s32);
s32 construct_timer_event__10TObjPlayerFPv(s32, s32, s32, s32);

void start_srank_regen_timer__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1F8);
    switch (temp_r0) {
    case 3:
        temp_r3 = __nw__15TItemHeapObjectFUl(0x2C);
        if (temp_r3 != 0) {
            init_item_timer_event__10TObjPlayerFPv(temp_r3, *(s32 *)((s8 *)arg0 + 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
        return;
    case 4:
        temp_r3_2 = __nw__15TItemHeapObjectFUl(0x2C);
        if (temp_r3_2 != 0) {
            construct_timer_event__10TObjPlayerFPv(temp_r3_2, *(s32 *)((s8 *)arg0 + 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
        break;
    }
}

}
