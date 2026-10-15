#include "types.h"

extern "C" {
void TOBind__sub_8015860C(u8 *arg0);
}

extern "C" {

void run_task__6TOBindFv(void *arg0);
s32 TOBind__sub_80158608(void *);
void TORainbowCave01__sub_80158604(void);
s32 get_register__12TQuestThreadFPvi(s32, s32);
s32 check_demo_mode__10TObjPlayerFv();
s32 clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, s32);

extern s32 quest_mission_manager;

void TOBind__sub_8015860C(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) (*(f32 *)((s8 *)arg0 + 0xB8) + *(f32 *)((s8 *)arg0 + 0xC0));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0xBC);
    temp_f0 = *(f32 *)((s8 *)arg0 + 0xB8);
    if (temp_f1 < temp_f0) {
        *(f32 *)((s8 *)arg0 + 0xB8) = (f32) (temp_f0 - temp_f1);
    }
}

void run_task__6TOBindFv(void *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOBind__sub_80158608((void *)(arg0));
        return;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xB0) != 1) {
        if (get_register__12TQuestThreadFPvi(quest_mission_manager, *(s32 *)((s8 *)arg0 + 0xB4)) != 0) {
            *(s32 *)((s8 *)arg0 + 0xB0) = 1;
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        }
        TOBind__sub_8015860C((u8 *)((void *)(arg0)));
    }
}

}
