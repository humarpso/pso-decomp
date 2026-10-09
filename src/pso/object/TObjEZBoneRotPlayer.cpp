#include "types.h"

extern "C" {
extern void *__vt__19TObjEZBoneRotPlayer[];
void __dt__17TObjEZBoneRotBaseFv(void *self, s32 flag);
void __dl__7TObjectFPv(void *p);

void *__dt__19TObjEZBoneRotPlayerFv(void *self, s16 flag) {
    if (self != 0) {
        *(void **)((u8 *)self + 0x18) = __vt__19TObjEZBoneRotPlayer;
        __dt__17TObjEZBoneRotBaseFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}
}

struct RotSrc_800FEEA4 {
    s8 bone;
    u8 pad[3];
    f32 angle;
    u8 data[0xC];
};

struct PosSrc_800FEEA4 {
    s8 bone;
    u8 pad[3];
    s32 ofs;
    u8 data[0x10];
};

struct RotDst_800FEEA4 {
    f32 angle;
    u8 data[0xC];
};

struct PosDst_800FEEA4 {
    s32 val;
    u8 data[0xC];
};

struct Model_800FEEA4 {
    u8 pad[0x60];
    s32 base;
};

struct Self_800FEEA4 {
    u8 pad[0x30];
    Model_800FEEA4 *model;
    PosSrc_800FEEA4 *pos_src;
    RotSrc_800FEEA4 *rot_src;
    u8 pad3C[4];
    PosDst_800FEEA4 *pos_dst;
    RotDst_800FEEA4 *rot_dst;
};

extern "C" {
void fn_800FF788(void *, void *);
void *get_item_ptr__10TObjPlayerFPvi(void *, s32);
void matrix_mult_vec(s32, void *, void *);
void invert_matrix_in_place__10TObjPlayerFUi(s32);
void concat_matrix__10TObjPlayerFUiUi(s32, void *);
void push_matrix(void);
void pop_matrix(void);
extern u8 lbl_8049DD20[];
void update_bone_attach_points__10TObjPlayerFPv(Self_800FEEA4 *self);
}

extern "C" {

int TObjPlayer__sub_800FEE84(void* p);
int TObjPlayer__sub_800FF2D0(void*);

int TObjPlayer__sub_800FEE84(void* p) { return TObjPlayer__sub_800FF2D0(p); }
void update_bone_attach_points__10TObjPlayerFPv(Self_800FEEA4 *self) {
    RotSrc_800FEEA4 *rs;
    RotDst_800FEEA4 *rd;
    PosSrc_800FEEA4 *ps;
    PosDst_800FEEA4 *pd;
    if (self->rot_dst != NULL) {
        push_matrix();
        invert_matrix_in_place__10TObjPlayerFUi(0);
        rs = self->rot_src;
        rd = self->rot_dst;
        while (rs->bone >= 0) {
            rd->angle = rs->angle;
            push_matrix();
            concat_matrix__10TObjPlayerFUiUi(0, get_item_ptr__10TObjPlayerFPvi(self->model, rs->bone));
            matrix_mult_vec(0, rs->data, rd->data);
            pop_matrix();
            rs++;
            rd++;
        }
        pop_matrix();
    }
    push_matrix();
    invert_matrix_in_place__10TObjPlayerFUi(0);
    ps = self->pos_src;
    pd = self->pos_dst;
    while (ps->bone >= 0) {
        pd->val = self->model->base + ps->ofs;
        push_matrix();
        concat_matrix__10TObjPlayerFUiUi(0, get_item_ptr__10TObjPlayerFPvi(self->model, ps->bone));
        matrix_mult_vec(0, ps->data, pd->data);
        pop_matrix();
        ps++;
        pd++;
    }
    pop_matrix();
    fn_800FF788(self, lbl_8049DD20);
}

}
