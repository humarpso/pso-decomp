#include "types.h"

extern "C" {

s32 create__12TObjEneSlimeFi(s32 arg0);
void spawn_pair__12TObjEneSlimeFv(void);
void *load_resource_from_descriptor(void *, s32, s32 *, s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 TObjEneSlime__ct(s32, s32, s32);
s32 __nw__7TObjectFUl(s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 spawn_child__12TObjEneSlimeFsiiff(s32, s32, s32, f32, f32);

extern s32 slime_pair_resource_descriptor[];
extern void *slime_bml_resource;
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
    slime_bml_resource = temp_r4;
    temp_r5 = *(void **)((s8 *)temp_r4 + 0x42C);
    spawn_child__12TObjEneSlimeFsiiff(0x28, *(s32 *)((s8 *)temp_r5 + 0x48), *(s32 *)((s8 *)temp_r5 + 0x4C), lbl_805DA66C, lbl_805DA6B4);
    temp_r5_2 = *(void **)((s8 *)slime_bml_resource + 0x42C);
    spawn_child__12TObjEneSlimeFsiiff(0x29, *(s32 *)((s8 *)temp_r5_2 + 0x58), *(s32 *)((s8 *)temp_r5_2 + 0x5C), lbl_805DA66C, lbl_805DA6B4);
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
