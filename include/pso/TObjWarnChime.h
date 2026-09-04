#ifndef PSO_TOBJWARNCHIME_H
#define PSO_TOBJWARNCHIME_H

#include "pso/TObject.h"
#include "types.h"
#include <stddef.h>

class TObjWarnChime : public TObject {
public:
    virtual ~TObjWarnChime();
    virtual void run_task();
    s32 m_state;
};

typedef char TObjWarnChimeStateOffset[(offsetof(TObjWarnChime, m_state) == 0x1C) ? 1 : -1];

#endif
