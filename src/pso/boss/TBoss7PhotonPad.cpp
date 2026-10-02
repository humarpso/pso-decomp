#include "pso/TBoss7PhotonPad.h"

TBoss7PhotonPad::~TBoss7PhotonPad() {}

#include "types.h"

typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Vec_802EF74C { f32 x, y, z; };

struct Ent_802EF74C { s32 a; s32 b; s32 c; f32 d; };

typedef struct Pad_802EF604 {
    u8 pad0[0x10];
    void *parent;
    u8 pad14[8];
    s32 unk1C;
    u8 pos[8];
    u8 unk28[4];
    s32 level;
    s32 shots;
    s32 timer;
} Pad_802EF604;

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK rotate_xz_pair_by_angle(void *, void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, M2C_UNK);
extern Ent_802EF74C lbl_80474008[];
extern M2C_UNK __vt__15TBoss7PhotonPad[];
extern s32 lbl_805D3FD0;
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_state__11TBoss7JointFv();
M2C_UNK TBoss7PhotonBullet__ct(void *, void *, s32, s32, void *, f32);
u32 __nw__7TObjectFUl(int);
extern const f32 lbl_805DEBF8;
void run_task__15TBoss7PhotonPadFv(Pad_802EF604 *self);
u8 *__ct__15TBoss7PhotonPadFv(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

void render__15TBoss7PhotonPadFv(void);

void render__15TBoss7PhotonPadFv(void) {  }
void run_task__15TBoss7PhotonPadFv(Pad_802EF604 *self) {
    s32 st;
    u32 p;

    self->timer--;
    if (self->timer <= 0) {
        st = get_state__11TBoss7JointFv();
        if (st != 0) {
            p = __nw__7TObjectFUl(0xF8);
            if (p != 0) {
                TBoss7PhotonBullet__ct((void *)p, self->parent, st, self->unk1C, self->pos, lbl_805DEBF8 * lbl_80474008[self->level].d);
            }
        }
        self->timer = lbl_80474008[self->level].b;
        rotate_xz_pair_by_angle(self->pos, self->unk28, lbl_80474008[self->level].c / lbl_80474008[self->level].a);
        self->shots--;
        if (self->shots == 0) {
            queue_destruction__7TObjectFv(self);
        }
    }
}
u8 *__ct__15TBoss7PhotonPadFv(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss7PhotonPad;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3FD0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg4;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, (void *)arg3);
    rotate_xz_pair_by_angle(arg0 + 0x20, arg0 + 0x28, -(lbl_80474008[M2C_FIELD(arg0, s32 *, 0x2C)].c / 2));
    M2C_FIELD(arg0, s32 *, 0x30) = lbl_80474008[M2C_FIELD(arg0, s32 *, 0x2C)].a;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return arg0;
}

}
