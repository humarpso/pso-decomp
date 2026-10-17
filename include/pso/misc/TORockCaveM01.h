#ifndef PSO_MISC_TOROCKCAVEM01_H
#define PSO_MISC_TOROCKCAVEM01_H

#include "types.h"
#include "pso/misc/TORockCave.h"

struct TORockCaveM01 : public TORockCave {
    virtual ~TORockCaveM01();
};

typedef char TORockCaveM01_size[sizeof(TORockCaveM01) == 0xB4 ? 1 : -1];
extern "C" {
void *TORockCaveM01__create(void *arg0);
void *__dt__13TORockCaveM01Fv(void *arg0, s16 arg1);
}

#endif
