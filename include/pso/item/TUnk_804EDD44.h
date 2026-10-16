#ifndef PSO_ITEM_TUNK_804EDD44_H
#define PSO_ITEM_TUNK_804EDD44_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804EDD44 : public TObject {
public:
    virtual ~TUnk_804EDD44();
    u8 unk_1C[0x54];
};
typedef char TUnk_804EDD44_size[sizeof(TUnk_804EDD44) == 0x70 ? 1 : -1];

#endif
