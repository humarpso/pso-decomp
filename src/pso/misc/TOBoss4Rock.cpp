#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void free__11TOBoss4RockFUi(u32 arg0);
int alloc_buffer__11TOBoss4RockFPv(void* p);
s32 xfree__FPv();
int xmalloc__FUl(void*);

void free__11TOBoss4RockFUi(u32 arg0) {
    if (arg0 != 0U) {
        xfree__FPv();
    }
}
int alloc_buffer__11TOBoss4RockFPv(void* p) { return xmalloc__FUl(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80158EB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__11TOBoss4RockFPv(void *arg0);
void *__dt__11TOBoss4RockFv(void *arg0, s16 arg1);
void *TOBoss4Rock__ct(void *, void *);
void free__11TOBoss4RockFUi(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TOBoss4Fv(void *, int);
void *__nw__7TObjectFUl(int);

void *create__11TOBoss4RockFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TOBoss4Rock__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__11TOBoss4Rock[];

void *__dt__11TOBoss4RockFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOBoss4Rock;
        if (M2C_FIELD(arg0, void **, 0xA0) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xA0)); }
        if (M2C_FIELD(arg0, void **, 0xA4) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xA4)); }
        if (M2C_FIELD(arg0, void **, 0xA8) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xA8)); }
        if (M2C_FIELD(arg0, void **, 0xAC) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xAC)); }
        if (M2C_FIELD(arg0, void **, 0xB0) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xB0)); }
        if (M2C_FIELD(arg0, void **, 0xB4) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xB4)); }
        __dt__7TOBoss4Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035A7FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__11TOBoss4RockFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void free__11TOBoss4RockFUi(void *);

extern M2C_UNK lbl_804F1C58[];

void *destroy__11TOBoss4RockFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1C58;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x28));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8039C880
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 rand__11TOBoss4RockFv(void);

extern u32 lbl_805D45F0;

s32 rand__11TOBoss4RockFv(void) {
    u32 temp_r0;

    temp_r0 = (lbl_805D45F0 * 0x41C64E6D) + 0x3039;
    lbl_805D45F0 = temp_r0;
    return (temp_r0 >> 0x10U) & 0x7FFF;
}

}
#endif
#endif
