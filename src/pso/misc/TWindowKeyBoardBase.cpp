#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__19TWindowKeyBoardBaseFv(void* p);
void render__19TWindowKeyBoardBaseFv(void *arg0);
s32 draw_default_entry__9TWindowDDFi(void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);
s32 TWindowChat__sub_8025CB10(void *);
M2C_UNK TWindowSubStatusDisp__sub_8025E6DC(void *, s32);
s32 TWindowKeyBoardHard__sub_8025EB68();

void render__19TWindowKeyBoardBaseFv(void *arg0) {
    s32 temp_r31;

    if ((TWindowKeyBoardHard__sub_8025EB68() == 0) && ((TWindowChat__sub_8025CB10(arg0) != 0) || (M2C_FIELD(arg0, u16 *, 0x62) & 2))) {
        temp_r31 = draw_default_entry__9TWindowDDFi(arg0);
        if (M2C_FIELD(arg0, u16 *, 0x62) & 2) {
            TWindowSubComCard__sub_80245F98(arg0, temp_r31);
        }
        TWindowSubStatusDisp__sub_8025E6DC(arg0, temp_r31);
    }
}

void run_task__19TWindowKeyBoardBaseFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80081118
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 *destroy__19TWindowKeyBoardBaseFPvs(u32 *arg0, s16 arg1);
M2C_UNK free__11TOBoss4RockFUi(u32);
M2C_UNK __dl__FPv(u32 *);

u32 *destroy__19TWindowKeyBoardBaseFPvs(u32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *arg0 != 0U) {
            free__11TOBoss4RockFUi(*arg0);
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025E968
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TWindowKeyBoardBaseFv(void *arg0, s16 arg1);
void free__11TOBoss4RockFUi(void *);
void destroy__19TWindowKeyBoardBaseFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK __vt__19TWindowKeyBoardBase[];

void *__dt__19TWindowKeyBoardBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowKeyBoardBase;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x9C));
        destroy__19TWindowKeyBoardBaseFPvs((s8 *)arg0 + 0x84, -1);
        destroy__19TWindowKeyBoardBaseFPvs((s8 *)arg0 + 0x6C, -1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
