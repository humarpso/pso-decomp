#include "types.h"
#include "pso/object/TObjWarpBoss03.h"
#include "pso/object/TObjAreaWarp.h"

extern "C" {

void *TObjWarpBoss03__ct(void *arg0);
void *TObjWarpJungMain__create(void *arg0);
void *__dt__14TObjWarpBoss03Fv(void *arg0, s16 arg1);
void *TObjAreaWarp__ct(void *arg0);
void *TObjWarpJungMain__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
u8 *__dt__12TObjAreaWarpFv(u8 *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);

void TObjWarpBoss03::debug_print_area_num() { this->TObjAreaWarp::debug_print_area_num(); sub_8019F9E4(); }
void TObjWarpBoss03::run_task() { { (void)(handle_area_selection()); return; } }

extern s32 __vt__14TObjWarpBoss03[];

void *__dt__14TObjWarpBoss03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjWarpBoss03;
        __dt__12TObjAreaWarpFv((u8 *)arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern const f32 lbl_805DC034;
extern void *TObjWarpBoss03__name;

void *TObjWarpBoss03__ct(void *arg0) {
    TObjAreaWarp__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjWarpBoss03;
    *(void * *)&((TObjWarpBoss03 *)arg0)->m_name = TObjWarpBoss03__name;
    *(f32 *)((s8 *)arg0 + 0xAC) = lbl_805DC034;
    return arg0;
}

extern void *tl_05;

void *TObjWarpJungMain__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TObjWarpJungMain__ct(o, tl_05, arg0);
    }
    return o;
}

}
