#ifndef PSO_TITEMEFFFLAME_H
#define PSO_TITEMEFFFLAME_H

#include "pso/TObject.h"
#include "types.h"

class TItemEffFlame : public TObject {
public:
 void* m_1c;
public:
    virtual ~TItemEffFlame();
    virtual void run_task();
public:
    static void play_effect(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
};

#endif
