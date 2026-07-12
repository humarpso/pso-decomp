#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_variant_sound__14TObjEneBm5WolfFPv(void *arg0);
void select_target__14TObjEneBm5WolfFPv(void *arg0);
void TObjEneBm5Wolf__sub_800B78E8(void* p);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(f32);

extern f32 lbl_805D9E4C;
extern f32 lbl_805D9E50;

void play_variant_sound__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        update_linked_position__14TObjEneEpsilonFPv(lbl_805D9E4C);
        return;
    }
    update_linked_position__14TObjEneEpsilonFPv(lbl_805D9E50);
}

extern f32 lbl_805D9E4C;
extern f32 lbl_805D9E50;

void select_target__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805D9E4C);
        return;
    }
    select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805D9E50);
}

void TObjEneBm5Wolf__sub_800B78E8(void* p) { *(u32*)((char*)p + 0x408) |= 0x1; }

}
