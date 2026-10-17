#include "types.h"
#include "pso/system/vector.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TPhotonFarlla.h"

#include <stddef.h>
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/player/TObjPlayer.h"
struct Stack_801AB018 {
    s32 sp8;
    f32 spC;
    u8 pad_10[0x4];
    s32 sp14;
    f32 sp18;
    u8 pad_1C[0x4];
    s32 sp20;
    f32 sp24;
    u8 trailing_storage[0x4];
};

extern "C" {
s32 spawn_particle_effect(void *, int);
s32 advance_animation_playback(void *);
s32 find_entity_by_id(int);
s32 spawn_photon_blast_attachment_effects(void *, int);
s32 construct_photon_magic_square_normal(int, void *, int, void *, int);
s32 play_persistent_sound(int, void *, int, int, int);
u32 __nw__7TObjectFUl(int);
extern const f32 lbl_805DC15C;
extern const f32 lbl_805DC160;
extern const f32 lbl_805DC164;
extern const f32 lbl_805DC168;
extern const f32 lbl_805DC16C;
extern const f32 lbl_805DC170;
extern const f32 lbl_805DC174;
extern const f32 lbl_805DC178;
extern const f32 lbl_805DC17C;
extern const f32 lbl_805DC180;
#pragma push
#pragma opt_common_subs off
void TPhotonFarlla::run_task() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_801AB018, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801AB018, spC) == 0x4) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801AB018, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_801AB018, sp18) == 0x10) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_801AB018, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_801AB018, sp24) == 0x1C) ? 1 : -1];
    Stack_801AB018 stack;
    f32 temp_f1;
    s32 entity;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    u32 temp_r3_2;
    *(s32 *)&this->unk_1A4 = (s32) (*(s32 *)&this->unk_1A4 + 1);
    if (((s32) *(s32 *)&this->unk_1A4 == 0x32) && ((s32) this->m_1a0 == 0)) {
        this->m_1a0 = 1;
        entity = find_entity_by_id((int) ((s32) this->m_17c));
        if (entity != 0) {
            VecCopy((Vec *)(&stack.sp20), (const Vec *)(entity + 0x38));
            stack.sp24 += lbl_805DC15C;
        }
        temp_r3_2 = __nw__7TObjectFUl((int) (0xD0));
        if (temp_r3_2 != 0U) {
            construct_photon_magic_square_normal((int) (temp_r3_2), (void *) (arg0), (int) (0), (void *) (&stack.sp20), (int) (0x78));
        }
    }
    if (((s32) *(s32 *)&this->unk_1A4 == 0x64) && ((s16) this->m_b8 == 1)) {
        ((TUnk_804C3248 *)arg0)->begin_photon_summon_camera((int) (1));
        *(s32 *)&this->unk_1A4 = 0;
        ((TObjMotion *)arg0)->set_field_b8((int) (0));
        spawn_photon_blast_attachment_effects((void *) (arg0), (int) (0));
    }
    this->m_194 = (s16) this->m_b8;
    ((TUnk_804C3248 *)arg0)->update_state();
    advance_animation_playback((void *) (arg0));
    ((TUnk_804C3248 *)arg0)->update_photon_blast_attachments();
    *(s16 *)((s8 *)arg0 + 0x14C) = (s16) (*(s16 *)((s8 *)arg0 + 0x14C) + 0xF);
    *(s16 *)((s8 *)arg0 + 0x14C) = (s16) (u8) *(s16 *)((s8 *)arg0 + 0x14C);
    if (lbl_805DC160 == (f32) *(s32 *)&this->unk_1A4) {
        ((TPhotonFarlla *)arg0)->update_all_slots();
    }
    if (lbl_805DC164 == (f32) *(s32 *)&this->unk_1A4) {
        temp_r3_3 = find_entity_by_id((int) ((s32) this->m_17c));
        if (temp_r3_3 != 0) {
            VecCopy((Vec *)(&stack.sp14), (const Vec *)(temp_r3_3 + 0x38));
        }
        stack.sp18 += lbl_805DC168;
        spawn_particle_effect((void *) (&stack.sp14), (int) (0x151));
        stack.sp18 += lbl_805DC16C;
        spawn_particle_effect((void *) (&stack.sp14), (int) (0x15F));
    }
    temp_r3_4 = *(s32 *)&this->unk_1A4;
    if ((lbl_805DC170 == (f32) temp_r3_4) || (lbl_805DC174 == (f32) temp_r3_4)) {
        temp_r3_5 = find_entity_by_id((int) ((s32) this->m_17c));
        if (temp_r3_5 != 0) {
            VecCopy((Vec *)(&stack.sp8), (const Vec *)(temp_r3_5 + 0x38));
            stack.spC += lbl_805DC168;
        }
        spawn_particle_effect((void *) (&stack.sp8), (int) (0x151));
    }
    if ((f32) *(s32 *)&this->unk_1A4 > lbl_805DC178) {
        temp_f1 = this->m_184;
        if (temp_f1 > lbl_805DC17C) {
            this->m_184 = (f32) (temp_f1 - lbl_805DC180);
        }
    }
    if ((s32) this->m_1a0 != 0) {
        play_persistent_sound((int) (0x4002462F), (void *) (arg0), (int) (0), (int) (0), (int) (0));
    }
}
#pragma pop

}
