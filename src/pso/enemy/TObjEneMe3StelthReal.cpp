#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct EneStelth_800F0CE8 EneStelth_800F0CE8;

void TObjEneMe3StelthReal__vt105(void *arg0);
void TObjEneMe3StelthReal__vt109(void);
int TObjEneMe3StelthReal__vt60(void* p);
int TObjEneMe3StelthReal__vt61(void* p);
void *__dt__20TObjEneMe3StelthRealFv(void *arg0, s16 arg1);
void *create__20TObjEneMe3StelthRealFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
void *TObjEneMe3StelthReal__ct(void *, void *, void *);
int TObjEneMe3Stelth__vt60(void*);
int TObjEneMe3Stelth__vt61(void*);
void __dl__7TObjectFPv(void *);
void __dt__16TObjEneMe3StelthFv(void *, int);
void *__nw__7TObjectFUl(int);
f32 calc_boss4_scale__10TObjPlayerFi();

void TObjEneMe3StelthReal__vt109(void) {  }

extern const f32 lbl_805DA81C;

void TObjEneMe3StelthReal__vt105(void *arg0) {
    EneStelth_800F0CE8 *self = (EneStelth_800F0CE8 *)arg0;
    M2C_FIELD(arg0, s32 *, 0x3EC) = M2C_FIELD(arg0, s32 *, 0x3EC) + 1;
    if ((M2C_FIELD(arg0, s32 *, 0x3EC) >= 2) || (calc_boss4_scale__10TObjPlayerFi() < lbl_805DA81C)) {
        TObjEneDD__sub_800BBA18(self, 9);
        return;
    }
    TObjEneDD__sub_800BBA18(self, 6);
}

int TObjEneMe3StelthReal__vt60(void* p) { return TObjEneMe3Stelth__vt60(p); }
int TObjEneMe3StelthReal__vt61(void* p) { return TObjEneMe3Stelth__vt61(p); }

extern M2C_UNK __vt__20TObjEneMe3StelthReal[];

void *__dt__20TObjEneMe3StelthRealFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjEneMe3StelthReal;
        __dt__16TObjEneMe3StelthFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void *create__20TObjEneMe3StelthRealFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44C);
    if (o != NULL) {
        o = TObjEneMe3StelthReal__ct(o, tl_04, arg0);
    }
    return o;
}

}
