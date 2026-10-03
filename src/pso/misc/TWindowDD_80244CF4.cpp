#include "types.h"

extern "C" {

void draw_default_entry__9TWindowDDFi(s32 arg0);
int setup_window_draw_context(s32, s32);
s32 fn_8026CB68();

void draw_default_entry__9TWindowDDFi(s32 arg0) {
    setup_window_draw_context(arg0, fn_8026CB68());
}

}
