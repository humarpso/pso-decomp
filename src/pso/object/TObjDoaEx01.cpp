#include "types.h"
#include "pso/object/TObjDoaEx01.h"

extern "C" {

s32 try_open__11TObjDoaEx01FPv();
s32 draw_model__11TObjDoaEx01FPv();

void TObjDoaEx01::render() {
    if (*(s32 *)((s8 *)this + 0xD0) & 1) {
        draw_model__11TObjDoaEx01FPv();
        return;
    }
    try_open__11TObjDoaEx01FPv();
}

}
