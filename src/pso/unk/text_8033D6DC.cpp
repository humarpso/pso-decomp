#include "types.h"
struct O_8033D9E4 { u8 pad[0x18]; void *f18; u8 pad2[0x7C - 0x1C]; void *f7c; void *h[9]; };

typedef struct Vec_8033D6DC { f32 x, y, z; } Vec_8033D6DC;

typedef struct O_8033D6DC {
    u8 pad0[0x1C];
    Vec_8033D6DC pos[3];
    u8 obj40[0x30];
    u8 obj70[0x10];
    void *h[9];
    u8 padA4[0xE0 - 0xA4];
    f32 fE0;
    f32 fE4;
    s32 frame;
    s32 fEC;
} O_8033D6DC;

typedef struct Ent_8033D6DC { s32 start; s32 end; s32 id; s32 src; } Ent_8033D6DC;

extern "C" {
s32 request_destroy__11TBoss4Type2FUi(void *);
s32 init_state_1__8TObjFishFPv(void *);
s32 __dt__7TObjectFv(void *, int);
s32 __dl__7TObjectFPv(void *);
s32 restore_player_cameras();
s32 TBoss6PlotFalz__sub_802AC4D8();
extern u8 lbl_804EFA1C[];
O_8033D9E4 *fn_8033D9E4(O_8033D9E4 *arg0, s16 arg1);
void queue_destruction__7TObjectFv(void *);
s32 request_destroy__11TBoss4Type2FUi(void *);
void spawn_particle_effect_with_flags(void *, int, int);
void *create_particle_emitter(void *, s32);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void TOTrapAncient01__sub_80226578(int, void *, int, int, int);
void play_sound_effect(int, void *, int, int);
void queue_event_1D__12TBoss3VoloptFss(int, int);
s32 get_phase__8TObjFishFPv(s32);
extern u8 lbl_80477F2C[];
extern Ent_8033D6DC lbl_80477FC8[];
extern u8 lbl_804EFA08[];
void fn_8033D6DC(O_8033D6DC *self);
}

extern "C" {

void fn_8033D6DC(O_8033D6DC *self) {
    s32 i;
    if ((self->fE0 += 0.7f) > 284.0f) {
        self->fE0 = 284.0f;
    }
    self->fE4 += 0.8f;
    if (self->fE4 >= 30.0f) {
        self->fE4 -= 30.0f;
    }
    switch (self->frame) {
    case 0xE:
        play_sound_effect(0x40039E28, 0, 0, 0);
        break;
    case 0x72:
        play_sound_effect(0x4003A129, 0, 0, 0);
        break;
    case 0xEE:
        play_sound_effect(0x4003972A, 0, 0, 0);
        break;
    case 0x11D:
        play_sound_effect(0x40031C2B, 0, 0, 0);
        break;
    }
    TOTrapAncient01__sub_80226578(0x4003C627, self, 0, 0, 0);
    switch (self->frame) {
    case 0xB9:
        spawn_particle_effect_with_flags(self->obj40, 0x220, 0x40);
        spawn_particle_effect_with_flags(self->obj70, 0x220, 0x40);
        break;
    case 0xED:
        spawn_particle_effect_with_flags(lbl_80477F2C, 0x221, 0x40);
        spawn_particle_effect_with_flags(lbl_80477F2C, 0x225, 0x40);
        break;
    }
    for (i = 0; i < 9; i++) {
        Ent_8033D6DC *e = &lbl_80477FC8[i];
        if (self->frame >= e->start && self->frame < e->end) {
            void *p = lbl_80477F2C;
            if (e->src == -2) {
                p = lbl_804EFA08;
            } else if (e->src >= 0) {
                p = &self->pos[e->src];
            }
            if (self->h[i] == NULL) {
                self->h[i] = create_particle_emitter(p, e->id);
                if (self->h[i] != NULL) {
                    set_flags__11TBoss4Type2FPvUi(self->h[i], 0x40);
                }
            } else {
                copy_pos__11TNowLoadingFPvPv(self->h[i], p);
            }
        } else if (self->h[i] != NULL) {
            request_destroy__11TBoss4Type2FUi(self->h[i]);
            self->h[i] = NULL;
        }
    }
    switch (self->frame) {
    case 5:
    case 0x32:
    case 0x78:
    case 0x8C:
    case 0xEB:
    case 0x122:
    case 0x136:
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
        break;
    }
    self->frame++;
    if (self->frame >= 0x197 || get_phase__8TObjFishFPv(self->fEC) != 5) {
        queue_destruction__7TObjectFv(self);
    }
}

O_8033D9E4 *fn_8033D9E4(O_8033D9E4 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != 0) {
        arg0->f18 = lbl_804EFA1C;
        for (i = 0; i < 9; i++) {
            if (arg0->h[i] != 0) {
                request_destroy__11TBoss4Type2FUi(arg0->h[i]);
                arg0->h[i] = 0;
            }
        }
        restore_player_cameras();
        TBoss6PlotFalz__sub_802AC4D8();
        if (arg0->f7c != 0) {
            init_state_1__8TObjFishFPv(arg0->f7c);
            arg0->f7c = 0;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
