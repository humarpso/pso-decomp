#ifndef PSO_TOBJSOLOPLAYWIN_H
#define PSO_TOBJSOLOPLAYWIN_H

#include "pso/TObject.h"
#include "types.h"
#include <stddef.h>

class TObjSoloPlayWin : public TObject {
public:
    virtual ~TObjSoloPlayWin();
    virtual void run_task();
    s32 m_state;
};

typedef char TObjSoloPlayWinStateOffset[(offsetof(TObjSoloPlayWin, m_state) == 0x1C) ? 1 : -1];

#endif
