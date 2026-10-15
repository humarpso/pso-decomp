#include "types.h"

struct Part_80232EC0 { s32 id; u32 flags; u8 pad8[4]; };

struct Profile_80232EC0 { Part_80232EC0 *parts; u32 count; };

struct Task_80232EC0 {
    u8 pad0[0x18];
    void **vt;
    u32 *emitters;
    s32 sound;
    s32 tier;
    s32 level;
    s16 x2c;
    u16 owner;
    u8 pos[0xC];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
u32 spawn_continuous_particle_effect_with_flags(void *, s32, s32);
void set_owner_id__13TParticleCtrlFUs(u32, u16);
u32 *mem_alloc(s32);
s32 update_technique_slot__10TTecRaFoieFl(s32, s32, s32);
s32 play_sound_effect(s32, void *, s32, s32);
void __ct__7TObjectFP7TObject(void *, void *);
s32 get_level_tier__10TObjPlayerFl(s32);
extern Profile_80232EC0 grants_effect_emitter_table[];
extern void *lbl_804CC888[];
Task_80232EC0 *construct_grants_effect__12TBoss3VoloptFPvPviPv(Task_80232EC0 *self, u8 *src, s32 level, void *parent);
}

extern "C" {

Task_80232EC0 *construct_grants_effect__12TBoss3VoloptFPvPviPv(Task_80232EC0 *self, u8 *src, s32 level, void *parent) {
    u32 i;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = lbl_804CC888;
    VecCopy__FP3VecPC3Vec(self->pos, src + 0x38);
    self->x2c = 0;
    self->owner = obj_getField1c(src);
    self->level = level;
    if (self->level < 0) {
        self->level = 0;
    } else if (level >= 0x1E) {
        self->level = 0x1E;
    }
    self->tier = get_level_tier__10TObjPlayerFl(self->level);
    self->emitters = mem_alloc(grants_effect_emitter_table[self->tier].count * 4);
    for (i = 0; i < grants_effect_emitter_table[self->tier].count; i++) {
        self->emitters[i] = spawn_continuous_particle_effect_with_flags(self->pos, grants_effect_emitter_table[self->tier].parts[i].id, 0x10);
        if (self->emitters[i] != 0) {
            set_owner_id__13TParticleCtrlFUs(self->emitters[i], self->owner);
        }
    }
    switch (self->tier) {
    case 0:
        self->sound = play_sound_effect(0x4002A90C, self->pos, 0, 0);
        if (self->sound >= 0) {
            update_technique_slot__10TTecRaFoieFl(self->sound, 0x100, 0);
        }
        break;
    case 1:
        self->sound = play_sound_effect(0x4002A90C, self->pos, 0, 0);
        break;
    case 2:
    case 3:
        self->sound = play_sound_effect(0x4002A90C, self->pos, 0, 0);
        if (self->sound >= 0) {
            update_technique_slot__10TTecRaFoieFl(self->sound, -0x180, 0);
        }
        break;
    case 4:
        self->sound = play_sound_effect(0x4002A90C, self->pos, 0, 0);
        if (self->sound >= 0) {
            update_technique_slot__10TTecRaFoieFl(self->sound, -0x250, 0);
        }
        break;
    case 5:
        self->sound = play_sound_effect(0x4002A90C, self->pos, 0, 0);
        if (self->sound >= 0) {
            update_technique_slot__10TTecRaFoieFl(self->sound, -0x100, 0);
        }
        break;
    }
    return self;
}

}
