#ifndef PSO_MISC_TOWRECKANCIENT_H
#define PSO_MISC_TOWRECKANCIENT_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TOWreckAncient : public TUnk_804AF8A0 {
    virtual ~TOWreckAncient();
    void draw_model();
    static void free_statics();
    static void load_resources();
    u8 unk_AC[0x8];
};

typedef char TOWreckAncient_size[sizeof(TOWreckAncient) == 0xB4 ? 1 : -1];
#endif
