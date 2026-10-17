#include "types.h"
#include "pso/ui/TAdDialingGC.h"

struct Obj_80328990 { u8 pad[0x9C]; u32 state; };

extern "C" {
s32 refresh_display__12TAdDialingGCFv(void *);
void TAdDialingGC::handle_state() {
    s32 temp_r0;

    temp_r0 = this->m_9c;
    switch (temp_r0) {
    case 11:
        TAdDialingGC::update_dialing_display(0x11);
        return;
    case 12:
        TAdDialingGC::update_dialing_display(0x12);
        return;
    case 13:
        TAdDialingGC::update_dialing_display(0x13);
        return;
    case 14:
        refresh_display__12TAdDialingGCFv(this);
        return;
    case 15:
        TAdDialingGC::update_dialing_display(0x16);
        return;
    default:
        TAdDialingGC::update_dialing_display(0x10);
        return;
    }
}
void TAdDialingGC::update_status_display() {
    Obj_80328990 *arg0 = (Obj_80328990 *)this;
    switch (arg0->state) {
    case 1:
        refresh_display__12TAdDialingGCFv(arg0);
        return;
    case 2:
        TAdDialingGC::update_dialing_display(9);
        return;
    case 3:
        TAdDialingGC::update_dialing_display(0xA);
        return;
    case 4:
        TAdDialingGC::update_dialing_display(0xC);
        return;
    case 5:
        TAdDialingGC::update_dialing_display(0xB);
        return;
    case 6:
        TAdDialingGC::update_dialing_display(0xD);
        return;
    case 7:
        TAdDialingGC::update_dialing_display(6);
        return;
    case 16:
        TAdDialingGC::update_dialing_display(5);
        return;
    case 8:
        TAdDialingGC::update_dialing_display(0xF);
        return;
    case 9:
        TAdDialingGC::update_dialing_display(0x10);
        return;
    case 10:
        TAdDialingGC::update_dialing_display(0x10);
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
