#include "types.h"

extern "C" {

void *TObjQuestCol2__ct(void *arg0);
s32 TObjQuestCol2__vt13(void *arg0);
s32 TObjQuestColBase__ct();
s32 update_trigger_state__16TObjQuestColBaseFf(f32);

s32 TObjQuestCol2__vt13(void *arg0) {
    return (u32)__cntlzw(1 - update_trigger_state__16TObjQuestColBaseFf(*(f32 *)((s8 *)arg0 + 0xAC))) >> 5;
}

extern s32 __vt__13TObjQuestCol2[];
extern s32 lbl_805D340C;
extern s32 quest_mission_manager;
extern s32 quest_area_manager;

void *TObjQuestCol2__ct(void *arg0) {
    s32 temp_r0;

    TObjQuestColBase__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjQuestCol2;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D340C;
    *(s32 *)((s8 *)arg0 + 0xC0) = (s32) *(s32 *)((s8 *)arg0 + 0x88);
    if ((s32) *(s32 *)((s8 *)arg0 + 0xC0) < 0) {
        *(s32 *)((s8 *)arg0 + 0xC0) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xC0) > 1) {
        *(s32 *)((s8 *)arg0 + 0xC0) = 1;
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xC0);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0xBC) = (s32) quest_mission_manager;
        break;
    case 1:
        *(s32 *)((s8 *)arg0 + 0xBC) = (s32) quest_area_manager;
        break;
    default:
        *(s32 *)((s8 *)arg0 + 0xBC) = 0;
        break;
    }
    return arg0;
}

}
