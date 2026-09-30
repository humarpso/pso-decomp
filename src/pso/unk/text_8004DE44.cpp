#include "types.h"
struct S_8004DE44 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x94 - 0x1c];
    u8 f94[0x14];
    void *ptr[5];
};

extern "C" {
void fn_8004AA04(void *);
void TCameraCtrl__sub_80069DA8();
void request_destroy__11TBoss4Type2FUi(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, s32);
void __dl__7TObjectFPv(void *);
extern u8 lbl_8048555C[];
S_8004DE44 *fn_8004DE44(S_8004DE44 *o, s16 flag);
}

extern "C" {

S_8004DE44 *fn_8004DE44(S_8004DE44 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = lbl_8048555C;
        fn_8004AA04(o->f94);
        for (i = 0; i < 5; i++) {
            if (o->ptr[i] != 0) {
                request_destroy__11TBoss4Type2FUi(o->ptr[i]);
                o->ptr[i] = 0;
            }
        }
        TCameraCtrl__sub_80069DA8();
        destroy_particle__13TParticleCtrlFPvs(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

}
