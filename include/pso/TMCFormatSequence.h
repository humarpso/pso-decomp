#ifndef PSO_TMCFORMATSEQUENCE_H
#define PSO_TMCFORMATSEQUENCE_H

#include "pso/TObject.h"
#include "types.h"

class TMCFormatSequence : public TObject {
public:
    u8 _pad1C[0x1C];
 void* m_38;
public:
    virtual ~TMCFormatSequence();
    virtual void run_task();
public:
    void close_window();
    void show_message(s32 arg1, s32 arg2);
    void check_memcard_load_result();
    void process_format_result();
    void open_windows();
};

#endif
