#ifndef PSO_MISC_TWINDOWTRADEREQUEST_H
#define PSO_MISC_TWINDOWTRADEREQUEST_H

#include "types.h"

struct TWindowTradeRequest
{
    u32 m_1c;
    u32 m_20;
    static void close_request_window();
    static void reset_trade();
    static void render();
    void run_task();
};

#endif
