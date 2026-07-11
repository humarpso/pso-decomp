#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__18TObjEneBalClawClawFPvPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5);
void * TObjEneBalClawClaw__sub_80091970(void *arg0);
void *TObjEneBalClawClaw__sub_800919D8(void *arg0, s16 arg1);
void *TObjControl__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__14TObjEneBalClawFv(void *, int);
void *__nw__7TObjectFUl(int);
void *fn_80091B98(void *, void *, void *, void *, void *, void *, void *, void *);
void *fn_80091C58(void *, void *, void *);
void fn_80156720(void *);

extern void *tl_04;

void * create__18TObjEneBalClawClawFPvPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x428);
    if (o2 != NULL) {
        o2 = fn_80091B98(o2, o, arg0, arg1, arg2, arg3, arg4, arg5);
    }
    return o2;
}

extern void *tl_04;

void * TObjEneBalClawClaw__sub_80091970(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x428);
    if (o2 != NULL) {
        o2 = fn_80091C58(o2, o, arg0);
    }
    return o2;
}

extern M2C_UNK lbl_8048F148[];

void *TObjEneBalClawClaw__sub_800919D8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048F148;
        fn_80156720(arg0);
        __dt__14TObjEneBalClawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
