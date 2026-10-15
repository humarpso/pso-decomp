#ifndef PSO_MISC_TWINDOWSUBMAGPHOTON_H
#define PSO_MISC_TWINDOWSUBMAGPHOTON_H

#include "types.h"

struct TWindowSubMagPhoton
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x8];
    void* m_30;
    u8 _pad34[0x2C];
    u8 m_60;
    u8 m_61;
    s16 m_62;
    u8 _pad64[0xC];
    u32 m_70;
    void handle_cancel();
    void play_open_sound();
    void update_selection_input();
    s32 draw_cursor(int arg1);
    void run_task();
    void update_photon_selection();
    void get_cursor_origin(void *xy);
};

#endif
