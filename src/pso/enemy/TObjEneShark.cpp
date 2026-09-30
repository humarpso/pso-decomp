#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_800AC9DC { u8 pad[8]; s32 x8; s32 xc; };

struct G_800AC9DC { u8 pad[0x42c]; E_800AC9DC *tbl; };

struct O_800AC9DC { u8 pad[0x24]; s32 x24; u8 pad2[0xc]; s32 x34; };

struct Sub_800ACA10 { u8 pad[0x18]; s32 level; };

struct Obj_800ACA10 { u8 pad[0x2B0]; Sub_800ACA10 *sub; };

typedef struct O_800AC5EC {
    u8 pad0[0x18];
    void *vptr;
    u8 pad1c[0x3C4 - 0x1C];
    void *objs[2];
} O_800AC5EC;

extern "C" {
extern u32 lbl_805D50B8;
void TObjPlayer__sub_800AC9DC(O_800AC9DC *self, s32 i);
extern s32 lbl_805D5550;
s32 TObjPlayer__sub_800ACA10(Obj_800ACA10 *self);
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void TObjPlayer__sub_800F6EB0(void *);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
extern u8 TObjPlayer__sub_800D7C58[];
extern u8 lbl_8049168C[];
O_800AC5EC *TObjPlayer__sub_800AC5EC(O_800AC5EC *arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_800AC9D8(void);
void TObjPlayer__sub_800ACA0C(void);
void * create__12TObjEneSharkFPv(void *arg0);
void free_resources__12TObjEneSharkFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneShark__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);

extern void *tl_04;

void * create__12TObjEneSharkFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x43C);
    if (o2 != NULL) {
        o2 = TObjEneShark__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D50A8;
extern u32 lbl_805D50AC;
extern u32 lbl_805D50B0;
extern u32 lbl_805D50B4;
extern u32 lbl_805D50B8;
extern u32 lbl_805D50BC;
extern u32 lbl_805D50C0;

void free_resources__12TObjEneSharkFv(void) {
    if ((u32) lbl_805D50A8 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50A8);
        lbl_805D50A8 = 0U;
    }
    if ((u32) lbl_805D50AC != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50AC);
        lbl_805D50AC = 0U;
    }
    if ((u32) lbl_805D50B0 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50B0);
        lbl_805D50B0 = 0U;
    }
    if ((u32) lbl_805D50B4 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50B4);
        lbl_805D50B4 = 0U;
    }
    if ((u32) lbl_805D50C0 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D50C0, 1);
        lbl_805D50C0 = 0U;
    }
    if ((u32) lbl_805D50BC != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D50BC, 1);
        lbl_805D50BC = 0U;
    }
    if ((u32) lbl_805D50B8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D50B8, 1);
        lbl_805D50B8 = 0U;
    }
}

O_800AC5EC *TObjPlayer__sub_800AC5EC(O_800AC5EC *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vptr = lbl_8049168C;
        for (i = 0; i < 2; i++) {
            if (arg0->objs[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->objs[i]);
                arg0->objs[i] = NULL;
            }
        }
        TObjPlayer__sub_800F6EB0(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __destroy_arr((u8 *)arg0 + 0x3CC, TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__18TObjEneMe3SinowZoaFPvs((u8 *)arg0 + 0x3A8, -1);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_800AC9D8(void) {  }

void TObjPlayer__sub_800AC9DC(O_800AC9DC *self, s32 i) {
    self->x34 = (*(G_800AC9DC * *)&lbl_805D50B8)->tbl[i].x8;
    self->x24 = (*(G_800AC9DC * *)&lbl_805D50B8)->tbl[i].xc;
}

void TObjPlayer__sub_800ACA0C(void) {  }
s32 TObjPlayer__sub_800ACA10(Obj_800ACA10 *self) {
    Sub_800ACA10 *p = self->sub;
    s32 v = 0;
    if (p != 0) {
        v = p->level;
        if (v < 0) {
            return 0;
        }
        if (lbl_805D5550 == 3) {
            if (v > 0x1D) {
                v = 0x1D;
            }
            return v;
        }
        if (v > 0xE) {
            v = 0xE;
        }
    }
    return v;
}

}
