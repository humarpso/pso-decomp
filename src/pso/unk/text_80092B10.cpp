#include "types.h"

struct VBase_80092B10 { char pad[0x18]; };
struct VObj_80092B10 : VBase_80092B10 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void TObjEneRe7Berura__vt103(void* p);

int TObjEneRe7Berura__sub_80095328(void*);
int get_target_info__9TObjEneDDFPv(void*);

typedef struct { s32 x, y, z; } Vec_80092B10;
typedef struct { u32 pad0; u32 count; } Motion_80092B10;
typedef struct { u32 pad0; Motion_80092B10 *motion; } MotEnt_80092B10;
typedef struct { u32 pad0; s32 index; u32 pad8[2]; } Anim_80092B10;

typedef struct {
    VObj_80092B10 v;
    u8 pad1c[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0xD8 - 0x64];
    Anim_80092B10 *anims;
    MotEnt_80092B10 *mots;
    u8 padE0[0x326 - 0xE0];
    s16 f326;
    u8 pad328[0x354 - 0x328];
    f32 f354;
    f32 f358;
} Ene_80092B10;

void update_player_state__9TObjEneDDFv(void *, Vec_80092B10 *, s32);
void toggle_particle_effect__10TObjPlayerFv(void);
void end_effect_render__13TParticleCtrlFv(void);
s32 rotate_matrix_y(int, int);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_global_param__8TObjFishFl(int);
s32 draw_model_motion(int, Motion_80092B10 *, f32);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);
extern Vec_80092B10 re7_berura_init_vec;
extern const f32 TObjEneRe7Berura__data_805D9724;
extern const f32 lbl_805D9728;
extern const f32 TObjEneRe7Berura__data_805D972C;

void TObjEneRe7Berura__vt104(Ene_80092B10 *self) {
    s32 idx;
    Motion_80092B10 *mot;
    f32 frame;

    get_target_info__9TObjEneDDFPv(self);
    if (self->v.m8(TObjEneRe7Berura__data_805D9724, lbl_805D9728) != 0) {
        if (self->f326 != 0xB) {
            Vec_80092B10 v = re7_berura_init_vec;
            update_player_state__9TObjEneDDFv(self, &v, 0);
        }
        toggle_particle_effect__10TObjPlayerFv();
        set_global_param__8TObjFishFl(self->f24);
        push_matrix();
        post_translate_matrix(self->f38);
        rotate_matrix_y(0, self->f60);
        idx = (s32)self->f354;
        if (idx < 0) {
            idx = 0;
        } else if (idx >= 8) {
            idx = 7;
        }
        mot = self->mots[self->anims[idx].index].motion;
        frame = self->f358;
        if (frame < TObjEneRe7Berura__data_805D972C) {
            frame = TObjEneRe7Berura__data_805D972C;
        } else if (frame > (f32)(mot->count - 1)) {
            frame = (f32)mot->count;
        }
        set_global_flag__10TObjPlayerFv();
        draw_model_motion(self->f34, mot, frame);
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}
void TObjEneRe7Berura__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneRe7Berura__sub_80095328(p); } }

}
