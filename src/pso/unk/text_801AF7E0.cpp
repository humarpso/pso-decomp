#include "types.h"
typedef s32 M2C_UNK;
struct Base_801AF7E0 { u8 pad[0x18]; };

struct TObjPlayer_801AF7E0 : Base_801AF7E0 {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual s32 v14();
    u8 pad1[0x7C4 - 0x1C];
    u8 slot[4];
};

extern "C" {
s32 TObjPlayer__sub_801AFDB0();
M2C_UNK fn_801C54F4(void *, s32, s32);
void TObjPlayer__sub_801AF7E0(TObjPlayer_801AF7E0 *self);
}

extern "C" {

void TObjPlayer__sub_801AF7E0(TObjPlayer_801AF7E0 *self) {
    fn_801C54F4(self->slot, self->v14(), TObjPlayer__sub_801AFDB0());
}

}
