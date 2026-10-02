#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_80198A2C { f32 x, y, z; };

struct Obj_80198A2C {
    u8 pad0[0x1C];
    Vec_80198A2C pos;
    u8 pad28[0x34 - 0x28];
    s32 rot;
    u8 pad38[0x3C - 0x38];
    void *effect;
    s32 timer;
    s32 counter;
    s32 limit;
    s32 state;
    s32 f50;
    s32 f54;
};

struct Pad_80198A2C { u8 pad0[0x10]; s16 buttons; };

struct Sys_80198A2C { u8 pad0[0x48]; u16 mode; };

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
void *spawn_particle_effect_with_rotation(void *, void *, int, int);
M2C_UNK spawn_particle_effect_with_flags(void *, int, int);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK play_sound_effect(int, void *, int, int);
extern Vec_80198A2C lbl_80446070;
extern Sys_80198A2C lbl_8050DD58;
extern Pad_80198A2C lbl_8050DDAC;
extern const f32 lbl_805DBF48;
extern const f32 lbl_805DBF4C;
void TBoss3Volopt__sub_80198A2C(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TBoss3Volopt__sub_80198A2C(u8 *arg0) {
    Obj_80198A2C *self = (Obj_80198A2C *)arg0;
    s32 state;
    if (self->counter++ >= self->limit) {
        spawn_particle_effect_with_flags(&self->pos, 0x45, 0x40);
        spawn_particle_effect_with_flags(&self->pos, 0x46, 0x40);
        queue_destruction__7TObjectFv(self);
        return;
    }
    state = self->state;
    if (state == 0) {
        if (self->f50 != 0) {
            if (lbl_8050DDAC.buttons & (self->f54 != 0 ? 0x10 : 1)) {
                play_sound_effect(0x4002A605, &self->pos, 0, 0);
                play_sound_effect(0x40052D15, &self->pos, 0, 0);
                self->state = 1;
                return;
            }
        } else {
            if (lbl_8050DDAC.buttons & (self->f54 != 0 ? 0x20 : 2)) {
                play_sound_effect(0x4002A605, &self->pos, 0, 0);
                play_sound_effect(0x40052D15, &self->pos, 0, 0);
                self->state = 1;
                return;
            }
        }
    }
    if (state != 0) {
        if (self->effect == NULL) {
            Vec_80198A2C init = lbl_80446070;
            if (lbl_8050DD58.mode != 6) {
                self->effect = spawn_particle_effect_with_rotation(&self->pos, &init, 0xC0, 2);
            }
        }
        if (self->timer++ >= 1000) {
            queue_destruction__7TObjectFv(self);
            return;
        }
        self->rot += 0x16C;
        if (self->timer <= 0x14) {
            Vec_80198A2C v;
            VecCopy__FP3VecPC3Vec(&v, &self->pos);
            v.y += lbl_805DBF48;
            spawn_particle_effect(&v, 0x1DB);
        }
        self->pos.y = lbl_805DBF4C * (f32)(self->timer * self->timer) + self->pos.y;
        if (self->effect != NULL) {
            copy_pos__11TNowLoadingFPvPv(self->effect, &self->pos);
        }
    }
}
#pragma pop

}
