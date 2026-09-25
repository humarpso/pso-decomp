#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Entry_800E2FFC { s32 id; u8 data[0xC]; };

struct Param_800E2FFC { s32 a; s32 b; s32 c; };

struct State_800E2FFC { s32 counter; Entry_800E2FFC *list; Param_800E2FFC *params; s32 pad; };

struct Entry_800E30BC { s32 id; u8 data[0xC]; };

struct Entry_800E3074 { s32 id; u8 data[0xC]; };

struct Param_800E3074 { s32 a; s32 b; s32 c; };

struct State_800E3074 { s32 counter; Entry_800E3074 *list; Param_800E3074 *params; s32 pad; };

struct Arg_800E3074 { Entry_800E3074 *list; Param_800E3074 *params; };

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * fn_800E31C4(void *, void *, s32);
s32 TObjFish__sub_800E3124(u8 *arg0, s32 arg1);
extern State_800E2FFC lbl_80500FB0;
int TCameraCtrl__sub_80069148(void *, void *);
void TObjFish__sub_800E2FFC(void);
s32 TObjFish__sub_800E30BC(Entry_800E30BC *p);
extern State_800E2FFC lbl_80500FB0;
void TObjFish__sub_800E2FFC(void);
int set_global_state__16TObjEneRe7BeruraFi(void*);
void TObjFish__sub_800E3074(Arg_800E3074 *arg);
}

extern "C" {

s32 TObjFish__sub_800E3188(s32 arg0, s16 arg1);
void init_state_1__8TObjFishFPv(void *arg0);
M2C_UNK __dl__FPv();

void TObjFish__sub_800E2FFC(void) {
    Entry_800E2FFC *p = lbl_80500FB0.list;
    Param_800E2FFC *q = lbl_80500FB0.params;
    s32 id;
    while ((id = p->id) != -1) {
        if (id == lbl_80500FB0.counter) {
            TCameraCtrl__sub_80069148(p->data, q);
        }
        p++;
        q++;
    }
    lbl_80500FB0.counter++;
}

void TObjFish__sub_800E3074(Arg_800E3074 *arg) {
    (*(State_800E3074 *)&lbl_80500FB0).counter = 0;
    (*(State_800E3074 *)&lbl_80500FB0).list = arg->list;
    (*(State_800E3074 *)&lbl_80500FB0).params = arg->params;
    set_global_state__16TObjEneRe7BeruraFi((void *)TObjFish__sub_800E2FFC);
}

s32 TObjFish__sub_800E30BC(Entry_800E30BC *p) {
    s32 i;
    if (p == 0) {
        return 0;
    }
    for (i = 0; p->id != -1; i++, p++) {
        if (i >= 0x40) {
            return 0;
        }
    }
    return 1;
}

void init_state_1__8TObjFishFPv(void *arg0) {
    TObjFish__sub_800E3188((s32)(arg0), (s16)(1));
}

s32 TObjFish__sub_800E3124(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r0;
    if (TObjFish__sub_800E30BC((Entry_800E30BC *)(arg0)) != 0) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)8);
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = (long) (fn_800E31C4((void *) temp_r3, arg0, arg1));
        }
        return var_r0;
    }
    return 0;
}

s32 TObjFish__sub_800E3188(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
