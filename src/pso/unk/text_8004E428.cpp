#include "types.h"
struct S_8004E634 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x90 - 0x1c];
    void *ptr[4];
    u8 pada0[0x11c - 0xa0];
    u8 f11c[0x14];
};

extern "C" {
void fn_8004AA04(void *);
void restore_player_cameras();
void request_destroy__11TBoss4Type2FUi(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, s32);
void __dl__7TObjectFPv(void *);
extern u8 lbl_80485640[];
S_8004E634 *fn_8004E634(S_8004E634 *o, s16 flag);
}

extern "C" {

S_8004E634 *fn_8004E634(S_8004E634 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = lbl_80485640;
        fn_8004AA04(o->f11c);
        for (i = 0; i < 4; i++) {
            if (o->ptr[i] != 0) {
                request_destroy__11TBoss4Type2FUi(o->ptr[i]);
                o->ptr[i] = 0;
            }
        }
        restore_player_cameras();
        destroy_particle__13TParticleCtrlFPvs(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

}
