#ifndef PSO_MISC_TWINDOWMENUMAINMENU_H
#define PSO_MISC_TWINDOWMENUMAINMENU_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowMenuMainMenu : public TUnk_804CE018 {
    virtual ~TWindowMenuMainMenu();
    void handle_navigation_input();
    void handle_confirm();
    void handle_cancel();
    int get_menu_flag();
    int is_flag_set();
    virtual void render();
    virtual void run_task();
    u8 _pad1C[0x4];
    u16 m_20;
    u8 unk_22[0xA];
    s32 m_2c;
    u8 unk_30[0x24];
    f32 m_54;
    u8 unk_58[0x8];
    u8 m_60;
    u8 m_61;
    u16 m_62;
    void* m_64;
    u8 unk_68[0xDC];
};

typedef char TWindowMenuMainMenu_size[sizeof(TWindowMenuMainMenu) == 0x144 ? 1 : -1];
#endif
