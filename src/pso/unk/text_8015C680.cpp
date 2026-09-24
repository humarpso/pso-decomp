#include "types.h"

struct Obj_8015C88C {
    u8 pad[0x18];
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

extern "C" {
extern const f32 lbl_805DB398;
extern const f32 lbl_805DB39C;
f32 TObjPlayer__sub_8015C88C(Obj_8015C88C *self);
}

extern "C" {

void TLobby__sub_8015C8C4(void);
int TLobby__sub_8015C8C8(void);
int TLobby__sub_8015C8D0(void);
int TObjPlayer__sub_8015C884(void);

int TObjPlayer__sub_8015C884(void) { return 1; }

f32 TObjPlayer__sub_8015C88C(Obj_8015C88C *self) {
    self->m20(0, lbl_805DB398);
    return lbl_805DB39C;
}

void TLobby__sub_8015C8C4(void) {  }
int TLobby__sub_8015C8C8(void) { return 1; }
int TLobby__sub_8015C8D0(void) { return 1; }

}
