#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
void check_player_proximity__12TOChatSensorFPv(u8 *arg0);
u8 TODoorAncient08__sub_80229220(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(u32);
void run_task__12TOChatSensorFv(u8 *arg0);
f32 TObjPlayer__sub_8001978C(f32);
s32 check_demo_mode__10TObjPlayerFv(void);
M2C_UNK TObjRoomId__sub_80141CF4(void *, void *);
extern const f32 lbl_805DB388;
extern const f32 lbl_805DB38C;
void render__12TOChatSensorFv(u8 *arg0);
void *strncpy(void *, void *, s32);
void TOChatSensor__sub_8015ACE4(C_8015ACE4 *arg0, void *arg1);
s16 TObjPlayer__sub_800196EC(void);
void send_state__12TOChatSensorFPv(void *);
void init_packet_type__12TOChatSensorFPv(void *);
void *__ct__12TQuestThreadFv(void *, void *, u32);
s32 fn_80225CD8(void *, void *, void *);
void *__nw__7TObjectFUl(u32);
void set_parent__7TObjectFP7TObject(void *, void *);
extern void *lbl_805D5544;
extern void *lbl_805D5EE8;
extern void *tl_00;
void TOChatSensor__sub_8015AD54(u8 *arg0, void *arg1);
}

extern "C" {

void check_player_proximity__12TOChatSensorFPv(u8 *arg0);
void init_params__12TOChatSensorFPv(void *arg0);
f32 TObjPlayer__sub_80141CF8(void *, void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);

extern s32 lbl_805D53A0;

void check_player_proximity__12TOChatSensorFPv(u8 *arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (lbl_805D53A0));
    if (temp_r3 != 0U) {
        if (TObjPlayer__sub_80141CF8((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < M2C_FIELD(arg0, f32 *, 0x9C)) {
            M2C_FIELD(arg0, s32 *, 0xA0) = 1;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    }
}

extern s32 *lbl_805D58D4;

void TOChatSensor__sub_8015ACE4(C_8015ACE4 *arg0, void *arg1) {
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

void TOChatSensor__sub_8015AD54(u8 *arg0, void *arg1) {
    Packet_8015AD54 pkt;
    s32 r;
    u32 mode;
    void *o;
    if (arg1 != NULL && *(s32 *)(arg0 + 0xA0) == 1) {
        mode = *(u32 *)(arg0 + 0x98);
        r = -1;
        if (mode == 0) {
            r = fn_80225CD8(arg1, arg0 + 0xA4, lbl_805D5544);
        } else if (mode == 1) {
            r = 0;
        }
        if (r > -1) {
            if (*(u32 *)(arg0 + 0x90) == 0) {
                if (lbl_805D5EE8 != NULL) {
                    o = __nw__7TObjectFUl(0x194);
                    if (o != NULL) {
                        o = __ct__12TQuestThreadFv(o, lbl_805D5EE8, *(u32 *)(arg0 + 0x94));
                    }
                    *(void **)(arg0 + 0xC4) = o;
                    if (*(void **)(arg0 + 0xC4) != NULL) {
                        set_parent__7TObjectFP7TObject(*(void **)(arg0 + 0xC4), tl_00);
                    }
                    *(s32 *)(arg0 + 0xC8) = 1;
                }
            } else if (*(u16 *)(arg0 + 0x94) < 0x100) {
                init_packet_type__12TOChatSensorFPv(&pkt);
                pkt.a = TObjPlayer__sub_800196EC();
                pkt.b = *(u16 *)(arg0 + 0x94);
                pkt.c = 1;
                send_state__12TOChatSensorFPv(&pkt);
            }
        }
    }
}

void init_params__12TOChatSensorFPv(void *arg0) {
    f32 temp_f0;
    s32 temp_r5;

    M2C_FIELD(arg0, u32 *, 0x90) = (u32) M2C_FIELD(arg0, u32 *, 0x5C);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) >= 2U) {
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x98) = (u32) M2C_FIELD(arg0, u32 *, 0x60);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x98) >= 2U) {
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (temp_f0 * temp_f0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x94) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    } else {
        M2C_FIELD(arg0, u16 *, 0x94) = (u16) M2C_FIELD(arg0, s32 *, 0x84);
        if ((u16) M2C_FIELD(arg0, u16 *, 0x94) > 0x100U) {
            M2C_FIELD(arg0, u16 *, 0x94) = 0xFFFF;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xCC);
    if ((temp_r5 != 0) && ((temp_r5 < 0) || ((s32) *lbl_805D58D4 <= temp_r5))) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
}

typedef struct Stack_8015AF10 Stack_8015AF10;
void render__12TOChatSensorFv(u8 *arg0) {
  Stack_8015AF10 stack;
  if (check_demo_mode__10TObjPlayerFv() == 1)
  {
    stack.sp8 = lbl_805DB388;
    stack.spC = lbl_805DB388;
    stack.sp14 = (stack.sp10 = lbl_805DB38C);
    TObjPlayer__sub_8001978C(*((f32 *) (((s8 *) arg0) + 0x9C)));
    TObjRoomId__sub_80141CF4((void *) (arg0 + 0x38), (void *) (&stack.sp8));
  }
}

void run_task__12TOChatSensorFv(u8 *arg0) {
    s32 temp_r0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) == 0U) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
        switch (temp_r0) {
        case 0:
            check_player_proximity__12TOChatSensorFPv((u8 *)((void *) (arg0)));
            return;
        case 1:
            if (((u32) M2C_FIELD(arg0, u32 *, 0xC4) != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xC4)) == 0)) {
                M2C_FIELD(arg0, u32 *, 0xC4) = 0U;
                M2C_FIELD(arg0, s32 *, 0xC8) = 0;
                return;
            }
            break;
        }
    } else {
        if (TODoorAncient08__sub_80229220((int) (M2C_FIELD(arg0, u16 *, 0x94))) == 0) {
            check_player_proximity__12TOChatSensorFPv((u8 *)((void *) (arg0)));
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    }
}

}
