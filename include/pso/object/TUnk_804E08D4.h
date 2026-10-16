#ifndef PSO_OBJECT_TUNK_804E08D4_H
#define PSO_OBJECT_TUNK_804E08D4_H
#include "types.h"
#include "pso/object/TObjPathObj.h"

class TUnk_804E08D4 : public TObjPathObj {
public:
    virtual ~TUnk_804E08D4();
    u8 unk_98[0x38];
};
typedef char TUnk_804E08D4_size[sizeof(TUnk_804E08D4) == 0xD0 ? 1 : -1];

#endif
