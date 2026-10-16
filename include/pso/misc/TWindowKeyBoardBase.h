#ifndef PSO_MISC_TWINDOWKEYBOARDBASE_H
#define PSO_MISC_TWINDOWKEYBOARDBASE_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowKeyBoardBase : public TUnk_804CE018 {
    virtual ~TWindowKeyBoardBase();
    u8 _pad1C[0x46];
    u16 m_62;
    u8 _pad64[0x1];
    u8 m_65;
    u8 _pad66[0x2];
    u32 m_68;
    void* m_6c;
    u8 _pad70[0x14];
    void* m_84;
    u8 _pad88[0x14];
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    u32 m_a8;
    u32 m_ac;
    u32 m_b0;
    u32 m_b4;
    void render();
    void run_task();
    s32 *init_text_buffer_holder();};

typedef char TWindowKeyBoardBase_size[sizeof(TWindowKeyBoardBase) == 0xB8 ? 1 : -1];
#endif
