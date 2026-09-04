#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TOTrapChainSawKey__vt13(void* p);

int decode_params__14TOTrapChainSawFPv(void*);

int TOTrapChainSawKey__vt13(void* p) { return decode_params__14TOTrapChainSawFPv(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x802C84E4
#include "types.h"

extern "C" {

int TOTrapChainSaw__sub_802C91DC(void*);
void TOTrapChainSawKey__vt15(void* p);
void TOTrapChainSawKey__vt25(void);

void TOTrapChainSawKey__vt25(void) {  }
void TOTrapChainSawKey__vt15(void* p) { if (*(int*)((char*)p + 0xf0) != 1) { TOTrapChainSaw__sub_802C91DC(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C885C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TOTrapChainSawKeyFPv(void *arg0);
void *__dt__17TOTrapChainSawKeyFv(void *arg0, s16 arg1);
void *TOTrapChainSawKey__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__14TOTrapChainSawFv(void *, int);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

extern void *tl_05;

void *create__17TOTrapChainSawKeyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TOTrapChainSawKey__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__17TOTrapChainSawKey[];

void *__dt__17TOTrapChainSawKeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOTrapChainSawKey;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__14TOTrapChainSawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
