#ifndef PSO_OBJECT_TOBJCITYMAPWARP_H
#define PSO_OBJECT_TOBJCITYMAPWARP_H

#include "types.h"

struct TObjCityMapWarp
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x28];
    u32 m_8c;
    void render();
    void run_task();
    int is_field88_zero();
    void clamp_destination_index();
    static void *create(void *arg0);
};

#endif
