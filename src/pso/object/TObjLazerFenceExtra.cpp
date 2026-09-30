#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Node_80192A3C { u32 flags; void *model; u8 pad8[0x24]; Node_80192A3C *child; Node_80192A3C *sibling; };

struct Fish_80192A3C { u8 pad0[0x8C]; s32 f8C; u8 pad90[0x2C]; Node_80192A3C *fBC; Node_80192A3C *fC0; s32 fC4; void *fC8[4]; };

extern "C" {
s32 TObjFish__sub_8001ED9C(s32, s32);
Node_80192A3C *TObjFish__sub_8001EDC4(s32, s32);
extern s32 lbl_805D5C2C;
void TObjFish__sub_80192A3C(Fish_80192A3C *arg0);
}

extern "C" {

void *TObjLazerFenceExtra__create(void *arg0);
void *__dt__19TObjLazerFenceExtraFv(void *arg0, s16 arg1);
void run_task__19TObjLazerFenceExtraFv(void *arg0);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
void *TObjLazerFenceExtra__ct(void *, void *, void *);
M2C_UNK TObjLazerFenceExtra__sub_801926D0();
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK reset_by_door__19TObjLazerFenceExtraFPv();

void run_task__19TObjLazerFenceExtraFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    switch (temp_r0) {
    case 0:
        TObjLazerFenceExtra__sub_801926D0();
        return;
    case 1:
        reset_by_door__19TObjLazerFenceExtraFPv();
        return;
    }
}

extern M2C_UNK __vt__19TObjLazerFenceExtra[];

void *__dt__19TObjLazerFenceExtraFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjLazerFenceExtra;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *TObjLazerFenceExtra__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjLazerFenceExtra__ct(o, tl_05, arg0);
    }
    return o;
}
void TObjFish__sub_80192A3C(Fish_80192A3C *arg0) {
    s32 i;
    Node_80192A3C *node;
    s32 j;
    if (arg0->f8C % 2 == 0) {
        arg0->fBC = TObjFish__sub_8001EDC4(lbl_805D5C2C, 1);
        arg0->fC0 = TObjFish__sub_8001EDC4(lbl_805D5C2C, 0);
        arg0->fC4 = TObjFish__sub_8001ED9C(lbl_805D5C2C, 0);
    } else {
        arg0->fBC = TObjFish__sub_8001EDC4(lbl_805D5C2C, 3);
        arg0->fC0 = TObjFish__sub_8001EDC4(lbl_805D5C2C, 2);
        arg0->fC4 = TObjFish__sub_8001ED9C(lbl_805D5C2C, 1);
    }
    for (j = 0; j < 4; j++) {
        arg0->fC8[j] = 0;
    }
    i = 0;
    node = arg0->fC0->child;
    if (node != 0) {
        arg0->fC8[i++] = node->model;
        node = node->sibling;
        while (node != 0 && i < 4) {
            arg0->fC8[i++] = node->model;
            node = node->sibling;
        }
    }
}

}
