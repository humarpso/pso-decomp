#ifndef PSO_OBJECT_TOBJGRASS_H
#define PSO_OBJECT_TOBJGRASS_H

#include "types.h"

struct TObjGrass
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x40];
    u32 m_a4;
    u8 _padA8[0x10];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1C8];
    u32 m_2a8;
    u8 _pad2AC[0x50];
    void* m_2fc;
    u8 _pad300[0x18];
    u32 m_318;
    u8 _pad31C[0xA];
    s16 m_326;
    s16 m_328;
    u8 _pad32A[0x2];
    s16 m_32c;
    u8 _pad32E[0x6];
    u32 m_334;
    u16 m_338;
    s16 m_33a;
    u16 m_33c;
    u16 m_33e;
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u8 _pad36C[0x8];
    void* m_374;
    u8 _pad378[0x8];
    void* m_380;
    u8 _pad384[0x8];
    void* m_38c;
    u8 _pad390[0xC];
    s16 m_39c;
    s16 m_39e;
    u32 m_3a0;
    u8 _pad3A4[0x4];
    u32 m_3a8;
    u32 m_3ac;
    void* m_3b0;
    u8 _pad3B4[0x10];
    u32 m_3c4;
    u8 _pad3C8[0x4];
    u32 m_3cc;
    u32 m_3d0;
    static void update_dying(void *arg0_);
    static void update_camera_vec_by_stage();
    s32 update();
    s32 update_web_attack();
    static void update_chase_target(void *arg0_);
    static void update_ai(void *arg0);
    void render();
    void run_task();
    static void *create(void *arg0);
    static void destroy_all();
    static void load_resources();
    void init_from_table_entry(s32 i);
};

#endif
