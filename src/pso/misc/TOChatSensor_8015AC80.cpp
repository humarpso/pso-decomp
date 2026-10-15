#include "types.h"
#include "pso/misc/TOChatSensor.h"

struct Stack_8015AF10
{
  f32 sp8;
  f32 spC;
  f32 sp10;
  f32 sp14;
};

struct C_8015ACE4 { u8 pad0[0xA4]; s8 buf[0x20]; };

struct Packet_8015AD54 {
    u32 hdr;
    s16 a;
    u16 b;
    u8 c;
};

extern "C" {
u8 is_current_floor_switch_set(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(u32);
f32 newton_sqrtf(f32);
s32 check_demo_mode__10TObjPlayerFv(void);
s32 TObjRoomId__sub_80141CF4(void *, void *);
extern const f32 lbl_805DB388;
extern const f32 lbl_805DB38C;
void *strncpy(void *, void *, s32);
s16 get_current_floor(void);
void send_state__12TOChatSensorFv(void *);
void init_packet_type__12TOChatSensorFv(void *);
void *__ct__12TQuestThreadFv(void *, void *, u32);
s32 find_chat_keyword(void *, void *, void *);
void *__nw__7TObjectFUl(u32);
void set_parent__7TObjectFP7TObject(void *, void *);
extern void *current_language;
extern void *quest_mission_manager;
extern void *tl_00;
}

extern "C" {

f32 horizontal_distance_squared(void *, void *);
u32 get_player_by_client_id(void *);

extern s32 local_client_id;

void TOChatSensor::check_player_proximity() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r3;

    temp_r3 = get_player_by_client_id((void *) (local_client_id));
    if (temp_r3 != 0U) {
        if (horizontal_distance_squared((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < *(f32 *)((s8 *)arg0 + 0x9C)) {
            *(s32 *)((s8 *)arg0 + 0xA0) = 1;
            return;
        }
        *(s32 *)((s8 *)arg0 + 0xA0) = 0;
    }
}

extern s32 *chat_sensor_table;

void TOChatSensor::set_trigger_text(void *arg1) {
    C_8015ACE4 *arg0 = (C_8015ACE4 *)this;
    s32 i;
    if (arg1 != 0) {
        strncpy(arg0->buf, arg1, 0x1F);
        arg0->buf[0x1F] = 0;
        for (i = 0; i < 0x20; i++) {
            if (arg0->buf[i] == 0xA) {
                arg0->buf[i] = 0;
            }
        }
    }
}

void TOChatSensor::handle_chat_message(void *arg1) {
    u8 *arg0 = (u8 *)this;
    Packet_8015AD54 pkt;
    s32 r;
    u32 mode;
    void *o;
    if (arg1 != NULL && *(s32 *)(arg0 + 0xA0) == 1) {
        mode = *(u32 *)(arg0 + 0x98);
        r = -1;
        if (mode == 0) {
            r = find_chat_keyword(arg1, arg0 + 0xA4, current_language);
        } else if (mode == 1) {
            r = 0;
        }
        if (r > -1) {
            if (*(u32 *)(arg0 + 0x90) == 0) {
                if (quest_mission_manager != NULL) {
                    o = __nw__7TObjectFUl(0x194);
                    if (o != NULL) {
                        o = __ct__12TQuestThreadFv(o, quest_mission_manager, *(u32 *)(arg0 + 0x94));
                    }
                    *(void **)(arg0 + 0xC4) = o;
                    if (*(void **)(arg0 + 0xC4) != NULL) {
                        set_parent__7TObjectFP7TObject(*(void **)(arg0 + 0xC4), tl_00);
                    }
                    *(s32 *)(arg0 + 0xC8) = 1;
                }
            } else if (*(u16 *)(arg0 + 0x94) < 0x100) {
                init_packet_type__12TOChatSensorFv(&pkt);
                pkt.a = get_current_floor();
                pkt.b = *(u16 *)(arg0 + 0x94);
                pkt.c = 1;
                send_state__12TOChatSensorFv(&pkt);
            }
        }
    }
}

void TOChatSensor::init_params() {
    f32 temp_f0;
    s32 temp_r5;

    *(u32 *)((s8 *)this + 0x90) = (u32) *(u32 *)((s8 *)this + 0x5C);
    if ((u32) *(u32 *)((s8 *)this + 0x90) >= 2U) {
        *(u32 *)((s8 *)this + 0x90) = 0U;
    }
    *(u32 *)((s8 *)this + 0x98) = (u32) *(u32 *)((s8 *)this + 0x60);
    if ((u32) *(u32 *)((s8 *)this + 0x98) >= 2U) {
        *(u32 *)((s8 *)this + 0x90) = 0U;
    }
    temp_f0 = *(f32 *)((s8 *)this + 0x68);
    *(f32 *)((s8 *)this + 0x9C) = (f32) (temp_f0 * temp_f0);
    if ((u32) *(u32 *)((s8 *)this + 0x90) == 0U) {
        *(s32 *)((s8 *)this + 0x94) = (s32) *(s32 *)((s8 *)this + 0x84);
    } else {
        *(u16 *)((s8 *)this + 0x94) = (u16) *(s32 *)((s8 *)this + 0x84);
        if ((u16) *(u16 *)((s8 *)this + 0x94) > 0x100U) {
            *(u16 *)((s8 *)this + 0x94) = 0xFFFF;
        }
    }
    *(s32 *)((s8 *)this + 0xCC) = (s32) *(s32 *)((s8 *)this + 0x88);
    temp_r5 = *(s32 *)((s8 *)this + 0xCC);
    if ((temp_r5 != 0) && ((temp_r5 < 0) || ((s32) *chat_sensor_table <= temp_r5))) {
        *(s32 *)((s8 *)this + 0xCC) = 0;
    }
    *(s32 *)((s8 *)this + 0xC8) = 0;
}

typedef struct Stack_8015AF10 Stack_8015AF10;
void TOChatSensor::render() {
    u8 *arg0 = (u8 *)this;
  Stack_8015AF10 stack;
  if (check_demo_mode__10TObjPlayerFv() == 1)
  {
    stack.sp8 = lbl_805DB388;
    stack.spC = lbl_805DB388;
    stack.sp14 = (stack.sp10 = lbl_805DB38C);
    newton_sqrtf(*((f32 *) (((s8 *) arg0) + 0x9C)));
    TObjRoomId__sub_80141CF4((void *) (arg0 + 0x38), (void *) (&stack.sp8));
  }
}

void TOChatSensor::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x90) == 0U) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0xC8);
        switch (temp_r0) {
        case 0:
            check_player_proximity();
            return;
        case 1:
            if (((u32) *(u32 *)((s8 *)arg0 + 0xC4) != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv(*(u32 *)((s8 *)arg0 + 0xC4)) == 0)) {
                *(u32 *)((s8 *)arg0 + 0xC4) = 0U;
                *(s32 *)((s8 *)arg0 + 0xC8) = 0;
                return;
            }
            break;
        }
    } else {
        if (is_current_floor_switch_set((int) (*(u16 *)((s8 *)arg0 + 0x94))) == 0) {
            check_player_proximity();
            return;
        }
        *(s32 *)((s8 *)arg0 + 0xA0) = 0;
    }
}

}
