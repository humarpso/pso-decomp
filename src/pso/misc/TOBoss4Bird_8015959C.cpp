#include "types.h"
typedef s32 M2C_UNK;
struct Vec_80159870 { f32 x, y, z; };

struct VBase_80159870 { char pad[0x18]; };

struct VObj_80159870 : VBase_80159870 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Bird_80159870 : VObj_80159870 {
    u8 pad1C[0x24 - 0x1C];
    s32 param;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    Vec_80159870 pos;
    u8 pad44[0x60 - 0x44];
    s32 rotY;
    u8 pad64[0x90 - 0x64];
    f32 f90;
    f32 f94;
    s32 f98;
    u8 pad9C[0xA4 - 0x9C];
    f32 fA4;
    u8 padA8[0xB8 - 0xA8];
    s32 count;
    Vec_80159870 *positions;
    s32 *rots;
    u8 padC4[0xD4 - 0xC4];
    f32 fD4;
};

extern "C" {
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjDoor__sub_803DC894(int, int, f32);
extern f32 lbl_805DB31C;
void render__11TOBoss4BirdFv(Bird_80159870 *self);
}

extern "C" {

void render__11TOBoss4BirdFv(Bird_80159870 *self) {
    s32 i;
    if (self->m8(self->f90, self->f94) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(&self->pos);
        set_global_param__8TObjFishFi(self->param);
        for (i = 0; i < self->count; i++) {
            TObjPlayer__sub_803D9B2C();
            TObjPlayer__sub_803D9624(0, lbl_805DB31C, self->fD4, lbl_805DB31C);
            TOHangerMachine01__sub_803D9C00(&self->positions[i]);
            TObjPlayer__sub_803D9214(0, self->rotY);
            TObjPlayer__sub_803D9214(0, self->rots[i]);
            TObjDoor__sub_803DC894(self->f34, self->f98, self->fA4);
            TObjPlayer__sub_803D9B78();
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
