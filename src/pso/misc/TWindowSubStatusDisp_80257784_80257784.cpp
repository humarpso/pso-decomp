#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80257B4C_lbl_804CF948 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Base_80257BC0 { u16 flags; u8 pad[2]; };

struct Item_80257BC0 : Base_80257BC0 {
    virtual void m0();
    virtual void m1();
    virtual void draw(void *ctx);
};

struct List_80257BC0 { u32 count; Item_80257BC0 **items; };

struct Base_80257C28 { u32 x0; };

struct Ent_80257C28 : Base_80257C28 { virtual void m0(); virtual void m1(); };

struct List_80257C28 { u32 count; Ent_80257C28 **items; };

struct Win_80257C28 { u8 pad[0x2C]; u32 flags; u8 pad2[0x2C]; s32 counter; };

extern "C" {
M2C_UNK init_from__20TWindowSubStatusDispFPvPvi();
extern M2C_UNK lbl_804CF948[];
u8 *TWindowSubStatusDisp__sub_80257B4C(u8 *arg0, u8 *arg1);
void TWindowSubStatusDisp__sub_80257BC0(void *self, List_80257BC0 *list, void *ctx);
extern const f32 lbl_805DCEF0;
void TWindowSubStatusDisp__sub_80257C28(Win_80257C28 *self, List_80257C28 *list);
}

extern "C" {

void *TWindowSubStatusDisp__sub_80257AF4(void *arg0, s16 arg1);
void TWindowSubStatusDisp__sub_80258050(void);
void TWindowSubStatusDisp__sub_80258054(void);
void *deleting_destructor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK TWindowSubStatusDisp__sub_80257298(void *, s16);
M2C_UNK __dl__FPv(void *);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(M2C_UNK, M2C_UNK *);

extern M2C_UNK lbl_804CF948[];

void *TWindowSubStatusDisp__sub_80257AF4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF948;
        TWindowSubStatusDisp__sub_80257298(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80257B4C_lbl_804CF948_size[sizeof(RecoveredGlobal_80257B4C_lbl_804CF948) == 0x18 ? 1 : -1];
u8 *TWindowSubStatusDisp__sub_80257B4C(u8 *arg0, u8 *arg1) {
    init_from__20TWindowSubStatusDispFPvPvi();
    M2C_FIELD(arg0, M2C_UNK **, 4) = &(*(RecoveredGlobal_80257B4C_lbl_804CF948 *)&lbl_804CF948).value;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    return arg0;
}

void TWindowSubStatusDisp__sub_80257BC0(void *self, List_80257BC0 *list, void *ctx) {
    Item_80257BC0 **p;
    u32 n;
    for (n = list->count, p = list->items; n != 0; n--, p++) {
        if (!((*p)->flags & 2)) {
            (*p)->draw(ctx);
        }
    }
}

void TWindowSubStatusDisp__sub_80257C28(Win_80257C28 *self, List_80257C28 *list) {
    Ent_80257C28 **p;
    u32 n;
    if (!(self->flags & 0x2000) && (f32)self->counter < lbl_805DCEF0) return;
    n = list->count;
    p = list->items;
    while (n-- != 0) {
        (*p)->m1();
        p++;
    }
}

void TWindowSubStatusDisp__sub_80258050(void) {  }
void TWindowSubStatusDisp__sub_80258054(void) {  }

extern M2C_UNK lbl_804CF998[];

void *deleting_destructor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF998;
        destroy__20TWindowSubStatusDispFPvs((M2C_UNK)arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
