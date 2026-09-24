#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_80018F64 { f32 x, y, z; };

struct Obj_80018F64 {
    u8 pad0[0x104]; Vec_80018F64 v104;
    u8 pad110[0x248 - 0x110]; f32 f248; f32 f24c; f32 f250;
    u8 pad254[0x290 - 0x254]; Vec_80018F64 v290; Vec_80018F64 v29c;
    u8 pad2a8[4]; s32 f2ac; u8 pad2b0[4]; f32 f2b4;
    u8 pad2b8[0x2d4 - 0x2b8]; u16 f2d4; u8 pad2d6[6]; s32 f2dc;
    u8 pad2e0[0x2fc - 0x2e0]; Vec_80018F64 v2fc; Vec_80018F64 v308;
    u8 pad314[0x320 - 0x314]; s32 f320; u8 pad324[4]; s16 f328; s16 f32a;
};

extern "C" {
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 TObjPlayer__data_805D7D44;
void TObjPlayer__sub_80018F64(Obj_80018F64 *self);
}

extern "C" {

void* TObjPlayer__sub_80018F5C(void* p);
void *destroy_motion_object__10TObjPlayerFPvs(void *arg0, s16 arg1);
void get_pos__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);

void* TObjPlayer__sub_80018F5C(void* p) { return (char*)p + 0x2fc; }

extern M2C_UNK lbl_804806E8[];

void TObjPlayer__sub_80018F64(Obj_80018F64 *self) {
    self->v104.x = self->v104.y = self->v104.z = TObjPlayer__data_805D7D24;
    self->v290.x = self->v290.y = self->v290.z = TObjPlayer__data_805D7D24;
    self->v29c.x = self->v29c.y = self->v29c.z = TObjPlayer__data_805D7D24;
    self->f248 = self->f250 = TObjPlayer__data_805D7D24;
    self->f24c = TObjPlayer__data_805D7D44;
    self->f2ac = 0;
    self->f2b4 = TObjPlayer__data_805D7D24;
    self->f2d4 = 0xFFFF;
    self->f2dc = 0;
    self->f328 = self->f32a = 0;
    self->f320 = 0;
    self->v2fc.x = self->v2fc.y = self->v2fc.z = self->v308.x = self->v308.y = self->v308.z = TObjPlayer__data_805D7D24;
}

void *destroy_motion_object__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804806E8;
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void get_pos__10TObjPlayerFii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x2FC, arg0);
}

}
