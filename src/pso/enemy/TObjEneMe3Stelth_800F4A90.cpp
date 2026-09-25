#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_800F4D68 { f32 x; f32 y; f32 z; };

struct Node_800F4D68 { u8 pad[0x2c]; void *child; };

struct Obj_800F4D68 { u8 pad[0x34]; Node_800F4D68 *node; u8 pad2[0xc0 - 0x38]; f32 fc0; u8 pad3[0xf8 - 0xc4]; s32 ff8; };

extern "C" {
f32 get_random_float__8TObjFishFv(f32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 TObjEneMe3Stelth__data_805DA834;
extern const f32 TObjEneMe3Stelth__data_805DA844;
bool TObjEneMe3Stelth__sub_800F4C10(u8 *arg0);
s32 TObjPlayer__sub_803D97F0(void *);
void TObjPlayer__sub_803D7B68(s32, f32);
s32 TObjPlayer__sub_803D7CA4(void *);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 TObjPlayer__sub_803D9B78();
extern u8 lbl_8058D490[];
extern const f32 TObjEneMe3Stelth__data_805DA840;
f32 TObjEneMe3Stelth__sub_800F4D68(Obj_800F4D68 *self);
}

extern "C" {

#pragma push
#pragma fp_contract on
bool TObjEneMe3Stelth__sub_800F4C10(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;
    if (get_random_float__8TObjFishFv(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x390), f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x3C)) >= TObjEneMe3Stelth__data_805DA844) {
        return 0;
    }
    if (M2C_FIELD(arg0, f32 *, 0x3AC) > TObjEneMe3Stelth__data_805DA834) {
        return 0;
    }
    temp_f31_2 = M2C_FIELD(arg0, f32 *, 0x3A8) * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f31 = (M2C_FIELD(arg0, f32 *, 0x3A0) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60))) + temp_f31_2;
    return (temp_f31 < TBoss8Dragon__sub_803D64DC(0x1E00)) == 0;
}
#pragma pop

f32 TObjEneMe3Stelth__sub_800F4D68(Obj_800F4D68 *self) {
    Vec_800F4D68 v;
    Node_800F4D68 *node;
    v.x = TObjEneMe3Stelth__data_805DA840;
    v.y = TObjEneMe3Stelth__data_805DA840;
    v.z = TObjEneMe3Stelth__data_805DA840;
    TObjPlayer__sub_803D97F0(lbl_8058D490);
    TObjPlayer__sub_803D7B68(self->ff8, self->fc0);
    node = self->node;
    TObjPlayer__sub_803D7CA4(node);
    TObjPlayer__sub_803D7CA4(node->child);
    TCameraCtrl__sub_803D8934(0, &v, &v);
    TObjPlayer__sub_803D9B78();
    return v.y;
}

}
