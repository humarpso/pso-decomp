#include "types.h"

struct O_80087638 { u8 pad[0x2e]; u16 x2e; };

struct Ent_800874F4 { u8 data[0x98]; };

extern "C" {
void set_tint_color__13TParticleCtrlFPvi(u8 *arg0, s32 arg1);
void set_owner_id__13TParticleCtrlFPvUs(O_80087638 *self, u16 x);
extern s32 particle_pool_limit;
extern s32 particle_global_entry_table;
extern s32 particle_area_entry_table;
void *__nw__7TObjectFUl(int);
void *initialize__13TParticleCtrlFPvPviiiii(void *self, void *owner, void *entry, s32 a, s32 b, s32 c, s32 d);
void *create_particle_emitter(void *pos, s32 id);
}

extern "C" {

void copy_vec3__11TBoss4Type2FPvPv(void* p, void* q);
void set_flags__11TBoss4Type2FPvUi(void* p, u32 v);
void set_param_ptr__11TBoss4Type2FPvi(void *arg0, s32 arg1);
void copy_pos__11TNowLoadingFPvPv(void* p, void* q);

extern s32 particle_global_entry_table;
extern s32 particle_area_entry_table;
extern const f32 TParticleCtrl__data_805D94E0;
extern const f32 TParticleCtrl__data_805D94E4;

void *create_particle_emitter(void *pos, s32 id) {
    void *p;
    if (particle_pool_limit > id) {
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize__13TParticleCtrlFPvPviiiii(p, pos, &(*(Ent_800874F4 * *)&particle_global_entry_table)[id], 0, 0, 0, 0);
        }
        return p;
    }
    if (particle_pool_limit + 0x40 > id) {
        s32 idx = id - 0x200;
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize__13TParticleCtrlFPvPviiiii(p, pos, &(*(Ent_800874F4 * *)&particle_area_entry_table)[idx], 0, 0, 0, 0);
        }
        return p;
    }
    return 0;
}

void set_param_ptr__11TBoss4Type2FPvi(void *arg0, s32 arg1) {
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) TParticleCtrl__data_805D94E0;
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) TParticleCtrl__data_805D94E4;
    if (arg1 >= 0x200) {
        *(s32 *)((s8 *)arg0 + 0x28) = (s32) (particle_area_entry_table + ((arg1 - 0x200) * 0x98));
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x28) = (s32) (particle_global_entry_table + (arg1 * 0x98));
}

void copy_vec3__11TBoss4Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x6c) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x70) = *(u32*)((char*)q + 0x4); *(u32*)((char*)p + 0x74) = *(u32*)((char*)q + 0x8); }
void set_flags__11TBoss4Type2FPvUi(void* p, u32 v) { *(u16*)((char*)p + 0x2c) |= v; }

void set_owner_id__13TParticleCtrlFPvUs(O_80087638 *self, u16 x) {
    if (x != 0xFFFF) {
        self->x2e = x;
    }
}

void set_tint_color__13TParticleCtrlFPvi(u8 *arg0, s32 arg1) {
    *(u16 *)((s8 *)arg0 + 0x2C) = (u16) (*(u16 *)((s8 *)arg0 + 0x2C) | 0x100);
    *(s32 *)((s8 *)arg0 + 0x48) = arg1;
}

}
