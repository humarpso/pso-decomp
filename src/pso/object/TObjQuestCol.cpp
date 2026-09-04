#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjQuestCol__vt13(void *arg0);
void TObjQuestCol__vt14(void* p);
s32 update_trigger_state__12TObjQuestColFPvf(f32);
int destroy_board__17TQuestThreadBoardFv(void*);
int create__12TQuestThreadFi(void*);

void TObjQuestCol__vt14(void* p) { destroy_board__17TQuestThreadBoardFv(p); create__12TQuestThreadFi(*(void**)((char*)p + 0xb0)); }

s32 TObjQuestCol__vt13(void *arg0) {
    return (u32)__cntlzw(1 - update_trigger_state__12TObjQuestColFPvf(M2C_FIELD(arg0, f32 *, 0xAC))) >> 5;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80196A8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjQuestCol__create(void *arg0);
void *TObjQuestCol__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *lbl_805D5C50;

void *TObjQuestCol__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjQuestCol__ct(o, lbl_805D5C50, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80196B3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjQuestCol__ct(void *arg0);
void TObjQuestColBase__ct(void *);

extern M2C_UNK __vt__12TObjQuestCol[];
extern void *lbl_805D33EC;

void *TObjQuestCol__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjQuestCol;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D33EC;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80196B80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_trigger_state__12TObjQuestColFPvf(void *arg0, f32 farg0);
s32 is_within_range__16TObjQuestColBaseFif(f32);

s32 update_trigger_state__12TObjQuestColFPvf(void *arg0, f32 farg0) {
    if (is_within_range__16TObjQuestColBaseFif(farg0 * farg0) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0;
            return 1;
        }
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0xB4) = 1;
    return 3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019703C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TObjQuestColFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__16TObjQuestColBaseFv(void *, int);

extern M2C_UNK __vt__12TObjQuestCol[];

void *__dt__12TObjQuestColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjQuestCol;
        __dt__16TObjQuestColBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
