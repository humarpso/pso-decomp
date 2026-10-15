#ifndef PSO_BOSS_TBOSS5GRYPHONSNARL_H
#define PSO_BOSS_TBOSS5GRYPHONSNARL_H
#include "pso/TObject.h"
#include <stddef.h>
class TBoss5GryphonSnarl : public TObject {
public:
    virtual ~TBoss5GryphonSnarl();
    virtual void run_task();
    virtual void render();
    u8 unknown_1c[4];
    TObject *children_20[32];
    TObject *children_a0[32];
public:
    static void render();
};
typedef char TBoss5GryphonSnarlChildren20[offsetof(TBoss5GryphonSnarl, children_20) == 0x20 ? 1 : -1];
typedef char TBoss5GryphonSnarlChildrenA0[offsetof(TBoss5GryphonSnarl, children_a0) == 0xA0 ? 1 : -1];
#endif
