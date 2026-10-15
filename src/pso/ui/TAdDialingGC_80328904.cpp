#include "types.h"
#include "pso/ui/TAdDialingGC.h"

struct Obj_80328990 { u8 pad[0x9C]; u32 state; };

extern "C" {
s32 update_dialing_display__12TAdDialingGCFi(s32);
s32 refresh_display__12TAdDialingGCFv(void *);
}

extern "C" {

s32 update_dialing_display__12TAdDialingGCFi(s32);

void TAdDialingGC::handle_state() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x9C);
    switch (temp_r0) {
    case 11:
        update_dialing_display__12TAdDialingGCFi(0x11);
        return;
    case 12:
        update_dialing_display__12TAdDialingGCFi(0x12);
        return;
    case 13:
        update_dialing_display__12TAdDialingGCFi(0x13);
        return;
    case 14:
        refresh_display__12TAdDialingGCFv((void *)(this));
        return;
    case 15:
        update_dialing_display__12TAdDialingGCFi(0x16);
        return;
    default:
        update_dialing_display__12TAdDialingGCFi(0x10);
        return;
    }
}
void TAdDialingGC::update_status_display() {
    Obj_80328990 *arg0 = (Obj_80328990 *)this;
    switch (arg0->state) {
    case 1:
        refresh_display__12TAdDialingGCFv((void *)(arg0));
        return;
    case 2:
        update_dialing_display__12TAdDialingGCFi((s32)(9));
        return;
    case 3:
        update_dialing_display__12TAdDialingGCFi((s32)(0xA));
        return;
    case 4:
        update_dialing_display__12TAdDialingGCFi((s32)(0xC));
        return;
    case 5:
        update_dialing_display__12TAdDialingGCFi((s32)(0xB));
        return;
    case 6:
        update_dialing_display__12TAdDialingGCFi((s32)(0xD));
        return;
    case 7:
        update_dialing_display__12TAdDialingGCFi((s32)(6));
        return;
    case 16:
        update_dialing_display__12TAdDialingGCFi((s32)(5));
        return;
    case 8:
        update_dialing_display__12TAdDialingGCFi((s32)(0xF));
        return;
    case 9:
        update_dialing_display__12TAdDialingGCFi((s32)(0x10));
        return;
    case 10:
        update_dialing_display__12TAdDialingGCFi((s32)(0x10));
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
