#include "types.h"

extern "C" {

void draw_string__9TLanguageFPvPvi(void *arg0, void *arg1, s32 arg2);

s32 fn_801A5778();
s32 GXDrawDone();
s32 init_and_load_tlut(s32, u16, s16, s32);

void draw_string__9TLanguageFPvPvi(void *arg0, void *arg1, s32 arg2) {
    fn_801A5778();
    init_and_load_tlut(arg2, *(u16 *)((s8 *)arg1 + 4), *(s16 *)((s8 *)arg1 + 0xA), *(s32 *)((s8 *)arg1 + 0));
    GXDrawDone();
}

}
