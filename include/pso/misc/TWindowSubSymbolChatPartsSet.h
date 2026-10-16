#ifndef PSO_MISC_TWINDOWSUBSYMBOLCHATPARTSSET_H
#define PSO_MISC_TWINDOWSUBSYMBOLCHATPARTSSET_H

#include "types.h"
#include "pso/misc/TWindowChatSymbol.h"

struct TWindowSubSymbolChatPartsSet : public TWindowChatSymbol {
    virtual ~TWindowSubSymbolChatPartsSet();
    u8 m_68;
    u8 _pad69[0x1];
    u16 m_6a;
    u16 m_6c;
    u16 m_6e;
    u32 m_70;
    u8 _pad74[0x8];
    u32 m_7c;
    u32 m_80;
    u8 _pad84[0x4];
    u32 m_88;
    void copy_vec2(void* q);
    s32 draw_selected_part_cursor(int arg1);
    void handle_cancel();
    void handle_decide();
    void toggle_selected_part();
    void handle_cursor_input();
    void run_task();
    u8 unk_8C[0xC];
};

typedef char TWindowSubSymbolChatPartsSet_size[sizeof(TWindowSubSymbolChatPartsSet) == 0x98 ? 1 : -1];
#endif
