#ifndef PSO_MISC_TWINDOWSUBQUESTBOARD_H
#define PSO_MISC_TWINDOWSUBQUESTBOARD_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowSubQuestBoard : public TObject {
    virtual ~TWindowSubQuestBoard();
    u8 m_1c;
    u8 _pad1D[0x3];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    void *dt(s16 arg1);
    void set_board_flags(s32 arg1);
    void set_card_window_flags(s32 arg1);
    void clear_card_window_flags(s32 arg1);
    void set_card_flags_scaled(s32 arg1);
    int set_card_flags_direct(int a1);
    virtual void render();
    virtual void run_task();
    u8 get_page_index();};

typedef char TWindowSubQuestBoard_size[sizeof(TWindowSubQuestBoard) == 0x30 ? 1 : -1];
#endif
