#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjWarpJungMain__vt12(void* p);
int TObjWarpJungMain__vt17(void* p);
void *TObjWarpJung__create(void *arg0);
void *__dt__16TObjWarpJungMainFv(void *arg0, s16 arg1);
int TObjAreaWarp__sub_8019CA24(void*);
int TObjWarpBase__vt12(void*);
void *TObjWarpJung__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void *__nw__7TObjectFUl(int);
int clear_flag__11TWindowCtrlFv(void);

int TObjWarpJungMain__vt17(void* p) { return TObjAreaWarp__sub_8019CA24(p); }
void TObjWarpJungMain__vt12(void* p) { TObjWarpBase__vt12(p); clear_flag__11TWindowCtrlFv(); }

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

extern void *tl_05;

void *TObjWarpJung__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TObjWarpJung__ct(o, tl_05, arg0);
    }
    return o;
}

}
