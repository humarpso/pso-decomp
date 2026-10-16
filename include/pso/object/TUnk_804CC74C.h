#ifndef PSO_OBJECT_TUNK_804CC74C_H
#define PSO_OBJECT_TUNK_804CC74C_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CC74C : public TObject {
public:
    virtual ~TUnk_804CC74C();
    u8 unk_1C[0x18];
};
typedef char TUnk_804CC74C_size[sizeof(TUnk_804CC74C) == 0x34 ? 1 : -1];

#endif
