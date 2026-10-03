#include "types.h"

typedef struct MsgA_801C9400 {
    u8 pad0[2];
    s16 f2;
} MsgA_801C9400;

typedef struct MsgB_801C9400 {
    u8 pad0[2];
    s16 f2;
    s32 f4;
    s16 f8;
    s16 fa;
} MsgB_801C9400;

extern "C" {
s32 is_active__8TItemMagFPv();
void run_action_state_phase__10TObjPlayerFisi(void *, int, int);
void TObjPlayer__sub_801C94B8(u8 *arg0);
s32 obj_isState2_324(void *);
s32 obj_getS16_32C(void * a0);
s32 obj_getField1c(void * a0);
s32 is_active__8TItemMagFPv();
void init_stick_escape_detector(void *, s32);
void TObjPlayer__sub_801C0708(void *);
void TObjPlayer__sub_801C0734(void *);
void set_type_53__10TObjPlayerFPv(void *);
void send_name__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801D2878(void *);
void TObjPlayer__sub_801C9400(u8 *arg0);
}

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
s32 send_6x2F_change_player_hp(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 is_status_flag_200__10TObjPlayerFPv(void);
void TObjPlayer__sub_801C959C(void);
s32 can_guard__10TObjPlayerFPv(void * a0 = 0);
s32 obj_clearFlags30(void * a0 = 0, s32 a1 = 0);
s32 obj_getField1c(void * a0 = 0);
s32 obj_getS16_32C(void * a0 = 0);
s32 use_current_item__10TObjPlayerFPv(void * a0 = 0);

void TObjPlayer__sub_801C9400(u8 *arg0) {
    MsgA_801C9400 a;
    MsgB_801C9400 b;
    if (is_active__8TItemMagFPv() == 0) {
        init_stick_escape_detector(arg0 + 0x64C, TObjPlayer__sub_801D2878(arg0 + 0x550));
    }
    if ((arg0 == NULL) || (obj_isState2_324(arg0) == 0)) {
        set_type_53__10TObjPlayerFPv(&a);
        a.f2 = ((s16)obj_getField1c(arg0));
        send_name__10TObjPlayerFPv(&a);
        TObjPlayer__sub_801C0708(&b);
        b.f2 = ((s16)obj_getField1c(arg0));
        b.f4 = 0;
        b.f8 = ((s16)obj_getS16_32C(arg0));
        b.fa = ((s16)obj_getField1c(arg0));
        TObjPlayer__sub_801C0734(&b);
    }
}

void TObjPlayer__sub_801C94B8(u8 *arg0) {
    switch (*(s16 *)(arg0 + 0x328)) {
    case 1:
        if (is_active__8TItemMagFPv() == 0) {
            run_action_state_phase__10TObjPlayerFisi(arg0, 1, 0);
        }
        break;
    }
}

}
