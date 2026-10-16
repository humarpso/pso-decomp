#ifndef PSO_OBJECT_TUNK_804B5BA8_H
#define PSO_OBJECT_TUNK_804B5BA8_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804B5BA8 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_804B5BA8();
    u8 unk_AC[0x10];
};
typedef char TUnk_804B5BA8_size[sizeof(TUnk_804B5BA8) == 0xBC ? 1 : -1];

#endif
