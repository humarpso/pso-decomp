#ifndef PSO_UI_TUNK_804F3428_H
#define PSO_UI_TUNK_804F3428_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804F3428 : public TObject {
public:
    virtual ~TUnk_804F3428();
    u8 unk_1C[0x8];
};
typedef char TUnk_804F3428_size[sizeof(TUnk_804F3428) == 0x24 ? 1 : -1];

#endif
