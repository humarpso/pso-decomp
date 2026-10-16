#ifndef PSO_MISC_TORAINBOWCAVE01_H
#define PSO_MISC_TORAINBOWCAVE01_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TORainbowCave01 : public TUnk_804AFBF8 {
    virtual ~TORainbowCave01();
    u8 unk_C8[0xC];
    void* m_d4;
    s32 is_player_in_range(f32 farg0);
    void init_light_params(int _w1, f32 _w2, f32 _w3);
    void render();
    void run_task();
    static void *create(void *arg0);
    static void free_static_data();
    static void load_resource_instance();
    u8 unk_D8[0x8];
};

typedef char TORainbowCave01_size[sizeof(TORainbowCave01) == 0xE0 ? 1 : -1];
#endif
