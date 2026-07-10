#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__6TMovieFv(void *arg0, s16 arg1);
M2C_UNK close__6TMovieFis(u32, M2C_UNK);
M2C_UNK render_until_finished__6TMovieFv(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK fn_8022776C();
M2C_UNK fn_80320358(u32, M2C_UNK);
M2C_UNK render_tick__Fv();

extern void *__vt__6TMovie[];

void *__dt__6TMovieFv(void *arg0, s16 arg1) {
    M2C_UNK (*temp_r12)(void *);
    u32 t;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = __vt__6TMovie;
        render_until_finished__6TMovieFv(arg0);
        render_tick__Fv();
        t = M2C_FIELD(arg0, u32 *, 0x20);
        if (t != 0U) {
            close__6TMovieFis(t, 1);
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        render_tick__Fv();
        render_tick__Fv();
        t = M2C_FIELD(arg0, u32 *, 0x1C);
        if (t != 0U) {
            fn_80320358(t, 1);
            M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
        }
        render_tick__Fv();
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x44);
        if (temp_r12 != NULL) {
            temp_r12(arg0);
        }
        fn_8022776C();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
