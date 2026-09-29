#include "types.h"
struct B_801AF734 { u8 pad[0x18]; };

struct V_801AF734 : B_801AF734 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void *m14();
};

extern "C" {
s32 TObjPlayer__sub_801AFDB0(void *);
s32 fn_801C5470(void *, void *, int);
s32 TObjPlayer__sub_801AF734(V_801AF734 *arg0);
}

extern "C" {

s32 TObjPlayer__sub_801AF734(V_801AF734 *arg0) {
    return fn_801C5470((u8 *)arg0 + 0x7C4, arg0->m14(), TObjPlayer__sub_801AFDB0(arg0)) != 0 ? 1 : 0;
}

}
