#ifndef PSO_MISC_TOROCKCAVE_H
#define PSO_MISC_TOROCKCAVE_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TORockCave : public TUnk_804AF8A0 {
    virtual ~TORockCave();
    void draw_model();
    static void free_instances();
    static void load_resources();
    u8 unk_AC[0x8];
};

typedef char TORockCave_size[sizeof(TORockCave) == 0xB4 ? 1 : -1];
#endif
