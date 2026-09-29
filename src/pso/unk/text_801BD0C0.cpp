#include "types.h"
struct B_801BD240 { u8 pad[8]; };

struct V_801BD240 : B_801BD240 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void m3(s32);
};

struct P_801BD240 { u8 pad0[0xE0]; s32 fE0; u8 pad1[0x380 - 0xE4]; V_801BD240 *f380; };

extern "C" {
u16 obj_getField1c(void *);
void TObjPlayer__sub_801B55B0(void *, s32);
void TObjPlayer__sub_801BD1B4(void *);
void update_input_and_draw__10TObjPlayerFi(void *);
extern s32 TObjPlayer__data_805D5D80;
void TObjPlayer__sub_801BD240(P_801BD240 *arg0);
}

extern "C" {

void TObjPlayer__sub_801BD240(P_801BD240 *arg0) {
    s32 t = obj_getField1c(arg0) * 0xC00;
    arg0->fE0 = TObjPlayer__data_805D5D80 + t;
    TObjPlayer__sub_801B55B0(arg0, t);
    arg0->f380->m3(obj_getField1c(arg0));
    TObjPlayer__sub_801BD1B4(arg0);
    update_input_and_draw__10TObjPlayerFi(arg0);
}

}
