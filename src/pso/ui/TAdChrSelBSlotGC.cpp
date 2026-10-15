#include "types.h"

extern "C" {

void create_children__16TAdChrSelBSlotGCFPv(void *arg0);
void reset__16TAdChrSelBSlotGCFPv(void *arg0);
void *__ct__15TAdChrSelSlotGCFv(void *, void *);
void *__ct__15TAdSubPlyItemGCFv(void *, void *);
void *__ct__19TAdPlyChrSelPlateGCFv(void *, void *, void *);
void *__ct__20TAdChrSelMovePlateGCFv(void *, void *);
void *__nw__7TObjectFUl(int);

extern s32 lbl_804758D8[];

void create_children__16TAdChrSelBSlotGCFPv(void *arg0) {
    void *o;
    void *o2;
    void *o3;
    void *o4;
    o = __nw__7TObjectFUl(0x128);
    if (o != NULL) {
        o = __ct__15TAdChrSelSlotGCFv(o, arg0);
    }
    *(void **)((s8 *)arg0 + 0x28) = o;
    o2 = __nw__7TObjectFUl(0x3B4);
    if (o2 != NULL) {
        o2 = __ct__19TAdPlyChrSelPlateGCFv(o2, arg0, lbl_804758D8);
    }
    *(void **)((s8 *)arg0 + 0x2C) = o2;
    o3 = __nw__7TObjectFUl(0x48C);
    if (o3 != NULL) {
        o3 = __ct__15TAdSubPlyItemGCFv(o3, arg0);
    }
    *(void **)((s8 *)arg0 + 0x30) = o3;
    o4 = __nw__7TObjectFUl(0x208);
    if (o4 != NULL) {
        o4 = __ct__20TAdChrSelMovePlateGCFv(o4, arg0);
    }
    *(void **)((s8 *)arg0 + 0x34) = o4;
}

void reset__16TAdChrSelBSlotGCFPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(s32 *)((s8 *)arg0 + 0x24) = -1;
    *(s32 *)((s8 *)arg0 + 0x28) = 0;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 0;
    *(s32 *)((s8 *)arg0 + 0x44) = 0;
    *(s32 *)((s8 *)arg0 + 0x48) = 0;
    *(s32 *)((s8 *)arg0 + 0x4C) = 0;
    *(s32 *)((s8 *)arg0 + 0x50) = 0;
    *(s32 *)((s8 *)arg0 + 0x54) = 0;
    *(s32 *)((s8 *)arg0 + 0x58) = 0;
    *(s32 *)((s8 *)arg0 + 0x5C) = 0;
    *(s32 *)((s8 *)arg0 + 0x60) = 0;
    *(s32 *)((s8 *)arg0 + 0x64) = 0;
    *(s32 *)((s8 *)arg0 + 0x68) = 0;
    *(s32 *)((s8 *)arg0 + 0x6C) = 0;
    *(s32 *)((s8 *)arg0 + 0x70) = 0;
    *(s32 *)((s8 *)arg0 + 0x74) = 0;
    *(s32 *)((s8 *)arg0 + 0x78) = 0;
    *(s32 *)((s8 *)arg0 + 0x7C) = 0;
}

}
