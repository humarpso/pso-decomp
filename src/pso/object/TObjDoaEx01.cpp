#include "types.h"
#include "pso/object/TObjDoaEx01.h"

extern "C" {

s32 try_open__11TObjDoaEx01Fv();
s32 draw_model__11TObjDoaEx01Fv();

void TObjDoaEx01::render() {
    if (this->m_d0 & 1) {
        draw_model__11TObjDoaEx01Fv();
        return;
    }
    try_open__11TObjDoaEx01Fv();
}

}
