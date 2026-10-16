#ifndef PSO_UNK_TUNK_804F26E0_H
#define PSO_UNK_TUNK_804F26E0_H
#include "types.h"
#include "pso/unk/TUnk_804A4948.h"

class TUnk_804F26E0 : public TUnk_804A4948 {
public:
    virtual ~TUnk_804F26E0();
    u8 unk_1C[0xD8];
};
typedef char TUnk_804F26E0_size[sizeof(TUnk_804F26E0) == 0xF4 ? 1 : -1];

#endif
