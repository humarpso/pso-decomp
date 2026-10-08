#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjWarpBoss03__ct(void *arg0);
void TObjWarpBoss03__vt18(void* p);
void *TObjWarpJungMain__create(void *arg0);
void *__dt__14TObjWarpBoss03Fv(void *arg0, s16 arg1);
int run_task__14TObjWarpBoss03Fv(void* p);
void TObjAreaWarp__ct(void *);
int debug_print_area_num__12TObjAreaWarpFPv(void*);
int handle_area_selection__12TObjAreaWarpFPv(void*);
void *TObjWarpJungMain__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void *__nw__7TObjectFUl(int);
int fn_8019F9E4(void*);

void TObjWarpBoss03__vt18(void* p) { debug_print_area_num__12TObjAreaWarpFPv(p); fn_8019F9E4(p); }
int run_task__14TObjWarpBoss03Fv(void* p) { return handle_area_selection__12TObjAreaWarpFPv(p); }

extern M2C_UNK __vt__14TObjWarpBoss03[];

void *__dt__14TObjWarpBoss03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjWarpBoss03;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern const f32 lbl_805DC034;
extern M2C_UNK __vt__14TObjWarpBoss03[];
extern void *lbl_805D3490;

void *TObjWarpBoss03__ct(void *arg0) {
    TObjAreaWarp__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjWarpBoss03;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3490;
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DC034;
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
