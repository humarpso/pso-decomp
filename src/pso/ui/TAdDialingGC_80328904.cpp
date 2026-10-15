#include "types.h"

struct Obj_80328990 { u8 pad[0x9C]; u32 state; };

extern "C" {
s32 update_dialing_display__12TAdDialingGCFv(s32);
s32 refresh_display__12TAdDialingGCFv(void *);
void update_status_display__12TAdDialingGCFPv(Obj_80328990 *arg0);
}

extern "C" {

void handle_state__12TAdDialingGCFPv(void *arg0);
s32 update_dialing_display__12TAdDialingGCFv(s32);

void handle_state__12TAdDialingGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x9C);
    switch (temp_r0) {
    case 11:
        update_dialing_display__12TAdDialingGCFv(0x11);
        return;
    case 12:
        update_dialing_display__12TAdDialingGCFv(0x12);
        return;
    case 13:
        update_dialing_display__12TAdDialingGCFv(0x13);
        return;
    case 14:
        refresh_display__12TAdDialingGCFv((void *)(arg0));
        return;
    case 15:
        update_dialing_display__12TAdDialingGCFv(0x16);
        return;
    default:
        update_dialing_display__12TAdDialingGCFv(0x10);
        return;
    }
}
void update_status_display__12TAdDialingGCFPv(Obj_80328990 *arg0) {
    switch (arg0->state) {
    case 1:
        refresh_display__12TAdDialingGCFv((void *)(arg0));
        return;
    case 2:
        update_dialing_display__12TAdDialingGCFv((s32)(9));
        return;
    case 3:
        update_dialing_display__12TAdDialingGCFv((s32)(0xA));
        return;
    case 4:
        update_dialing_display__12TAdDialingGCFv((s32)(0xC));
        return;
    case 5:
        update_dialing_display__12TAdDialingGCFv((s32)(0xB));
        return;
    case 6:
        update_dialing_display__12TAdDialingGCFv((s32)(0xD));
        return;
    case 7:
        update_dialing_display__12TAdDialingGCFv((s32)(6));
        return;
    case 16:
        update_dialing_display__12TAdDialingGCFv((s32)(5));
        return;
    case 8:
        update_dialing_display__12TAdDialingGCFv((s32)(0xF));
        return;
    case 9:
        update_dialing_display__12TAdDialingGCFv((s32)(0x10));
        return;
    case 10:
        update_dialing_display__12TAdDialingGCFv((s32)(0x10));
        return;
    case 0:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 17:
        return;
    }
}

}
