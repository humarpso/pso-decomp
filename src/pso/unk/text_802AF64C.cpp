#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_802AF64C { f32 x, y, z; };

struct Obj_802AF64C { u8 pad[0x38]; Vec_802AF64C pos; u8 pad2[0x90 - 0x44]; void *x90; };

struct Cam_802AF64C { u8 pad[0x178]; Vec_802AF64C v178; u8 pad2[0x190 - 0x184]; s32 a, b, c; };

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
M2C_UNK TBoss7Tentacle__sub_803D8A6C(s32, s32, s32, s32);
M2C_UNK TScene__sub_803D8DB4(s32, void *, void *);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
M2C_UNK TObjPlayer__sub_803D97F0(void *);
M2C_UNK pop_matrix();
extern Vec_802AF64C lbl_804707E8;
extern u8 lbl_8058D490[];
extern Cam_802AF64C *lbl_805D4DF0;
extern const f32 lbl_805DE1F0;
void fn_802AF64C(Obj_802AF64C *arg0);
}

extern "C" {

void fn_802AF64C(Obj_802AF64C *arg0) {
    Vec_802AF64C v = lbl_804707E8;
    TObjPlayer__sub_803D97F0(lbl_8058D490);
    TBoss7Tentacle__sub_803D8A6C(0, lbl_805D4DF0->a, lbl_805D4DF0->b, lbl_805D4DF0->c);
    TScene__sub_803D8DB4(0, &v, &v);
    pop_matrix();
    TNpcPlayer__sub_803D97B4(&v);
    v.x *= lbl_805DE1F0;
    v.y *= lbl_805DE1F0;
    v.z *= lbl_805DE1F0;
    TBoss4Zako__sub_803D8910(&v, &lbl_805D4DF0->v178);
    VecCopy__FP3VecPC3Vec(&arg0->pos, &v);
    if (arg0->x90 != NULL) {
        copy_pos__11TNowLoadingFPvPv(arg0->x90, &arg0->pos);
    }
}

}
