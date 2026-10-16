#ifndef PSO_MISC_TWINDOWMESSAGE_H
#define PSO_MISC_TWINDOWMESSAGE_H

#include "types.h"
#include "pso/misc/TUnk_804CDFE8.h"

struct TWindowMessage : public TUnk_804CDFE8 {
    virtual ~TWindowMessage();
    void update_scroll();
    void retire_scrolled_lines();
    void advance_reveal_cursor();
    void scroll_up_line(u8 *);
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u8 unk_30[0x10];
    u32 m_40;
    u8 unk_44[0x8];
    void* m_4c;
    u8 unk_50[0xC];
    u32 m_5c;
    u8 _pad60[0x10];
    u32 m_70;
    u32 m_74;
    u32 m_78;
    u32 m_7c;
    u8 _pad80[0x8];
    u32 m_88;
    u32 m_8c;
    void draw();};

typedef char TWindowMessage_size[sizeof(TWindowMessage) == 0x90 ? 1 : -1];
#endif
