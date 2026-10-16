#ifndef PSO_MISC_TOVS2WRECK02_H
#define PSO_MISC_TOVS2WRECK02_H

#include "types.h"
#include "pso/misc/TOVS2.h"

struct TOVS2Wreck02 : public TOVS2 {
    virtual ~TOVS2Wreck02();
};

typedef char TOVS2Wreck02_size[sizeof(TOVS2Wreck02) == 0xD0 ? 1 : -1];
#endif
