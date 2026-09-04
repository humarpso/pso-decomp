#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int is_active__16TObjEneBm5GibonUFPv(void* p);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *arg0);
void set_anim_by_state__16TObjEneBm5GibonUFPv(void *arg0);
void set_flag__16TObjEneBm5GibonUFPv(void* p);
void update_target__16TObjEneBm5GibonUFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(f32);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

int is_active__16TObjEneBm5GibonUFPv(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }

extern f32 lbl_805DA244;
extern f32 lbl_805DA248;

void play_sound_variant__16TObjEneBm5GibonUFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        update_linked_position__14TObjEneEpsilonFPv(lbl_805DA244);
        return;
    }
    update_linked_position__14TObjEneEpsilonFPv(lbl_805DA248);
}

extern f32 lbl_805DA244;
extern f32 lbl_805DA248;

void update_target__16TObjEneBm5GibonUFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805DA244);
        return;
    }
    select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805DA248);
}

void set_flag__16TObjEneBm5GibonUFPv(void* p) { *(u32*)((char*)p + 0x4ac) |= 0x1; }

void set_anim_by_state__16TObjEneBm5GibonUFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        TObjEneDD__sub_800BBA18(arg0, 7);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 6);
}

}
