#include "types.h"
typedef s32 M2C_UNK;

#define NEW_801AC808(n) (((u8 *(*)(int))__nw__7TObjectFUl)(n))
#define F_801AC808(o, t, off) (*(t *)((u8 *)(o) + (off)))
struct Vec_801AC808 { f32 x, y, z; };
struct Pkt_801AC808 {
    Vec_801AC808 pos;
    u16 owner;
    s32 first;
    s32 more;
    u8 pad18[0x1C - 0x18];
    u8 count;
    f32 f20;
};
struct VBase_801AC808 { u8 pad[0x18]; };
struct Leilla_801AC808 : VBase_801AC808 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12();
    u8 pad1C[0x38 - 0x1C];
    Vec_801AC808 pos;
};
struct Res_801AC808 { u8 pad[0x18]; s32 f18; s32 f1C; };
struct Game_801AC808 { u8 pad[0x42C]; Res_801AC808 *res; s32 f430; };

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
u8 *find_entity_by_id(u16);
M2C_UNK begin_photon_summon_camera(void *, int);
void spawn_photon_blast_opening_effects(s32, u16);
M2C_UNK spawn_photon_blast_attachment_effects(void *, int);
void photon_base_ct(void *);
void TObjPlayer__sub_801AC444(void *, u8);
void construct_photon_magic_square_normal(void *, void *, s32, void *, s32);
void TPhotonRainbow__ct(void *, void *, void *, s32);
s32 get_global_state__14TOKeyMachine01Fv();
void play_cue_stream_file(void *);
u8 *__nw__7TObjectFUl(M2C_UNK, f32);
extern u8 lbl_80446DF8[];
extern u8 lbl_80446E04[];
extern u8 lbl_804C3778[];
extern M2C_UNK __vt__13TPhotonLeilla[];
extern s32 lbl_805D34F8;
extern Game_801AC808 *photon_blast_shared_resource;
extern const f32 lbl_805DC1C4;

void *TPhotonLeilla__ct(Leilla_801AC808 *self, Pkt_801AC808 *pkt) {
    Vec_801AC808 v;
    u8 *o;
    u8 *owner;
    photon_base_ct(self);
    *(void **)((u8 *)self + 0x18) = __vt__13TPhotonLeilla;
    F_801AC808(self, s32, 0) = lbl_805D34F8;
    F_801AC808(self, s32, 0x138) = 4;
    VecCopy__FP3VecPC3Vec(&self->pos, pkt);
    F_801AC808(self, u16, 0x17C) = pkt->owner;
    owner = find_entity_by_id(F_801AC808(self, u16, 0x17C));
    if (owner != NULL) {
        F_801AC808(self, s32, 0x60) = F_801AC808(owner, s32, 0x60);
    }
    F_801AC808(self, s32, 0x34) = photon_blast_shared_resource->res->f18;
    F_801AC808(self, s32, 0x24) = photon_blast_shared_resource->res->f1C;
    set_field_d8__10TObjPlayerFPvi(self, lbl_804C3778);
    set_field_dc__10TObjPlayerFPvi(self, photon_blast_shared_resource->f430);
    F_801AC808(self, s16, 0xB8) = 1;
    set_animation__10TObjPlayerFPvs(self, F_801AC808(self, s16, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(self, F_801AC808(self, s16, 0xB8));
    F_801AC808(self, s16, 0x190) = 1;
    F_801AC808(self, s32, 0x194) = pkt->first;
    F_801AC808(self, s32, 0x198) = pkt->more;
    F_801AC808(self, s32, 0x19C) = 0;
    F_801AC808(self, s32, 0x134) = 2;
    self->m12();
    F_801AC808(self, s32, 0x1AC) = 0;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
        o = NEW_801AC808(0xAC);
        if (o != NULL) {
            TPhotonRainbow__ct(o, self, &self->pos, 1);
        }
        break;
    default:
        o = NEW_801AC808(0xAC);
        if (o != NULL) {
            TPhotonRainbow__ct(o, self, &self->pos, 0);
        }
        break;
    }
    TObjPlayer__sub_801AC444(self, pkt->count);
    if (F_801AC808(self, s32, 0x198) == 1) {
        F_801AC808(self, u32, 0x154) |= 1;
    }
    F_801AC808(self, f32, 0x150) = pkt->f20;
    if (F_801AC808(self, s32, 0x194) == 0) {
        set_field_b8__14TObjEnePanarmsFPvs(self, 0);
        begin_photon_summon_camera(self, 2);
        F_801AC808(self, s32, 0x194) = 1;
        F_801AC808(self, s16, 0x190) = 0;
        F_801AC808(self, s32, 0x19C) = 1;
        owner = find_entity_by_id(F_801AC808(self, u16, 0x17C));
        if (owner != NULL) {
            VecCopy__FP3VecPC3Vec(&v, owner + 0x38);
        }
        v.y = v.y + lbl_805DC1C4;
        o = NEW_801AC808(0xD0);
        if (o != NULL) {
            construct_photon_magic_square_normal(o, self, 4, &v, 0x78);
        }
        spawn_photon_blast_attachment_effects(self, 4);
        play_cue_stream_file(lbl_80446DF8);
    } else {
        spawn_photon_blast_opening_effects(4, F_801AC808(self, u16, 0x17C));
        play_cue_stream_file(lbl_80446E04);
    }
    return self;
}

}
