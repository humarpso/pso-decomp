#ifndef PSO_MISC_TOVS2WRECK06_H
#define PSO_MISC_TOVS2WRECK06_H

#include "types.h"
#include "pso/misc/TOVS2.h"

struct TOVS2Wreck06 : public TOVS2 {
    virtual ~TOVS2Wreck06();
};

typedef char TOVS2Wreck06_size[sizeof(TOVS2Wreck06) == 0xD0 ? 1 : -1];
#endif
