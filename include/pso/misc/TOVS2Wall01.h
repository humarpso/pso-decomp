#ifndef PSO_MISC_TOVS2WALL01_H
#define PSO_MISC_TOVS2WALL01_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TOVS2Wall01 : public TUnk_804806E8 {
    virtual ~TOVS2Wall01();
    u8 unk_334[0x8];
    u32 m_33c;
    void* m_340;
    u8 _pad344[0x10];
    u32 m_354;
    u8 _pad358[0x4];
    u32 m_35c;
    void spawn_debris(s32 arg1);
    void release();
    int interact_player_neg1();
    void run_task();
    void render();
    void *create();
    static void release_model();
    static void load_resources();
    void *destroy(s16 arg1);
    void byteswap_hit_packet();
    void update_and_send();
    void*init();};

typedef char TOVS2Wall01_size[sizeof(TOVS2Wall01) == 0x360 ? 1 : -1];
#endif
