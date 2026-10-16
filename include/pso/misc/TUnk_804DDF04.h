#ifndef PSO_MISC_TUNK_804DDF04_H
#define PSO_MISC_TUNK_804DDF04_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804DDF04 : public TObject {
public:
    virtual ~TUnk_804DDF04();
    u8 unk_1C[0x4];
};
typedef char TUnk_804DDF04_size[sizeof(TUnk_804DDF04) == 0x20 ? 1 : -1];

#endif
