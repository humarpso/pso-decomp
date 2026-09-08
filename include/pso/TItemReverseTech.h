#ifndef PSO_TITEMREVERSETECH_H
#define PSO_TITEMREVERSETECH_H

#include "pso/TObject.h"
#include "types.h"

class TItemReverseTech : public TObject {
public:
    virtual ~TItemReverseTech();
    virtual void run_task();
    u32 unknown_1c;
    TObject *part_one;
    TObject *part_two;
};

#include <stddef.h>
typedef char ReverseTechPartOneOffset[offsetof(TItemReverseTech, part_one) == 0x20 ? 1 : -1];
typedef char ReverseTechPartTwoOffset[offsetof(TItemReverseTech, part_two) == 0x24 ? 1 : -1];

#endif
