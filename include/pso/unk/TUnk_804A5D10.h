#ifndef PSO_UNK_TUNK_804A5D10_H
#define PSO_UNK_TUNK_804A5D10_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804A5D10 : public TObject {
public:
    virtual ~TUnk_804A5D10();
    u8 unk_1C[0x28];
};
typedef char TUnk_804A5D10_size[sizeof(TUnk_804A5D10) == 0x44 ? 1 : -1];

#endif
