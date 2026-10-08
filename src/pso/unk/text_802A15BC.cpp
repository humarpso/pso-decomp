#include "types.h"
struct O_802A15BC {
    u8 a[0x10];
    u8 b[8];
    s32 f18;
    u8 f1c;
    u8 c[15];
    s32 f2c;
    u8 f30, f31, f32_, f33;
    s32 f34;
    s16 d[8];
    f32 f48;
    f32 f4c;
};

extern "C" {
extern const f32 lbl_805DDDF8;
void fn_802A15BC(O_802A15BC *arg0);
}

extern "C" {

void fn_802A15BC(O_802A15BC *arg0) {
    s32 i;
    for (i = 0; i < 0x10; i++) {
        arg0->a[i] = 0;
    }
    for (i = 0; i < 8; i++) {
        arg0->b[i] = 0;
    }
    arg0->f1c = 0;
    arg0->f18 = 0;
    for (i = 0; i < 15; i++) {
        arg0->c[i] = 0;
    }
    arg0->f34 = 0;
    arg0->f33 = 0;
    arg0->f32_ = 0;
    arg0->f31 = 0;
    arg0->f30 = 0;
    arg0->f2c = 0;
    for (i = 0; i < 8; i++) {
        arg0->d[i] = 0;
    }
    arg0->f4c = lbl_805DDDF8;
    arg0->f48 = lbl_805DDDF8;
}

}
