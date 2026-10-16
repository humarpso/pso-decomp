#include "types.h"
#include "pso/ui/TAdDialingGC.h"

extern "C" {

void TAdDialingGC__sub_801A4C90(void);
s32 TAdDialingGC__sub_801A4C9C(void);
void TAdDialingGC__sub_801A4CA4(void *arg0);
void TAdDialingGC__sub_801A4D2C(void);

    extern int player_action_provider_selector;
void TAdDialingGC__sub_801A4C90(void) { player_action_provider_selector = 1; }

extern s32 TAdDialingGC__instance;

s32 TAdDialingGC__sub_801A4C9C(void) {
    return TAdDialingGC__instance;
}

void TAdDialingGC__sub_801A4CA4(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x20);
    switch (temp_r0) {
    case 0:
        TAdDialingGC::select_dial_image((void *)1, (s32)0);
        return;
    case 1:
        TAdDialingGC::select_dial_image((void *)0, (s32)0);
        return;
    case 2:
        TAdDialingGC::select_dial_image((void *)1, (s32)1);
        return;
    case 3:
        TAdDialingGC::select_dial_image((void *)0, (s32)1);
    case 4:
        return;
    }
}
void TAdDialingGC__sub_801A4D2C(void) {  }

}
