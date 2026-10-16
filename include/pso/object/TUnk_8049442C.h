#ifndef PSO_OBJECT_TUNK_8049442C_H
#define PSO_OBJECT_TUNK_8049442C_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_8049442C : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_8049442C();
    u8 unk_AC[0x44];
};
typedef char TUnk_8049442C_size[sizeof(TUnk_8049442C) == 0xF0 ? 1 : -1];

#endif
