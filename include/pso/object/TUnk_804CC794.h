#ifndef PSO_OBJECT_TUNK_804CC794_H
#define PSO_OBJECT_TUNK_804CC794_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CC794 : public TObject {
public:
    virtual ~TUnk_804CC794();
    u8 unk_1C[0x18];
};
typedef char TUnk_804CC794_size[sizeof(TUnk_804CC794) == 0x34 ? 1 : -1];

#endif
