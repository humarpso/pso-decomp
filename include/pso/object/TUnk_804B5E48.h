#ifndef PSO_OBJECT_TUNK_804B5E48_H
#define PSO_OBJECT_TUNK_804B5E48_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804B5E48 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_804B5E48();
    u8 unk_AC[0x8];
};
typedef char TUnk_804B5E48_size[sizeof(TUnk_804B5E48) == 0xB4 ? 1 : -1];

#endif
