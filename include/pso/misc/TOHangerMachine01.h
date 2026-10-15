#ifndef PSO_MISC_TOHANGERMACHINE01_H
#define PSO_MISC_TOHANGERMACHINE01_H

#include "types.h"

struct TOHangerMachine01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x64];
    u32 m_c8;
    void run_task();
    void render();
    static void *create(void *arg0);
    static void free_static_model();
    static void load_shared_resource();
    static s32 is_valid_slot(int arg0, u16 arg1);
};

#endif
