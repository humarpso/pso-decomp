#include "types.h"
struct V_8035D8B0 { s32 a; f32 b; s32 c; };

struct W_8035D8B0 { u8 pad0[0x20]; V_8035D8B0 v; };

extern "C" {
s32 TOSwitchAttack__sub_80087278(void *, int, int);
void create_TDPBShower(int, void *);
extern s32 tl_02;
extern const f32 lbl_805E01C8;
void fn_8035D8B0(W_8035D8B0 *arg0);
}

extern "C" {

void fn_8035D8B0(W_8035D8B0 *arg0) {
    V_8035D8B0 v = arg0->v;
    v.b = lbl_805E01C8;
    TOSwitchAttack__sub_80087278(&v, 0x21C, 0x40);
    TOSwitchAttack__sub_80087278(&v, 0x21D, 0x40);
    create_TDPBShower(tl_02, &arg0->v);
}

}
