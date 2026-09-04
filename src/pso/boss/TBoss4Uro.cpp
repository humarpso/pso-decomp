#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

s32 get_phase__9TBoss4UroFPv(void* p);

s32 get_phase__9TBoss4UroFPv(void* p) { return *(s32*)((char*)p + 0x37c); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8004C1A4
#include "types.h"

extern "C" {

int get_instance_count__9TBoss4UroFv(void);

    extern int lbl_805D4D58;
int get_instance_count__9TBoss4UroFv(void) {  return lbl_805D4D58; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005C7B8
#include "types.h"

extern "C" {

void TBoss4Uro__vt61(void* p);

int TBoss4Uro__sub_8005D6D4(void*);
int TObjPlayer__sub_800F6B68(void*);

void TBoss4Uro__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 3) { TObjPlayer__sub_800F6B68(p); TBoss4Uro__sub_8005D6D4(*(void**)((char*)p + 0x378)); *(int*)((char*)p + 0x374) = 3; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005C800
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__9TBoss4UroFv(void *arg0, s16 arg1);
void __dt__10TBoss4ZakoFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK __vt__9TBoss4Uro[];

void *__dt__9TBoss4UroFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TBoss4Uro;
        __dt__10TBoss4ZakoFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005C954
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__9TBoss4UroFi(s32 arg0);
s32 TBoss4Uro__ct(s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__9TBoss4UroFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3D0);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Uro__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005CF10
#include "types.h"

extern "C" {

void render__9TBoss4UroFv(void);

void render__9TBoss4UroFv(void) {  }

}
#endif
#endif
