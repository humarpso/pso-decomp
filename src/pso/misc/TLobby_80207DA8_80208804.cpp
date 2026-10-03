#include "types.h"

extern "C" {

unsigned char read_stream_u8(void);
typedef void (*Fn_8020881C)();
struct H_8020881C { Fn_8020881C fn; u32 b; };
extern H_8020881C lbl_804C93A8[];
extern s32 lbl_805D6080;
extern s32 lbl_805D6084;
extern s32 lbl_805D6088;
s32 run_wave_event_actions(void);

    extern unsigned char* lbl_805D6078;
    extern int lbl_805D607C;
unsigned char read_stream_u8(void) { return lbl_805D6078[lbl_805D607C++]; }

s32 run_wave_event_actions(void) {
    lbl_805D6080 = 0;
    lbl_805D6084 = 0;
    lbl_805D6088 = 1;
    while (lbl_805D6080 == 0) {
        lbl_804C93A8[read_stream_u8()].fn();
    }
    return lbl_805D6084;
}

}
