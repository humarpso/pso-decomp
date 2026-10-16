#ifndef PSO_MISC_TUNK_80488AD8_H
#define PSO_MISC_TUNK_80488AD8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80488AD8 : public TObject {
public:
    virtual ~TUnk_80488AD8();
    u8 unk_1C[0x1C];
};
typedef char TUnk_80488AD8_size[sizeof(TUnk_80488AD8) == 0x38 ? 1 : -1];

#endif
