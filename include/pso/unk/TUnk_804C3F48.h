#ifndef PSO_UNK_TUNK_804C3F48_H
#define PSO_UNK_TUNK_804C3F48_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804C3F48 : public TObject {
public:
    virtual ~TUnk_804C3F48();
    u8 unk_1C[0xC];
};
typedef char TUnk_804C3F48_size[sizeof(TUnk_804C3F48) == 0x28 ? 1 : -1];

#endif
