#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Node_80192A3C { u32 flags; void *model; u8 pad8[0x24]; Node_80192A3C *child; Node_80192A3C *sibling; };

struct Fish_80192A3C { u8 pad0[0x8C]; s32 f8C; u8 pad90[0x2C]; Node_80192A3C *fBC; Node_80192A3C *fC0; s32 fC4; void *fC8[4]; };

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct VBase_80192874 { char pad[0x18]; };

struct VObj_80192874 : VBase_80192874 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(void *);
};

struct Ent_80192874 { u8 b[0x84]; };

extern "C" {
s32 TObjFish__sub_8001ED9C(s32, s32);
Node_80192A3C *TObjFish__sub_8001EDC4(s32, s32);
extern s32 lbl_805D5C2C;
void TObjFish__sub_80192A3C(Fish_80192A3C *arg0);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, u32);
void reset_photon_effect__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80154E3C(void *);
void TObjEneGibbles__sub_80156780(void *, void *, s32);
void TObjPlayer__sub_801569F4(void *, void *);
void TObjFish__sub_80192434(void *);
extern Ent_80192874 lbl_804B7FB0[];
extern M2C_UNK __vt__19TObjLazerFenceExtra[];
extern s32 lbl_805D33A4;
extern const f32 lbl_805DBE58;
void *TObjLazerFenceExtra__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void *TObjLazerFenceExtra__create(void *arg0);
void *__dt__19TObjLazerFenceExtraFv(void *arg0, s16 arg1);
void run_task__19TObjLazerFenceExtraFv(void *arg0);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
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

#define self ((u8 *)arg0)
void *TObjLazerFenceExtra__ct(void *arg0, void *arg1, void *arg2) {
    s32 i;
    TObjPlayer__sub_801569F4(arg0, arg1);
    M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__19TObjLazerFenceExtra;
    M2C_FIELD(self, s32 *, 0) = lbl_805D33A4;
    ((VObj_80192874 *)self)->m5(arg2);
    M2C_FIELD(self, s32 *, 0xB4) = 0;
    M2C_FIELD(self, f32 *, 0xB8) = lbl_805DBE58;
    M2C_FIELD(self, s32 *, 0xAC) = (s32)M2C_FIELD(self, f32 *, 0x68);
    if (M2C_FIELD(self, s32 *, 0xAC) < 0) {
        M2C_FIELD(self, s32 *, 0xAC) = 0;
    }
    if (M2C_FIELD(self, s32 *, 0xAC) > 3) {
        M2C_FIELD(self, s32 *, 0xAC) = 3;
    }
    M2C_FIELD(self, s16 *, 0xB0) = M2C_FIELD(self, s32 *, 0x84);
    if (M2C_FIELD(self, s32 *, 0x8C) < 0 || M2C_FIELD(self, s32 *, 0x8C) > 1) {
        M2C_FIELD(self, s32 *, 0xD8) = 0;
        M2C_FIELD(self, s32 *, 0x8C) = 0;
    } else {
        M2C_FIELD(self, s32 *, 0xD8) = 1;
    }
    TObjFish__sub_80192434(self);
    TObjEneGibbles__sub_80156780(self, &lbl_804B7FB0[M2C_FIELD(self, s32 *, 0x8C) % 2], 3);
    M2C_FIELD(self, u32 *, 0x30) |= 0x40000000;
    M2C_FIELD(M2C_FIELD(self, u8 **, 0xA4), f32 *, 0x10) = M2C_FIELD(self, f32 *, 0x6C);
    M2C_FIELD(M2C_FIELD(self, u8 **, 0xA4), f32 *, 0xC) = M2C_FIELD(self, f32 *, 0x70);
    reset_photon_effect__10TObjPlayerFPv(self);
    TObjPlayer__sub_80154E3C(self);
    if (M2C_FIELD(self, s32 *, 0xD8) == 0) {
        for (i = 1; i < M2C_FIELD(self, s32 *, 0xA8); i++) {
            clear_player_status_flag__10TObjPlayerFPviUi(self, i, 1);
        }
    }
    return arg0;
}
#undef self

void *TObjLazerFenceExtra__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjLazerFenceExtra__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
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
