#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_80092724 { u8 pad0[0x18]; void *vptr; u8 pad1c[0x38c]; void *objs[2]; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void TObjPlayer__sub_800F6EB0(void *);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
extern u8 TObjPlayer__sub_800D7C58[];
extern u8 lbl_8048F4B4[];
O_80092724 *TObjPlayer__sub_80092724(O_80092724 *arg0, s16 arg1);
}

extern "C" {

void * create__12TObjEneBeastFPv(void *arg0);
void free_boss4_rock_pool(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneBeast__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);

extern void *tl_04;

void * create__12TObjEneBeastFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x420);
    if (o2 != NULL) {
        o2 = TObjEneBeast__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D4F38;
extern u32 lbl_805D4F3C;
extern u32 lbl_805D4F40;
extern u32 lbl_805D4F44;
extern u32 lbl_805D4F48;
extern u32 lbl_805D4F4C;
extern u32 lbl_805D4F50;

void free_boss4_rock_pool(void) {
    if ((u32) lbl_805D4F38 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F38);
        lbl_805D4F38 = 0U;
    }
    if ((u32) lbl_805D4F3C != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F3C);
        lbl_805D4F3C = 0U;
    }
    if ((u32) lbl_805D4F40 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F40);
        lbl_805D4F40 = 0U;
    }
    if ((u32) lbl_805D4F44 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F44);
        lbl_805D4F44 = 0U;
    }
    if ((u32) lbl_805D4F50 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D4F50, 1);
        lbl_805D4F50 = 0U;
    }
    if ((u32) lbl_805D4F4C != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D4F4C, 1);
        lbl_805D4F4C = 0U;
    }
    if ((u32) lbl_805D4F48 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4F48, 1);
        lbl_805D4F48 = 0U;
    }
}
O_80092724 *TObjPlayer__sub_80092724(O_80092724 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vptr = lbl_8048F4B4;
        for (i = 0; i < 2; i++) {
            if (arg0->objs[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->objs[i]);
                arg0->objs[i] = NULL;
            }
        }
        TObjPlayer__sub_800F6EB0(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __destroy_arr((u8 *)arg0 + 0x3B0, TObjPlayer__sub_800D7C58, 0x1C, 4);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
