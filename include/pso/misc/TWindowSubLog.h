#ifndef PSO_MISC_TWINDOWSUBLOG_H
#define PSO_MISC_TWINDOWSUBLOG_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowSubLog : public TObject {
    virtual ~TWindowSubLog();
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    void* m_2c;
    virtual void render();
    virtual void run_task();
    void clear_flag4c_bit8();
    int cleanup();
    void set_flag4c_bit8();
    u8 unk_30[0x50];
};

typedef char TWindowSubLog_size[sizeof(TWindowSubLog) == 0x80 ? 1 : -1];
#endif
