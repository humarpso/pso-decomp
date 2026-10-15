#ifndef PSO_THUNTERGUILDWARNING_H
#define PSO_THUNTERGUILDWARNING_H

#include "pso/TObject.h"
#include "types.h"

class THunterGuildWarning : public TObject {
public:
    virtual ~THunterGuildWarning();
    virtual void run_task();
public:
    static void queue_destruction();
    static void create_instance(s32 arg0);
    static u8 is_active();
    void close_windows();
};

#endif
