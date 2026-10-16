#ifndef PSO_MISC_TWINDOWSUBSHORTCUT_H
#define PSO_MISC_TWINDOWSUBSHORTCUT_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowSubShortCut : public TObject {
    virtual ~TWindowSubShortCut();
    u8 m_1c;
    u8 _pad1D[0x3];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    void* m_40;
    int is_shortcut_active();
    s32 open_confirm_message();
    s32 open_confirm_prompt();
    s32 open_menu();
    static void render();
    void run_task();
    void set_flag1e_bit80();
    void close_and_clear_flag();
    void free_icon();
    u8 unk_44[0x50];
};

typedef char TWindowSubShortCut_size[sizeof(TWindowSubShortCut) == 0x94 ? 1 : -1];
#endif
