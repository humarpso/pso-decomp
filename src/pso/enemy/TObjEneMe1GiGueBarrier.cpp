#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjEneMe1GiGueBarrier__ct(void *, void *, void *);
}

extern "C" {

void TObjEneMe1GiGueBarrier__sub_80325CC0(void);
void *__dt__22TObjEneMe1GiGueBarrierFv(void *arg0, s16 arg1);
void init_global__22TObjEneMe1GiGueBarrierFv(void);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void *);
s32 get_barrier_count__15TObjEneMe1GiGueFv();

extern M2C_UNK __vt__22TObjEneMe1GiGueBarrier[];

void *__dt__22TObjEneMe1GiGueBarrierFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjEneMe1GiGueBarrier;
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(M2C_FIELD(arg0, void **, 0xFC)); }
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjEneMe1GiGueBarrier__sub_80325CC0(void) {  }

extern s32 lbl_805D6C60;

void * TObjEneMe1GiGueBarrier__sub_80325CC4(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TObjEneMe1GiGueBarrier__ct(o, arg0, arg1);
    }
    return o;
}

void init_global__22TObjEneMe1GiGueBarrierFv(void) {
    lbl_805D6C60 = get_barrier_count__15TObjEneMe1GiGueFv();
}

}
