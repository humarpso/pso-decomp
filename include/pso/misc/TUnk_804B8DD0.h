#ifndef PSO_MISC_TUNK_804B8DD0_H
#define PSO_MISC_TUNK_804B8DD0_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804B8DD0 : public TObject {
public:
    virtual ~TUnk_804B8DD0();
    u8 unk_1C[0x28];
};
typedef char TUnk_804B8DD0_size[sizeof(TUnk_804B8DD0) == 0x44 ? 1 : -1];

#endif
