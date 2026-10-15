#ifndef PSO_TLOGO_H
#define PSO_TLOGO_H
#include "pso/TObject.h"
#include "types.h"

class TLogo : public TObject {
public:
    virtual ~TLogo();
public:
    static void free_held_object();
    static void request_exit();
    static s32 check_progressive_ready();
};

#endif
