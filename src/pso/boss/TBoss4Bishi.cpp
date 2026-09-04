#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void enter_state_3__11TBoss4BishiFPv(void* p);

int TBoss4Uro__sub_8005D6D4(void*);

void enter_state_3__11TBoss4BishiFPv(void* p) { if (*(int*)((char*)p + 0x374) != 3) { TBoss4Uro__sub_8005D6D4(*(void**)((char*)p + 0x378)); *(int*)((char*)p + 0x374) = 3; } }

}
#else
#if PSO_CLASS_PACKAGE == 0x8005BABC
#include "types.h"

extern "C" {

void TBoss4Bishi__sub_8005BABC(void);
void TBoss4Bishi__sub_8005BAC0(void);
void TBoss4Bishi__sub_8005BAC4(void);
void TBoss4Bishi__sub_8005BAC8(void);
void TBoss4Bishi__sub_8005BACC(void);
void TBoss4Bishi__sub_8005BAD0(void);
void TBoss4Bishi__sub_8005BAD4(void);

void TBoss4Bishi__sub_8005BABC(void) {  }
void TBoss4Bishi__sub_8005BAC0(void) {  }
void TBoss4Bishi__sub_8005BAC4(void) {  }
void TBoss4Bishi__sub_8005BAC8(void) {  }
void TBoss4Bishi__sub_8005BACC(void) {  }
void TBoss4Bishi__sub_8005BAD0(void) {  }
void TBoss4Bishi__sub_8005BAD4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005BBE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Bishi__vt0(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 lbl_805D8CC8;
extern const f32 lbl_805D8CCC;

void TBoss4Bishi__vt0(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f2 < lbl_805D8CC8) {
        temp_f0 = temp_f2 + lbl_805D8CCC;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        if (temp_f0 > lbl_805D8CC8) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8CC8;
            M2C_FIELD(arg0, s32 *, 0x374) = 2;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005BED0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void try_enter_state_3__11TBoss4BishiFPv(void* p);
void *__dt_deleting__11TBoss4BishiFPvs(void *arg0, s16 arg1);
int enter_state_3__11TBoss4BishiFPv(void*);
void __dt__10TBoss4ZakoFPvs(void *, int);
void __dl__7TObjectFPv(void *);
int TObjPlayer__sub_800F6B68(void*);

void try_enter_state_3__11TBoss4BishiFPv(void* p) { if (*(int*)((char*)p + 0x374) != 3) { TObjPlayer__sub_800F6B68(p); enter_state_3__11TBoss4BishiFPv(p); } }

extern M2C_UNK lbl_80487460[];

void *__dt_deleting__11TBoss4BishiFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80487460;
        __dt__10TBoss4ZakoFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005C0B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__11TBoss4BishiFi(s32 arg0);
s32 TBoss4Bishi__ct(s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__11TBoss4BishiFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3C4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Bishi__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#endif
