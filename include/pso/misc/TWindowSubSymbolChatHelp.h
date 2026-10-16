#ifndef PSO_MISC_TWINDOWSUBSYMBOLCHATHELP_H
#define PSO_MISC_TWINDOWSUBSYMBOLCHATHELP_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowSubSymbolChatHelp : public TUnk_804CE018 {
    virtual ~TWindowSubSymbolChatHelp();
    u8 _pad1C[0x44];
    u8 m_60;
    u8 _pad61[0x3];
    u32 m_64;
    u32 m_68;
    u32 m_6c;
    u32 m_70;
    void draw_help_entries(void *arg1);
    void handle_toggle_input();
    void handle_page_input();
    void render();
    void run_task();};

typedef char TWindowSubSymbolChatHelp_size[sizeof(TWindowSubSymbolChatHelp) == 0x74 ? 1 : -1];
#endif
