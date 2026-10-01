#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 is_split_screen(void);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;
u8 *TObjFish__create(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TPhotonMagicSquare__sub_801A2640();
s32 TObjFish__sub_8029E170(void *, void *, int, int);
extern M2C_UNK __vt__8TObjFish[];
extern s32 lbl_805D3D58;
u8 *TObjFish__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
}

extern "C" {

void *__dt__8TObjFishFv(void *arg0, s16 arg1);
void free_resource__8TObjFishFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);

extern M2C_UNK __vt__8TObjFish[];

void *__dt__8TObjFishFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TObjFish;
        if (M2C_FIELD(arg0, void **, 0xA0) != NULL) { safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0xA0)); M2C_FIELD(arg0, M2C_UNK *, 0xA0) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TObjFish__data_805D65E8;

u8 *TObjFish__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    f32 temp_f0;
    f32 var_f1;
    TPhotonMagicSquare__sub_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TObjFish;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3D58;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2 + 0xC));
    copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x5C), (void *) (arg2 + 0x18));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x68), (void *) (arg2 + 0x24));
    var_f1 = M2C_FIELD(arg0, f32 *, 0x68);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x6C);
    if (var_f1 < temp_f0) {
        var_f1 = temp_f0;
    }
    if (var_f1 < temp_f0) {
        var_f1 = temp_f0;
    }
    M2C_FIELD(arg0, f32 *, 0x9C) = var_f1;
    M2C_FIELD(arg0, s32 *, 0x94) = M2C_FIELD(arg2, s32 *, 0x30) + M2C_FIELD(arg2, s32 *, 0x34) + M2C_FIELD(arg2, s32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x94) < 1) {
        M2C_FIELD(arg0, s32 *, 0x94) = 1;
    }
    if (TObjFish__sub_8029E170((void *) (arg0), (void *) (arg0 + 0x68), (int) (M2C_FIELD(arg2, s32 *, 0x30)), (int) (M2C_FIELD(arg2, s32 *, 0x34))) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    return arg0;
}

u8 *TObjFish__create(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0xA4));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TObjFish__ct((u8 *)(temp_r3), (M2C_UNK)(tl_05), (u8 *)(arg0)));
    }
    return var_r0;
}

void free_resource__8TObjFishFv(void) {
    if ((u32) TObjFish__data_805D65E8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjFish__data_805D65E8, 1);
        TObjFish__data_805D65E8 = 0U;
    }
}

}
