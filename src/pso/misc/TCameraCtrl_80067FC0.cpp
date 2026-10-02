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

typedef s32 M2C_UNK;
struct Vec_8006835C { f32 x, y, z; };

struct View_8006835C {
    u8 pad0[0x178];
    Vec_8006835C pos;
    Vec_8006835C target;
    u8 f190[4];
    u8 f194[4];
};

struct Flags_8006835C { u8 pad0[8]; u32 flags; };

struct Scissor_8006835C { u8 pad0[8]; f32 x; f32 y; u8 pad10[0x30 - 0x10]; u8 f30[4]; };

extern "C" {
extern G_80068018 lbl_8050E208;
extern M2C_UNK lbl_80488838[];
void TCameraCtrl__sub_80068714(void *);
O_80068018 *TCameraCtrl__sub_80068018(O_80068018 *self);
Vec_8006835C *get_target__11TCameraCtrlFPv(void *);
void TCameraCtrl__sub_8006BE00(void *, void *, void *);
void TCameraCtrl__sub_801E317C(s32, void *);
void TCameraCtrl__sub_801E32D8(f32, f32);
void GXSetScissorBoxOffset(s32, s32);
void set_camera_look_at(void *, void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TNpcPlayer__sub_803D97B4(void *);
extern Vec_8006835C lbl_804FF5E8;
extern Flags_8006835C TCameraCtrl__data_804FF628;
extern Scissor_8006835C TCameraCtrl__data_804FF634;
extern u8 TCameraCtrl__data_804FF6C4[];
extern View_8006835C *lbl_805D4DF0;
extern const f32 TCameraCtrl__data_805D8F80;
extern const f32 TCameraCtrl__data_805D8F84;
extern const f32 lbl_805D8F94;
extern const f32 lbl_805D8F98;
extern const f32 lbl_805D8F9C;
void TCameraCtrl__sub_8006835C(void);
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

void TCameraCtrl__sub_8006835C(void) {
    Vec_8006835C e;
    Vec_8006835C d;
    Vec_8006835C *t;
    d.x = lbl_805D4DF0->target.x - lbl_805D4DF0->pos.x;
    d.y = lbl_805D4DF0->target.y - lbl_805D4DF0->pos.y;
    d.z = lbl_805D4DF0->target.z - lbl_805D4DF0->pos.z;
    if (TCameraCtrl__data_805D8F84 == TBoss6Kakusan__sub_803D8BD8(&d)) {
        TNpcPlayer__sub_803D97B4(&d);
        lbl_805D4DF0->target.x = lbl_805D4DF0->pos.x;
        lbl_805D4DF0->target.y = lbl_805D4DF0->pos.y;
        lbl_805D4DF0->target.z = TCameraCtrl__data_805D8F80 + lbl_805D4DF0->pos.z;
    } else if (TCameraCtrl__data_805D8F84 == d.x && TCameraCtrl__data_805D8F84 == d.z) {
        lbl_805D4DF0->target.z += lbl_805D8F94;
        d.z = TCameraCtrl__data_805D8F80;
    }
    TCameraCtrl__sub_8006BE00(&d, lbl_805D4DF0->f190, lbl_805D4DF0->f194);
    t = get_target__11TCameraCtrlFPv(lbl_805D4DF0);
    e.x = lbl_805D4DF0->target.x + t->x;
    e.y = lbl_805D4DF0->target.y + t->y;
    e.z = lbl_805D4DF0->target.z + t->z;
    set_camera_look_at(&lbl_805D4DF0->pos, &e, TCameraCtrl__data_804FF6C4);
    lbl_804FF5E8.x = lbl_805D4DF0->pos.x;
    lbl_804FF5E8.y = lbl_805D4DF0->pos.y;
    lbl_804FF5E8.z = lbl_805D4DF0->pos.z;
    if (TCameraCtrl__data_804FF628.flags & 0x200) {
        GXSetScissorBoxOffset((s32)-(TCameraCtrl__data_804FF634.x - lbl_805D8F98), (s32)-(TCameraCtrl__data_804FF634.y - lbl_805D8F9C));
        TCameraCtrl__sub_801E32D8(TCameraCtrl__data_804FF634.x, TCameraCtrl__data_804FF634.y);
        TCameraCtrl__sub_801E317C(2, TCameraCtrl__data_804FF634.f30);
    }
}

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
