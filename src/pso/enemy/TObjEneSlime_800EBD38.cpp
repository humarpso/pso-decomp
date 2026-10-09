#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__12TObjEneSlimeFi(s32 arg0);
void spawn_pair__12TObjEneSlimeFv(void);
void *load_resource_from_descriptor(void *, s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TObjControl__ct(s32, s32);
s32 TObjEneSlime__ct(s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
void *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK spawn_child__12TObjEneSlimeFsiiff(M2C_UNK, s32, s32, f32, f32);

extern M2C_UNK slime_pair_resource_descriptor[];
extern void *lbl_805D52B0;
extern f32 lbl_805DA66C;
extern f32 lbl_805DA6B4;

void spawn_pair__12TObjEneSlimeFv(void) {
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;

    temp_r4 = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (temp_r4 != NULL) {
        temp_r4 = load_resource_from_descriptor(temp_r4, 1, slime_pair_resource_descriptor, 0, 0, 0);
    }
    lbl_805D52B0 = temp_r4;
    temp_r5 = M2C_FIELD(temp_r4, void **, 0x42C);
    spawn_child__12TObjEneSlimeFsiiff(0x28, M2C_FIELD(temp_r5, s32 *, 0x48), M2C_FIELD(temp_r5, s32 *, 0x4C), lbl_805DA66C, lbl_805DA6B4);
    temp_r5_2 = M2C_FIELD(lbl_805D52B0, void **, 0x42C);
    spawn_child__12TObjEneSlimeFsiiff(0x29, M2C_FIELD(temp_r5_2, s32 *, 0x58), M2C_FIELD(temp_r5_2, s32 *, 0x5C), lbl_805DA66C, lbl_805DA6B4);
}

extern s32 tl_04;

s32 create__12TObjEneSlimeFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3D8);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEneSlime__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
