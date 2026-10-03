#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct O_800A846C {
    u8 pad0[0x18];
    void *vptr;
    u8 pad1c[0x3C4 - 0x1C];
    void *objs[2];
} O_800A846C;

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void unlink_enemy_group_relations(void *);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
void TObjPlayer__sub_800A05B8(void *, int);
extern u8 TObjPlayer__sub_800D7C58[];
extern u8 lbl_80490EEC[];
O_800A846C *TObjPlayer__sub_800A846C(O_800A846C *arg0, s16 arg1);
}

extern "C" {

void * create__15TObjEneDimedianFPv(void *arg0);
void free_boss_objects__15TObjEneDimedianFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneDimedian__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);

extern void *tl_04;

void * create__15TObjEneDimedianFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x43C);
    if (o2 != NULL) {
        o2 = TObjEneDimedian__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D5070;
extern u32 lbl_805D5074;
extern u32 lbl_805D5078;
extern u32 lbl_805D507C;
extern u32 lbl_805D5080;
extern u32 lbl_805D5084;
extern u32 lbl_805D5088;

void free_boss_objects__15TObjEneDimedianFv(void) {
    if ((u32) lbl_805D5070 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5070);
        lbl_805D5070 = 0U;
    }
    if ((u32) lbl_805D5074 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5074);
        lbl_805D5074 = 0U;
    }
    if ((u32) lbl_805D5078 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5078);
        lbl_805D5078 = 0U;
    }
    if ((u32) lbl_805D507C != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D507C);
        lbl_805D507C = 0U;
    }
    if ((u32) lbl_805D5088 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5088, 1);
        lbl_805D5088 = 0U;
    }
    if ((u32) lbl_805D5084 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5084, 1);
        lbl_805D5084 = 0U;
    }
    if ((u32) lbl_805D5080 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5080, 1);
        lbl_805D5080 = 0U;
    }
}
O_800A846C *TObjPlayer__sub_800A846C(O_800A846C *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vptr = lbl_80490EEC;
        for (i = 0; i < 2; i++) {
            if (arg0->objs[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->objs[i]);
                arg0->objs[i] = NULL;
            }
        }
        unlink_enemy_group_relations(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __destroy_arr((u8 *)arg0 + 0x3CC, TObjPlayer__sub_800D7C58, 0x1C, 4);
        TObjPlayer__sub_800A05B8((u8 *)arg0 + 0x3A8, -1);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
