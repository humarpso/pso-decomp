#ifndef PSO_PLAYER_TUNK_804820C0_H
#define PSO_PLAYER_TUNK_804820C0_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804820C0 : public TObject {
public:
    virtual ~TUnk_804820C0();
    u8 unk_1C[0x4];
};
typedef char TUnk_804820C0_size[sizeof(TUnk_804820C0) == 0x20 ? 1 : -1];

#endif
