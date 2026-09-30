#include "pso/TBoss7PhotonPad.h"

TBoss7PhotonPad::~TBoss7PhotonPad() {}

#include "types.h"

typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Vec_802EF74C { f32 x, y, z; };

struct Ent_802EF74C { s32 a; s32 b; s32 c; s32 d; };

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjBoss2Tunnel__sub_8007E7D8(void *, void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, M2C_UNK);
extern Ent_802EF74C lbl_80474008[];
extern M2C_UNK __vt__15TBoss7PhotonPad[];
extern s32 lbl_805D3FD0;
u8 *__ct__15TBoss7PhotonPadFv(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

void render__15TBoss7PhotonPadFv(void);

void render__15TBoss7PhotonPadFv(void) {  }
u8 *__ct__15TBoss7PhotonPadFv(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss7PhotonPad;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3FD0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg4;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, (void *)arg3);
    TObjBoss2Tunnel__sub_8007E7D8(arg0 + 0x20, arg0 + 0x28, -(lbl_80474008[M2C_FIELD(arg0, s32 *, 0x2C)].c / 2));
    M2C_FIELD(arg0, s32 *, 0x30) = lbl_80474008[M2C_FIELD(arg0, s32 *, 0x2C)].a;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return arg0;
}

}
