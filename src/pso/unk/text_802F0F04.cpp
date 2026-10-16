#include "types.h"
#include "pso/object/TObjAreaWarpForest.h"

extern "C" {

void TObjAreaWarpForest__sub_802F0F30(void *arg0);
void *TObjAreaWarpForest__sub_802F0F74(void *arg0, s16 arg1);
void TObjAreaWarpForest__ct(void *);
s32 TObjBoss2Tunnel__sub_802F2070();
void __dl__7TObjectFPv(void *);
void __dt__18TObjAreaWarpForestFv(void *, int);
void *__nw__7TObjectFUl(int);

void TObjAreaWarpForest::render_if_active() { if (*(int*)((char*)this + 0xdc) != 0) { TObjAreaWarpForest::render(); } }

void TObjAreaWarpForest__sub_802F0F30(void *arg0) {
    if (TObjBoss2Tunnel__sub_802F2070() != 0) {
        *(s32 *)((s8 *)arg0 + 0xDC) = 1;
    }
    ((TObjAreaWarpForest *)arg0)->TObjAreaWarpForest::run_task();
}

extern s32 lbl_804E48D8[];

void *TObjAreaWarpForest__sub_802F0F74(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E48D8;
        __dt__18TObjAreaWarpForestFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804E48D8[];

void *TObjAreaWarpForest::init(void *, void *) {
    TObjAreaWarpForest__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804E48D8;
    *(u32 *)((s8 *)this + 0xDC) = 0;
    return this;
}

extern void *tl_05;

void *TObjAreaWarpForest::alloc_and_init() {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = ((TObjAreaWarpForest *)o)->init((void *)((void *)(tl_05)), (void *)((void *)(this)));
    }
    return o;
}

}
