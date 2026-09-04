#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TBoss4Type2__sub_80340160(void* p);
int TBoss4Type2__sub_80340180(void);
void *alloc__8TObjFishFPv(void *arg0);
void *destroy__11TBoss4Type2FPvs(void *arg0, s16 arg1);
void *TObjFish__sub_8034029C(void *, void *);
int TObjPlayer__sub_8033FDB0(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void fn_80340040(void *);
void request_destroy__11TBoss4Type2FUi(void *);

int TBoss4Type2__sub_80340160(void* p) { return TObjPlayer__sub_8033FDB0(p); }

int TBoss4Type2__sub_80340180(void) { return 0; }

extern M2C_UNK lbl_804EFB78[];

void *destroy__11TBoss4Type2FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFB78;
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x20)); M2C_FIELD(arg0, M2C_UNK *, 0x20) = 0; }
        fn_80340040(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *alloc__8TObjFishFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x88);
    if (o != NULL) {
        o = TObjFish__sub_8034029C(o, arg0);
    }
    return o;
}

}
