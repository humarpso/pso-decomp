#include "types.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/misc/TNowLoading.h"

struct O_80087638 { u8 pad[0x2e]; u16 x2e; };

struct Ent_800874F4 { u8 data[0x98]; };

extern "C" {
extern s32 particle_pool_limit;
extern s32 particle_global_entry_table;
extern s32 particle_area_entry_table;
void *__nw__7TObjectFUl(int);
void *create_particle_emitter(void *pos, s32 id);
}

extern "C" {

extern s32 particle_global_entry_table;
extern s32 particle_area_entry_table;
extern const f32 TParticleCtrl__data_805D94E0;
extern const f32 TParticleCtrl__data_805D94E4;

void *create_particle_emitter(void *pos, s32 id) {
    void *p;
    if (particle_pool_limit > id) {
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = ((TParticleCtrl *)p)->initialize((const void *)pos, (s32)(&(*(Ent_800874F4 * *)&particle_global_entry_table)[id]), (s32)0, (s32)0, (s32)0, (s32)0);
        }
        return p;
    }
    if (particle_pool_limit + 0x40 > id) {
        s32 idx = id - 0x200;
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = ((TParticleCtrl *)p)->initialize((const void *)pos, (s32)(&(*(Ent_800874F4 * *)&particle_area_entry_table)[idx]), (s32)0, (s32)0, (s32)0, (s32)0);
        }
        return p;
    }
    return 0;
}

void TBoss4Type2::set_param_ptr(s32 arg1) {
    *(f32 *)((s8 *)this + 0x1C) = (f32) TParticleCtrl__data_805D94E0;
    *(s32 *)((s8 *)this + 0x20) = 0;
    *(f32 *)((s8 *)this + 0x24) = (f32) TParticleCtrl__data_805D94E4;
    if (arg1 >= 0x200) {
        *(s32 *)((s8 *)this + 0x28) = (s32) (particle_area_entry_table + ((arg1 - 0x200) * 0x98));
        return;
    }
    *(s32 *)((s8 *)this + 0x28) = (s32) (particle_global_entry_table + (arg1 * 0x98));
}

void TBoss4Type2::copy_vec3(void* q) { *(u32*)((char*)this + 0x6c) = *(u32*)((char*)q + 0x0); *(u32*)((char*)this + 0x70) = *(u32*)((char*)q + 0x4); *(u32*)((char*)this + 0x74) = *(u32*)((char*)q + 0x8); }
void TBoss4Type2::set_flags(u32 v) { *(u16*)((char*)this + 0x2c) |= v; }

void TParticleCtrl::set_owner_id(u16 x) {
    O_80087638 *self = (O_80087638 *)this;
    if (x != 0xFFFF) {
        self->x2e = x;
    }
}

void TParticleCtrl::set_tint_color(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    *(u16 *)((s8 *)arg0 + 0x2C) = (u16) (*(u16 *)((s8 *)arg0 + 0x2C) | 0x100);
    *(s32 *)((s8 *)arg0 + 0x48) = arg1;
}

}
