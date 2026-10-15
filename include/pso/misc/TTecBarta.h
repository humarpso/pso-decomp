#ifndef PSO_MISC_TTECBARTA_H
#define PSO_MISC_TTECBARTA_H

#include "types.h"
#include "pso/technique/TechniqueContact.h"

struct TechniqueDamagePayload { s32 kind; f32 power; };
struct TechniqueHitRecipient;
struct TechniqueHitRecipientVtable {
    u8 beforeReceive[0x5c];
    void (*receive)(TechniqueHitRecipient*, TechniqueHitRecipient*,
        const TechniqueDamagePayload*, TechniqueContactBody*, s32, s32);
};
struct TechniqueHitRecipient {
    u8 task[0x18];
    TechniqueHitRecipientVtable* vtable;
};
struct TechniqueParticleEmitter;
struct TechniqueEmitterSourceRow { u32 entry; u32 flags; f32 scale; };
struct TechniqueEmitterSourceTable { TechniqueEmitterSourceRow* rows; u32 count; };

struct TTecBarta {
    u8 task[0x18];
    TechniqueContactVtable* vtable;
    TechniqueHitRecipient* source;
    f32 position[3];
    u8 beforeDirection[0x1c];
    f32 direction[3];
    s32 angles[3];
    u32 unknown60;
    f32 speed;
    u8 beforeRange[8];
    f32 range;
    f32 traveled;
    f32 previous[3];
    u8 beforeLevel[0x40];
    s16 level;
    s16 band;
    u16 sourceId;
    u16 unknownCa;
    f32 power;
    u8 parameters[0x28];
    TechniqueContactBody* contact;
    u8 beforeProxy[0x2c];
    TechniqueContactActor* proxy;
    f32 halfWidth;
    TechniqueParticleEmitter** emitters;
    u16 hitIds[32];
    s32 hitCursor;
    void update_technique_by_state();
    void create_particle_emitters();
    void init_parameters();
    void create(void *arg1, void *arg2, void *arg3);
    void create_ex(void *arg1, void *arg2, void *arg3);
    void run_task();
    static void render();
};
typedef char TTecBarta_size[sizeof(TTecBarta)==0x178?1:-1];

#endif
