#ifndef PSO_SYSTEM_PADRUMBLE_H
#define PSO_SYSTEM_PADRUMBLE_H

#include "types.h"
#include "pso/system/vector.h"

#define PAD_RUMBLE_EFFECT_COUNT 16
#define PAD_RUMBLE_CHANNEL_COUNT 4
#define PAD_RUMBLE_NO_CLIENT 0xFFFF

enum PadRumbleEffectFlags {
    PAD_RUMBLE_ACTIVE = 0x01,
    PAD_RUMBLE_POSITIONAL = 0x02,
    PAD_RUMBLE_TIMED = 0x04,
    PAD_RUMBLE_FADE = 0x08,
    PAD_RUMBLE_ALL_CLIENTS = 0x10,
    PAD_RUMBLE_ONE_SHOT = 0x20,
    PAD_RUMBLE_FIRST_FRAME = 0x40,
    PAD_RUMBLE_HAS_ID = 0x80
};

// Summed rumble strength of every effect felt by one client this frame.
struct PadRumbleLevel {
    s16 strength;

    void accumulate(s32 client_id, s32 channel);
    f32 on_rate();
    f32 off_rate();
    void clear();
};

// One controller motor: alternates on and off phases whose lengths follow the
// summed strength.
struct PadRumbleChannel {
    s16 phase;
    f32 off_time;
    f32 on_time;

    BOOL update(PadRumbleLevel *level);
};

struct PadRumbleEffect {
    u8 flags;
    u8 pad_1;
    s16 client_id;
    Vec pos;
    s16 strength;
    s16 duration;
    u32 id;

    BOOL is_active();
    void update();
    void clear();
};

void stop_pad_rumble();
void cancel_pad_rumble(u32 id);
void start_pad_rumble(s16 strength, u32 id);
void start_pad_rumble_at(const Vec *pos, s16 strength, u32 id);
void start_pad_rumble_all(s16 strength, s16 duration);
void start_pad_rumble_client(s16 strength, s16 duration, s16 client_id);
s32 get_pad_rumble_client(s32 channel);
PadRumbleEffect *find_active_pad_rumble_effect_by_id(u32 id);
PadRumbleEffect *find_free_pad_rumble_effect_slot();
void reset_pad_rumble_effects_and_channels(s16 phase);
PadRumbleEffect *get_pad_rumble_effect_slots();
void update_pad_rumble();
void init_pad_rumble();

#endif
