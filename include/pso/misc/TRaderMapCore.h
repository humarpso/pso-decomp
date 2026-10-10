#ifndef PSO_MISC_TRADERMAPCORE_H
#define PSO_MISC_TRADERMAPCORE_H

#include "types.h"
#include <stddef.h>

struct RadarViewportParameters
{
    u8 unknown00[0x8];
    f32 center_x;
    f32 center_y;
    u8 unknown10[0x8];
    f32 value18;
    u8 unknown1C[0xC];
    f32 screen_width;
    f32 screen_height;
};

struct TRaderMapCore
{
    u8 unknown00[0x90];
    s32 m_90;
    u8 player_marker_records[0xA0];
    s32 m_134;
    u8 unknown138[0x8];
    f32 m_140;
    f32 m_144;
    u8 unknown148[0x8];
    f32 m_150;
    u8 unknown154[0xC];
    f32 m_160;
    f32 m_164;
    s32 m_168;
    s32 m_16c;
    f32 m_170;
    s32 m_174;
    void* m_178;
    void* m_17c;
    void* m_180;
    void* m_184;
    f32 m_188;
    f32 m_18c;
    f32 m_190;
    u32 m_194;
    s32 m_198;
    f32 m_19c;
    f32 m_1a0;

    void configure_viewport(const RadarViewportParameters* view);
};

typedef char RadarViewportSize[(sizeof(RadarViewportParameters) == 0x30) ? 1 : -1];
typedef char RadarViewportCenterX[(offsetof(RadarViewportParameters, center_x) == 0x8) ? 1 : -1];
typedef char RadarViewportCenterY[(offsetof(RadarViewportParameters, center_y) == 0xC) ? 1 : -1];
typedef char RadarViewportValue18[(offsetof(RadarViewportParameters, value18) == 0x18) ? 1 : -1];
typedef char RadarViewportWidth[(offsetof(RadarViewportParameters, screen_width) == 0x28) ? 1 : -1];
typedef char RadarViewportHeight[(offsetof(RadarViewportParameters, screen_height) == 0x2C) ? 1 : -1];
typedef char RaderMapCoreSize[(sizeof(TRaderMapCore) == 0x1A4) ? 1 : -1];
typedef char RaderMapCoreDelay[(offsetof(TRaderMapCore, m_90) == 0x90) ? 1 : -1];
typedef char RaderMapCoreMarkers[(offsetof(TRaderMapCore, player_marker_records) == 0x94) ? 1 : -1];
typedef char RaderMapCoreSelectedPlayer[(offsetof(TRaderMapCore, m_134) == 0x134) ? 1 : -1];
typedef char RaderMapCoreViewportWidth[(offsetof(TRaderMapCore, m_160) == 0x160) ? 1 : -1];
typedef char RaderMapCoreTarget[(offsetof(TRaderMapCore, m_184) == 0x184) ? 1 : -1];
typedef char RaderMapCoreTail[(offsetof(TRaderMapCore, m_1a0) == 0x1A0) ? 1 : -1];

#endif
