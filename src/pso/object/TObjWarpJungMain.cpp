#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjWarpJungMain__vt12(void* p);
int TObjWarpJungMain__vt17(void* p);
int TObjWarpBase__vt12(void*);
int TObjAreaWarp__sub_8019CA24(void*);
int clear_flag__11TWindowCtrlFv(void);

int TObjWarpJungMain__vt17(void* p) { return TObjAreaWarp__sub_8019CA24(p); }
void TObjWarpJungMain__vt12(void* p) { TObjWarpBase__vt12(p); clear_flag__11TWindowCtrlFv(); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8019FB40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjWarpJungMain__create(void *arg0);
void *TObjWarpJungMain__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjWarpJungMain__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TObjWarpJungMain__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019FECC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjWarpJungMainFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

extern M2C_UNK __vt__16TObjWarpJungMain[];

void *__dt__16TObjWarpJungMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjWarpJungMain;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A069C
#include "types.h"

extern "C" {

void TObjWarpJungMain__vt18(void);

void TObjWarpJungMain__vt18(void) {  }

}
#endif
#endif
