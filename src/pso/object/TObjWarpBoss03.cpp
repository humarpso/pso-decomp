#include "types.h"
#include "pso/object/TObjWarpBoss03.h"
#include "pso/object/TObjAreaWarp.h"

extern "C" {

void *TObjWarpBoss03__ct(void *arg0);
void TObjWarpBoss03__vt18(void* p);
void *TObjWarpJungMain__create(void *arg0);
void *__dt__14TObjWarpBoss03Fv(void *arg0, s16 arg1);
void TObjAreaWarp__ct(void *);
int handle_area_selection__12TObjAreaWarpFPv(void*);
void *TObjWarpJungMain__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void *__nw__7TObjectFUl(int);
int fn_8019F9E4(void*);

void TObjWarpBoss03__vt18(void* p) { ((TObjAreaWarp *)p)->debug_print_area_num(); fn_8019F9E4(p); }
int TObjWarpBoss03::run_task() { return handle_area_selection__12TObjAreaWarpFPv(this); }

extern s32 __vt__14TObjWarpBoss03[];

void *__dt__14TObjWarpBoss03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjWarpBoss03;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern const f32 lbl_805DC034;
extern s32 __vt__14TObjWarpBoss03[];
extern void *TObjWarpBoss03__name;

void *TObjWarpBoss03__ct(void *arg0) {
    TObjAreaWarp__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjWarpBoss03;
    *(void **)((s8 *)arg0 + 0x0) = TObjWarpBoss03__name;
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
