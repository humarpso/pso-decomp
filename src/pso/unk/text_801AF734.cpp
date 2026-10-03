#include "types.h"
struct B_801AF734 { u8 pad[0x18]; };

struct V_801AF734 : B_801AF734 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void *m14();
};

extern "C" {
s32 get_class_index__10TObjPlayerFPv(void *);
s32 are_trap_counts_full(void *, void *, int);
s32 are_traps_full__10TObjPlayerFPv(V_801AF734 *arg0);
}

extern "C" {

s32 are_traps_full__10TObjPlayerFPv(V_801AF734 *arg0) {
    return are_trap_counts_full((u8 *)arg0 + 0x7C4, arg0->m14(), get_class_index__10TObjPlayerFPv(arg0)) != 0 ? 1 : 0;
}

}
