#ifndef PSO_ITEM_TUNK_8049C658_H
#define PSO_ITEM_TUNK_8049C658_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_8049C658 : public TObject {
public:
    virtual ~TUnk_8049C658();
    u8 unk_1C[0x20];
};
typedef char TUnk_8049C658_size[sizeof(TUnk_8049C658) == 0x3C ? 1 : -1];

#endif
