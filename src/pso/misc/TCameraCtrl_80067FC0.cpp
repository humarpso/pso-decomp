#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct B_80068018 { u8 pad[0x18]; };

struct O_80068018 : B_80068018 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    u8 pad2[0x38 - 0x1c];
    s32 x38;
    u8 pad3[0x6c - 0x3c];
    void *x6c;
};

struct G_80068018 { u8 pad[0x20]; u8 sub[1]; };

extern "C" {
extern G_80068018 lbl_8050E208;
extern M2C_UNK lbl_80488838[];
void TCameraCtrl__sub_80068714(void *);
O_80068018 *TCameraCtrl__sub_80068018(O_80068018 *self);
}

extern "C" {

void *TCameraCtrl__sub_80067FC0(void *arg0, s16 arg1);
void TCameraCtrl__sub_80068354(void);
void TCameraCtrl__sub_80068358(void);
void *TCameraCtrl__sub_800686BC(void *arg0, s16 arg1);
void set_target_pos__11TCameraCtrlFPvPv(void* p, void* q);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_80488838[];

void *TCameraCtrl__sub_80067FC0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488838;
        TCameraCtrl__sub_800686BC((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

O_80068018 *TCameraCtrl__sub_80068018(O_80068018 *self) {
    TCameraCtrl__sub_80068714(self);
    *(void **)((u8 *)self + 0x18) = ((char *)&lbl_80488838);
    self->x38 = 0;
    self->x6c = lbl_8050E208.sub;
    self->v5();
    return self;
}

void set_target_pos__11TCameraCtrlFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x48) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4c) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x50) = *(f32*)((char*)q + 0x8); }

void TCameraCtrl__sub_80068354(void) {  }
void TCameraCtrl__sub_80068358(void) {  }

extern M2C_UNK lbl_80488A28[];

void *TCameraCtrl__sub_800686BC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488A28;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
