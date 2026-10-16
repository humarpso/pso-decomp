#ifndef PSO_OBJECT_TUNK_804E094C_H
#define PSO_OBJECT_TUNK_804E094C_H
#include "types.h"
#include "pso/object/TObjPathObj.h"

class TUnk_804E094C : public TObjPathObj {
public:
    virtual ~TUnk_804E094C();
    u8 unk_98[0x34];
};
typedef char TUnk_804E094C_size[sizeof(TUnk_804E094C) == 0xCC ? 1 : -1];

#endif
