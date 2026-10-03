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
s32 get_class_index__10TObjPlayerFPv();
M2C_UNK refill_trap_counts(void *, s32, s32);
void refill_traps__10TObjPlayerFPv(TObjPlayer_801AF7E0 *self);
}

extern "C" {

void refill_traps__10TObjPlayerFPv(TObjPlayer_801AF7E0 *self) {
    refill_trap_counts(self->slot, self->v14(), get_class_index__10TObjPlayerFPv());
}

}
