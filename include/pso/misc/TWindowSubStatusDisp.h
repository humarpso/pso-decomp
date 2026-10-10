#ifndef PSO_MISC_TWINDOWSUBSTATUSDISP_H
#define PSO_MISC_TWINDOWSUBSTATUSDISP_H

#include "types.h"
#include <stddef.h>

struct TWindowSubStatusDisp
{
    u8 _object_header[0x1C];
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x34];
    u32 m_5c;
    s16 m_60;
    u16 m_62;
    u32 m_64;
    u32 m_68;
    f32 scale_x;
    f32 scale_y;

    void vt0();
    void vt1();
    void vt2();
    void vt3();
    void vt4();
    void vt5();
    void vt7();
    void vt11();
    void vt12();
    void vt13();
    void vt14();
    void vt15();
    void vt16();
    void vt18();

    void dispatch_page_update();
    void dispatch_page_init();
};

typedef char TWindowSubStatusDisp_offset_m_60[(offsetof(TWindowSubStatusDisp, m_60) == 0x60) ? 1 : -1];
typedef char TWindowSubStatusDisp_offset_m_62[(offsetof(TWindowSubStatusDisp, m_62) == 0x62) ? 1 : -1];
typedef char TWindowSubStatusDisp_offset_m_68[(offsetof(TWindowSubStatusDisp, m_68) == 0x68) ? 1 : -1];
typedef char TWindowSubStatusDisp_offset_scale_x[(offsetof(TWindowSubStatusDisp, scale_x) == 0x6C) ? 1 : -1];
typedef char TWindowSubStatusDisp_offset_scale_y[(offsetof(TWindowSubStatusDisp, scale_y) == 0x70) ? 1 : -1];

#endif
