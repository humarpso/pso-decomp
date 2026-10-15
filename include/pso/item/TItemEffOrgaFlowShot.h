#ifndef PSO_ITEM_TITEMEFFORGAFLOWSHOT_H
#define PSO_ITEM_TITEMEFFORGAFLOWSHOT_H

#include "types.h"

struct TItemEffOrgaFlowShot
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x14];
    u32 m_48;
    u8 _pad4C[0x74];
    u32 m_c0;
    void* m_c4;
    u8 _padC8[0x18];
    u32 m_e0;
    u8 _padE4[0x1C];
    u32 m_100;
    u8 _pad104[0x1C];
    u32 m_120;
    u8 _pad124[0x1C];
    u32 m_140;
    u8 _pad144[0x1C];
    u32 m_160;
    void* m_164;
    u8 _pad168[0x8];
    void* m_170;
    u8 _pad174[0x14];
    u32 m_188;
    u8 _pad18C[0x4];
    void* m_190;
    void* m_194;
    u8 _pad198[0x4];
    u32 m_19c;
    static void approach_value(f32 *arg0, f32 farg0, f32 farg1);
    void bswap_6xAD_subordinate_action();
    void update_segments();
    void update_position_from_velocity();
    void render();
    static void create(void *arg0, void *arg1);
};

#endif
