#include "types.h"
#include "pso/ui/TAdDialingGC.h"

struct Obj_80328874 { u8 pad[0x9C]; s32 state; };

extern "C" {
void refresh_display__12TAdDialingGCFv(void *);
s32 TAdDialingGC__sub_8013ADBC();
s32 render_status_disp__23TAdSinglePlyChrSelectGCFff(f32, f32);

extern const f32 TAdDialingGC__data_805DF6EC;
extern const f32 lbl_805DF6F0;

void TAdDialingGC::update_dialing_display(int _w0) {
    TAdDialingGC__sub_8013ADBC();
    render_status_disp__23TAdSinglePlyChrSelectGCFff(TAdDialingGC__data_805DF6EC, lbl_805DF6F0);
}
void TAdDialingGC::update_status_message() {
    Obj_80328874 *arg0 = (Obj_80328874 *)this;
    switch (arg0->state) {
    case 11:
        TAdDialingGC::update_dialing_display((int)(0x11));
        return;
    case 12:
        TAdDialingGC::update_dialing_display((int)(0x12));
        return;
    case 13:
        TAdDialingGC::update_dialing_display((int)(0x13));
        return;
    case 14:
        refresh_display__12TAdDialingGCFv(arg0);
        return;
    case 8:
        TAdDialingGC::update_dialing_display((int)(0xF));
        return;
    case 15:
        TAdDialingGC::update_dialing_display((int)(0x16));
        return;
    default:
        TAdDialingGC::update_dialing_display((int)(0x10));
        return;
    }
}

}
