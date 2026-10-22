#ifndef PSO_UI_TADBACKGC_H
#define PSO_UI_TADBACKGC_H

#include "types.h"

extern "C" {
int draw_title_background_layer(void *p, int a1, int a2);
int render_logo_with_default(void *p, int a1, int a2, f32 a3);
}

// --- C functions defined in TAdBackGC.cpp ---
extern "C" {
int draw_title_background_layer(void *p, int a1, int a2);
int render_logo_with_default(void *p, int a1, int a2, f32 a3);
}
// --- end of C functions

#endif
