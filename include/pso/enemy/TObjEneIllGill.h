#ifndef PSO_ENEMY_TOBJENEILLGILL_H
#define PSO_ENEMY_TOBJENEILLGILL_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjEneIllGill : public TObjEnemy {
    virtual ~TObjEneIllGill();
    virtual void vfunc_58();
    void* m_374;
    u8 _pad378[0x10];
    u32 m_388;
    u8 _pad38C[0x4];
    u32 m_390;
    u32 m_394;
    u32 m_398;
    u32 m_39c;
    u32 m_3a0;
    u32 m_3a4;
    u32 m_3a8;
    u8 _pad3AC[0x4];
    void* m_3b0;
    u8 _pad3B4[0x8];
    void* m_3bc;
    u8 _pad3C0[0x8];
    void* m_3c8;
    u8 _pad3CC[0x8];
    void* m_3d4;
    u8 _pad3D8[0x38];
    u32 m_410;
    u32 m_414;
    u32 m_418;
    u32 m_41c;
    void update_ai();
    static void advance_camera_vec_stage();
    void update_death_fall();
    void free_resources();
    static void update_chase_target(void *arg0_);
    void run_attack_phase();
    void move_toward_dest_with_detour();
    void render();
    void run_task();
    void *create();
    static void free_effect();
    static void load_shared_resources();};

typedef char TObjEneIllGill_size[sizeof(TObjEneIllGill) == 0x420 ? 1 : -1];
#endif
