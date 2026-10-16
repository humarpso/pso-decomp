#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void *__dt__6TMovieFv(void *arg0, s16 arg1);
s32 close__6TMovieFis(u32, s32);
s32 render_until_finished__6TMovieFv(void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
s32 fn_80320358(u32, s32);
s32 render_tick__Fv();

extern void *__vt__6TMovie[];

void *__dt__6TMovieFv(void *arg0, s16 arg1) {
    s32 (*temp_r12)(void *);
    u32 t;

    if (arg0 != NULL) {
        *(void **)((s8 *)arg0 + 0x18) = __vt__6TMovie;
        render_until_finished__6TMovieFv(arg0);
        render_tick__Fv();
        t = *(u32 *)((s8 *)arg0 + 0x20);
        if (t != 0U) {
            close__6TMovieFis(t, 1);
            *(u32 *)((s8 *)arg0 + 0x20) = 0U;
        }
        render_tick__Fv();
        render_tick__Fv();
        t = *(u32 *)((s8 *)arg0 + 0x1C);
        if (t != 0U) {
            fn_80320358(t, 1);
            *(u32 *)((s8 *)arg0 + 0x1C) = 0U;
        }
        render_tick__Fv();
        temp_r12 = *(s32 (**)(void *))((s8 *)arg0 + 0x44);
        if (temp_r12 != NULL) {
            temp_r12(arg0);
        }
        TLobby::set_pre_retrace_callback();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
