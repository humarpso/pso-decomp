#include "types.h"

struct Obj_80328874 { u8 pad[0x9C]; s32 state; };

extern "C" {
void update_dialing_display__12TAdDialingGCFv(int);
void refresh_display__12TAdDialingGCFv(void *);
void update_status_message__12TAdDialingGCFPv(Obj_80328874 *arg0);
}

extern "C" {

s32 TAdDialingGC__sub_8013ADBC();
s32 render_status_disp__23TAdSinglePlyChrSelectGCFPvff(f32, f32);

extern const f32 TAdDialingGC__data_805DF6EC;
extern const f32 lbl_805DF6F0;

void update_dialing_display__12TAdDialingGCFv(int _w0) {
    TAdDialingGC__sub_8013ADBC();
    render_status_disp__23TAdSinglePlyChrSelectGCFPvff(TAdDialingGC__data_805DF6EC, lbl_805DF6F0);
}
void update_status_message__12TAdDialingGCFPv(Obj_80328874 *arg0) {
    switch (arg0->state) {
    case 11:
        update_dialing_display__12TAdDialingGCFv((int)(0x11));
        return;
    case 12:
        update_dialing_display__12TAdDialingGCFv((int)(0x12));
        return;
    case 13:
        update_dialing_display__12TAdDialingGCFv((int)(0x13));
        return;
    case 14:
        refresh_display__12TAdDialingGCFv(arg0);
        return;
    case 8:
        update_dialing_display__12TAdDialingGCFv((int)(0xF));
        return;
    case 15:
        update_dialing_display__12TAdDialingGCFv((int)(0x16));
        return;
    default:
        update_dialing_display__12TAdDialingGCFv((int)(0x10));
        return;
    }
}

}
