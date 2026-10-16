#include "types.h"

#include <stddef.h>
#include "pso/misc/TOChatSensor.h"
#include "pso/player/TObjPlayer.h"
struct Stack_801781D8 {
    s32 sp8;
    s16 spC;
    u16 spE;
    s8 sp10;
    u8 pad_11[0x3];
    s32 sp14;
    s16 sp18;
    u16 sp1A;
    s8 sp1C;
};

struct Pkt_80178178 { u8 pad[4]; s16 area; u16 id; u8 mode; };

extern "C" {
s32 clear_floor_switch_flag(int, int);
s32 clear_floor_switch_flag(int, int);
s32 set_floor_switch_flag(int, int);
s32 get_current_floor();
void handle_6x93_set_switch_flag_from_timer(Pkt_80178178 *p);
}

extern "C" {

u8 TObjPlayer::is_state_ec1_ed3() {
    int var_r4;

    var_r4 = 0;
    if (((u8) *(u8 *)((s8 *)this + 0xEC) == 1) && ((u8) *(u8 *)((s8 *)this + 0xED) == 3)) {
        var_r4 = 1;
    }
    return (u8)var_r4;
}

void handle_6x93_set_switch_flag_from_timer(Pkt_80178178 *p) {
    ((TOChatSensor *)p)->swap_state_endian();
    if (p->mode == 1) {
        set_floor_switch_flag(p->id, p->area);
    } else if (p->area != get_current_floor()) {
        clear_floor_switch_flag(p->id, p->area);
    }
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TOChatSensor::send_switch_states() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_801781D8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801781D8, spC) == 0x4) ? 1 : -1];
    typedef char spE_offset[(offsetof(Stack_801781D8, spE) == 0x6) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_801781D8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801781D8, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_801781D8, sp18) == 0x10) ? 1 : -1];
    typedef char sp1A_offset[(offsetof(Stack_801781D8, sp1A) == 0x12) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_801781D8, sp1C) == 0x14) ? 1 : -1];
    Stack_801781D8 stack;
    u16 *var_r30;
    s32 var_r29;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x98) == 0U) {
        if ((u16) *(u16 *)((s8 *)arg0 + 0xA8) < 0x100U) {
            ((TOChatSensor *)(&stack.sp14))->init_packet_type();
            stack.sp18 = (s16) *(s32 *)((s8 *)arg0 + 0xB4);
            stack.sp1A = *(u16 *)((s8 *)arg0 + 0xA8);
            stack.sp1C = 0;
            ((TOChatSensor *)(&stack.sp14))->send_state();
            clear_floor_switch_flag((int) (*(u16 *)((s8 *)arg0 + 0xA8)), (int) ((s16) *(s32 *)((s8 *)arg0 + 0xB4)));
        }
    } else {
        var_r30 = (u16 *)((u8 *)(arg0 + 0xAA));
        var_r29 = 0;
        do {
            if ((u16) *var_r30 < 0x100U) {
                ((TOChatSensor *)(&stack.sp8))->init_packet_type();
                stack.spC = (s16) *(s32 *)((s8 *)arg0 + 0xB4);
                stack.spE = *var_r30;
                stack.sp10 = 1;
                ((TOChatSensor *)(&stack.sp8))->send_state();
            }
            var_r29 += 1;
            var_r30 = (u16 *)((u8 *)var_r30 + (2));
        } while (var_r29 != 3);
    }
}
#pragma pop

}
