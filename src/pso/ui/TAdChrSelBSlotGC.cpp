#include "types.h"
#include "pso/ui/TAdChrSelBSlotGC.h"

extern "C" {

void *__ct__15TAdChrSelSlotGCFv(void *, void *);
void *__ct__15TAdSubPlyItemGCFv(void *, void *);
void *__ct__19TAdPlyChrSelPlateGCFv(void *, void *, void *);
void *__ct__20TAdChrSelMovePlateGCFv(void *, void *);
void *__nw__7TObjectFUl(int);

extern s32 chr_sel_b_slot_plate_layout[];

void TAdChrSelBSlotGC::create_children() {
    void *o;
    void *o2;
    void *o3;
    void *o4;
    o = __nw__7TObjectFUl(0x128);
    if (o != NULL) {
        o = __ct__15TAdChrSelSlotGCFv(o, this);
    }
    *(void **)((s8 *)this + 0x28) = o;
    o2 = __nw__7TObjectFUl(0x3B4);
    if (o2 != NULL) {
        o2 = __ct__19TAdPlyChrSelPlateGCFv(o2, this, chr_sel_b_slot_plate_layout);
    }
    *(void **)((s8 *)this + 0x2C) = o2;
    o3 = __nw__7TObjectFUl(0x48C);
    if (o3 != NULL) {
        o3 = __ct__15TAdSubPlyItemGCFv(o3, this);
    }
    *(void **)((s8 *)this + 0x30) = o3;
    o4 = __nw__7TObjectFUl(0x208);
    if (o4 != NULL) {
        o4 = __ct__20TAdChrSelMovePlateGCFv(o4, this);
    }
    *(void **)((s8 *)this + 0x34) = o4;
}

void TAdChrSelBSlotGC::reset() {
    *(s32 *)((s8 *)this + 0x1C) = 0;
    *(s32 *)((s8 *)this + 0x20) = 0;
    *(s32 *)((s8 *)this + 0x24) = -1;
    *(s32 *)((s8 *)this + 0x28) = 0;
    *(s32 *)((s8 *)this + 0x2C) = 0;
    *(s32 *)((s8 *)this + 0x30) = 0;
    *(s32 *)((s8 *)this + 0x34) = 0;
    *(s32 *)((s8 *)this + 0x38) = 0;
    *(s32 *)((s8 *)this + 0x3C) = 0;
    *(s32 *)((s8 *)this + 0x40) = 0;
    *(s32 *)((s8 *)this + 0x44) = 0;
    *(s32 *)((s8 *)this + 0x48) = 0;
    *(s32 *)((s8 *)this + 0x4C) = 0;
    *(s32 *)((s8 *)this + 0x50) = 0;
    *(s32 *)((s8 *)this + 0x54) = 0;
    *(s32 *)((s8 *)this + 0x58) = 0;
    *(s32 *)((s8 *)this + 0x5C) = 0;
    *(s32 *)((s8 *)this + 0x60) = 0;
    *(s32 *)((s8 *)this + 0x64) = 0;
    *(s32 *)((s8 *)this + 0x68) = 0;
    *(s32 *)((s8 *)this + 0x6C) = 0;
    *(s32 *)((s8 *)this + 0x70) = 0;
    *(s32 *)((s8 *)this + 0x74) = 0;
    *(s32 *)((s8 *)this + 0x78) = 0;
    *(s32 *)((s8 *)this + 0x7C) = 0;
}

}
