#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
u16 obj_getField1c(s32);
s32 get_type__10TObjPlayerFPv(s32);
void *__ct__7TEffectFv(void *);
M2C_UNK TObjEneGibbles__sub_80156780(u32, void *, M2C_UNK);
u32 TObjPlayer__sub_801569F4(u32, void *);
u32 __nw__7TObjectFUl(M2C_UNK);
s16 get_level_tier__10TObjPlayerFi(s16);
extern void *lbl_804CC148[];
extern const f32 lbl_805DC7B4;
extern const f32 lbl_805DC7B8;
extern const f32 lbl_805DC7BC;
extern const f32 lbl_805DC7C0;
extern const f32 lbl_805DC7C4;
extern const f32 lbl_805DC7C8;
u8 *construct_area_technique_base(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

u8 *construct_area_technique_base(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 var_r0;
    __ct__7TEffectFv(arg0);
    M2C_FIELD(arg0, void ***, 0x18) = lbl_804CC148;
    M2C_FIELD(arg0, u16 *, 0xB4) = 0xFFFF;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x7C, arg3);
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x44) = lbl_805DC7B8;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if (arg4 < 0) {
        M2C_FIELD(arg0, s16 *, 0x78) = 0;
    } else if (arg4 >= 0x1E) {
        M2C_FIELD(arg0, s16 *, 0x78) = 0x1E;
    } else {
        M2C_FIELD(arg0, s16 *, 0x78) = arg4;
    }
    M2C_FIELD(arg0, s16 *, 0x7A) = get_level_tier__10TObjPlayerFi(M2C_FIELD(arg0, s16 *, 0x78));
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DC7BC;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DC7B8;
    M2C_FIELD(arg0, f32 *, 0x64) = lbl_805DC7C0;
    M2C_FIELD(arg0, f32 *, 0x70) = lbl_805DC7C4;
    M2C_FIELD(arg0, f32 *, 0xBC) = lbl_805DC7B4;
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805DC7B4;
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DC7B4;
    M2C_FIELD(arg0, f32 *, 0xC8) = lbl_805DC7C8;
    M2C_FIELD(arg0, f32 *, 0xCC) = lbl_805DC7B8;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    if (obj_getField1c(M2C_FIELD(arg0, s32 *, 0x1C)) < 4U) {
        if (get_type__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x1C) + 0x828) != 0) {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0x40007;
        } else {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0x40107;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0x40007;
    }
    var_r0 = __nw__7TObjectFUl(0xAC);
    if (var_r0 != 0U) {
        var_r0 = TObjPlayer__sub_801569F4(var_r0, arg0);
    }
    M2C_FIELD(arg0, u32 *, 0xE8) = var_r0;
    if (M2C_FIELD(arg0, u32 *, 0xE8) != 0U) {
        TObjEneGibbles__sub_80156780(M2C_FIELD(arg0, u32 *, 0xE8), arg0 + 0xBC, 1);
    }
    return arg0;
}

}
