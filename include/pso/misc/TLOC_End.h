#ifndef PSO_MISC_TLOC_END_H
#define PSO_MISC_TLOC_END_H
#include "types.h"
#include "pso/misc/TUnk_804A7260.h"

class TLOC_End : public TUnk_804A7260 {
public:
    virtual ~TLOC_End();
    u8 unk_1C[0x8];
};
typedef char TLOC_End_size[sizeof(TLOC_End) == 0x24 ? 1 : -1];

#endif
