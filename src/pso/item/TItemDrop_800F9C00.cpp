#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Hdr_800F9C00 { u32 dataOff; u32 count; u8 pad8[8]; u32 rootOff; };

struct Obj_800F9C00 {
    u8 pad0[0x1C];
    u8 *base;
    s32 size;
    u8 *root;
};

extern "C" {
u8 *apply_rel_relocations(Obj_800F9C00 *arg0);
}

extern "C" {

void *ct_object__9TItemDropFPv(void *arg0);
void *construct__9TItemDropFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *, s32);

extern M2C_UNK lbl_8049C658[];

#pragma opt_propagation off
u8 *apply_rel_relocations(Obj_800F9C00 *arg0) {
    u16 *idx;
    u8 *cur;
    Hdr_800F9C00 *h;
    u32 off;
    u8 *b;
    b = arg0->base;
    h = (Hdr_800F9C00 *)((b + arg0->size) - 0x20);
    idx = (u16 *)(h->dataOff + (u32)b);
    cur = b;
    u32 n = h->count;
    u32 i;
    for (i = 0; i < n; i++) {
        cur += *idx++ * 4;
        *(u32 *)cur += (u32)arg0->base;
    }
    arg0->root = (u8 *)(h->rootOff + (u32)arg0->base);
    return arg0->root;
}

void *ct_object__9TItemDropFPv(void *arg0) {
    ((void (*)(void *))__ct__7TObjectFP7TObject)(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049C658;
    return arg0;
}

void *construct__9TItemDropFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049C658;
    return arg0;
}

}
