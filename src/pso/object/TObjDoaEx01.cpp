#include "types.h"

extern "C" {

void render__11TObjDoaEx01Fv(void *arg0);

s32 try_open__11TObjDoaEx01FPv();
s32 draw_model__11TObjDoaEx01FPv();

void render__11TObjDoaEx01Fv(void *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0xD0) & 1) {
        draw_model__11TObjDoaEx01FPv();
        return;
    }
    try_open__11TObjDoaEx01FPv();
}

}
