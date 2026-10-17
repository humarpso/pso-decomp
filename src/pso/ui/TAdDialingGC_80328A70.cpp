#include "types.h"
#include "pso/misc/TLobby_8013AD38.h"
#include "pso/ui/TAdDialingGC.h"

extern "C" {

s32 render_status_disp__23TAdSinglePlyChrSelectGCFff(f32, f32);

extern const f32 TAdDialingGC__data_805DF6EC;
extern const f32 lbl_805DF6F0;

void TAdDialingGC::init_dialog() {
    TAdDialingGC__sub_8013ADBC(0);
    render_status_disp__23TAdSinglePlyChrSelectGCFff(TAdDialingGC__data_805DF6EC, lbl_805DF6F0);
}

extern const f32 lbl_805DF6F4;
s32 fn_80145A44(void *);
s32 call_146CA0_with_5708__6TLobbyFv();
int sprintf(char *, const char *, ...);
extern char lbl_804767C8[];
void TAdDialingGC::draw_dialing_status() {
    char a[0x20];
    char c[0x100];
    char b[0x100];
    if (fn_80145A44(a) == 0) {
        a[0] = 0;
    }
    sprintf(b, lbl_804767C8, a, call_146CA0_with_5708__6TLobbyFv());
    sprintf(c, (char *)TAdDialingGC__sub_8013ADBC(1), b);
    ((void (*)(void *, f32, f32))render_status_disp__23TAdSinglePlyChrSelectGCFff)(c, TAdDialingGC__data_805DF6EC, lbl_805DF6F4);
}

}
