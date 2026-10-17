#include "types.h"
#include "pso/misc/TORevlightCave01_801736BC.h"

struct TORevlightCave01Base {
    char pad0[0x18];
};
struct TORevlightCave01 : TORevlightCave01Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32 b);
};

extern "C" {

s32 init_map_object_base();

extern const s32 __vt__16TORevlightCave01[];
extern s32 TORevlightCave01__name;
extern void *TORevlightCave01__static_model_resource;
extern const f32 lbl_805DB960;
extern const f32 lbl_805DB964;
extern const f32 lbl_805DB968;
extern const f32 lbl_805DB96C;

void *TORevlightCave01__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__16TORevlightCave01;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TORevlightCave01__name;
    ((TORevlightCave01*)arg0)->m5(arg2);
    *(void **)((s8 *)arg0 + 0x34) = (void *) *(void **)((s8 *)(*(void **)((s8 *)TORevlightCave01__static_model_resource + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)TORevlightCave01__static_model_resource + 0x42C)) + 0xC);
    *(void **)((s8 *)arg0 + 0xBC) = (void *) *(void **)((s8 *)(*(void **)((s8 *)TORevlightCave01__static_model_resource + 0x430)) + 4);
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) lbl_805DB960;
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB964);
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB968;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) *(f32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 4)) + 0x14);
    *(s32 *)((s8 *)arg0 + 0xC8) = 0;
    *(s32 *)((s8 *)arg0 + 0xCC) = (s32) (lbl_805DB96C * *(f32 *)((s8 *)arg0 + 0x68));
    return arg0;
}

}
