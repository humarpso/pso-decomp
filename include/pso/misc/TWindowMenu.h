#ifndef PSO_MISC_TWINDOWMENU_H
#define PSO_MISC_TWINDOWMENU_H

#include "types.h"
#include "pso/misc/TUnk_804CDFE8.h"

struct TWindowMenu : public TUnk_804CDFE8 {
    virtual ~TWindowMenu();
    void reset_selection();
    int is_visible();
    virtual void render();
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u8 _pad30[0x2C];
    u32 m_5c;
    u8 _pad60[0x8];
    void* m_68;
    u8 _pad6C[0x4];
    u16 m_70;
    u16 m_72;
    u16 m_74;
    u16 m_76;
    u16 m_78;
    u8 _pad7A[0x6];
    u32 m_80;
    u32 m_84;
    u32 m_88;
    void set_active_flag();
    void confirm_selection();
    void select_next_item();
    void move_cursor_prev();
    virtual void run_task();
    void copy_position(void* q);
    s32 is_locked(s32 arg1);};

typedef char TWindowMenu_size[sizeof(TWindowMenu) == 0x8C ? 1 : -1];
#endif
