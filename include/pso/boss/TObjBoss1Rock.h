#ifndef PSO_BOSS_TOBJBOSS1ROCK_H
#define PSO_BOSS_TOBJBOSS1ROCK_H

#include "types.h"
#include "pso/TObject.h"

struct TObjBoss1Rock : public TObject {
    virtual ~TObjBoss1Rock();
    void* m_1c;
    u8 _pad20[0x8];
    void* m_28;
    u8 unk_2C[0x4];
    f32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u8 _pad40[0x10];
    u32 m_50;
    virtual void render();
    virtual void run_task();
    void *construct(void *arg1, void *arg2, void *arg3, void *arg4);
    void *construct_random(void *arg1, void *arg2, void *arg3);};

typedef char TObjBoss1Rock_size[sizeof(TObjBoss1Rock) == 0x54 ? 1 : -1];
#endif
