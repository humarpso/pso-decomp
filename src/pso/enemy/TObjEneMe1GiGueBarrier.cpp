#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_global__22TObjEneMe1GiGueBarrierFv(void);
s32 get_barrier_count__15TObjEneMe1GiGueFv();

extern s32 lbl_805D6C60;

void init_global__22TObjEneMe1GiGueBarrierFv(void) {
    lbl_805D6C60 = get_barrier_count__15TObjEneMe1GiGueFv();
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802CABE4
#include "types.h"

extern "C" {

int TObjEneMe1GiGue__sub_802CB03C(void*);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p);
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p);
s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void* p);
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p);

void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p) { *(u32*)((char*)p + 0x388) &= 0xfff7ffff; }
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p) { *(u32*)((char*)p + 0x388) |= 0x80000; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CAC40
#include "types.h"

extern "C" {

int TObjEneMe1GiGue__sub_802CB03C(void*);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p);
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p);
s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void* p);
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p);

s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void* p) { return *(s32*)((char*)p + 0x44c); }
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p) { return *(s32*)((char*)p + 0x60); }
void* update_and_get_pos__22TObjEneMe1GiGueBarrierFPv(void* p) { TObjEneMe1GiGue__sub_802CB03C(p); return (char*)p + 0x3b4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80325B60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TObjEneMe1GiGueBarrierFv(void *arg0, s16 arg1);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void *);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80325CC0
#include "types.h"

extern "C" {

void TObjEneMe1GiGueBarrier__sub_80325CC0(void);

void TObjEneMe1GiGueBarrier__sub_80325CC0(void) {  }

}
#endif
#endif
