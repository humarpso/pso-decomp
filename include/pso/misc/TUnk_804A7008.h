#ifndef PSO_MISC_TUNK_804A7008_H
#define PSO_MISC_TUNK_804A7008_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804A7008 : public TObject {
public:
    virtual ~TUnk_804A7008();
    u8 unk_1C[0x10];
};
typedef char TUnk_804A7008_size[sizeof(TUnk_804A7008) == 0x2C ? 1 : -1];

#endif
