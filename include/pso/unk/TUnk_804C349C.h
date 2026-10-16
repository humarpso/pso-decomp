#ifndef PSO_UNK_TUNK_804C349C_H
#define PSO_UNK_TUNK_804C349C_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804C349C : public TObject {
public:
    virtual ~TUnk_804C349C();
    u8 unk_1C[0x7C];
};
typedef char TUnk_804C349C_size[sizeof(TUnk_804C349C) == 0x98 ? 1 : -1];

#endif
