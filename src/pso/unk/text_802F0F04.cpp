#include "types.h"

extern "C" {

void TObjAreaWarpForest__sub_802F0F30(void *arg0);
void *TObjAreaWarpForest__sub_802F0F74(void *arg0, s16 arg1);
void *alloc_and_init__18TObjAreaWarpForestFPv(void *arg0);
void *init__18TObjAreaWarpForestFPvPvPv(void *arg0, void *, void *);
void render_if_active__18TObjAreaWarpForestFPv(void* p);
void TObjAreaWarpForest__ct(void *);
s32 TObjBoss2Tunnel__sub_802F2070();
void __dl__7TObjectFPv(void *);
void __dt__18TObjAreaWarpForestFv(void *, int);
void *__nw__7TObjectFUl(int);
int render__18TObjAreaWarpForestFv(void*);
s32 run_task__18TObjAreaWarpForestFv(void *);

void render_if_active__18TObjAreaWarpForestFPv(void* p) { if (*(int*)((char*)p + 0xdc) != 0) { render__18TObjAreaWarpForestFv(p); } }

void TObjAreaWarpForest__sub_802F0F30(void *arg0) {
    if (TObjBoss2Tunnel__sub_802F2070() != 0) {
        *(s32 *)((s8 *)arg0 + 0xDC) = 1;
    }
    run_task__18TObjAreaWarpForestFv(arg0);
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

void *init__18TObjAreaWarpForestFPvPvPv(void *arg0, void *, void *) {
    TObjAreaWarpForest__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E48D8;
    *(u32 *)((s8 *)arg0 + 0xDC) = 0;
    return arg0;
}

extern void *tl_05;

void *alloc_and_init__18TObjAreaWarpForestFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = init__18TObjAreaWarpForestFPvPvPv((void *)((void *)(o)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)));
    }
    return o;
}

}
