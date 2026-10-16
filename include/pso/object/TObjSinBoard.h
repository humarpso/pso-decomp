#ifndef PSO_OBJECT_TOBJSINBOARD_H
#define PSO_OBJECT_TOBJSINBOARD_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjSinBoard : public TUnk_804B9870 {
    virtual ~TObjSinBoard();
    void render();
    static void run_task();};

typedef char TObjSinBoard_size[sizeof(TObjSinBoard) == 0x90 ? 1 : -1];
#endif
