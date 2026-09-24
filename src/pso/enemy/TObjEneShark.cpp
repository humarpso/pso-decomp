#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_800AC9DC { u8 pad[8]; s32 x8; s32 xc; };

struct G_800AC9DC { u8 pad[0x42c]; E_800AC9DC *tbl; };

struct O_800AC9DC { u8 pad[0x24]; s32 x24; u8 pad2[0xc]; s32 x34; };

extern "C" {
extern u32 lbl_805D50B8;
void TObjPlayer__sub_800AC9DC(O_800AC9DC *self, s32 i);
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

void TObjPlayer__sub_800AC9D8(void) {  }

void TObjPlayer__sub_800AC9DC(O_800AC9DC *self, s32 i) {
    self->x34 = (*(G_800AC9DC * *)&lbl_805D50B8)->tbl[i].x8;
    self->x24 = (*(G_800AC9DC * *)&lbl_805D50B8)->tbl[i].xc;
}

void TObjPlayer__sub_800ACA0C(void) {  }

}
