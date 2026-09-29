#include "types.h"

struct O_8032745C { u8 pad[0x44]; s32 mode; };

extern "C" {
s32 TLobby__sub_80145DB4(int);
s32 TAdScrollWinGC__sub_8032745C(O_8032745C *arg0);
}

extern "C" {

void render__14TAdScrollWinGCFv(void* p);

int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int render_status_value__20TWindowSubStatusDispFPv(void*);

void render__14TAdScrollWinGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); render_status_value__20TWindowSubStatusDispFPv(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }
s32 TAdScrollWinGC__sub_8032745C(O_8032745C *arg0) {
    s32 r = 0;
    switch (arg0->mode) {
    case 0:
        if (TLobby__sub_80145DB4(4) != 0) {
            r = 0x14;
        } else {
            r = 0;
        }
        break;
    case 1:
        r = 0xA;
        break;
    case 2:
        r = -1;
        break;
    }
    return r;
}

}
