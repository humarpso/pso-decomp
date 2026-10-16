#ifndef PSO_CAMERA_TUNK_804DAB08_H
#define PSO_CAMERA_TUNK_804DAB08_H
#include "types.h"
#include "pso/misc/TUnk_80488A28.h"

class TUnk_804DAB08 : public TUnk_80488A28 {
public:
    virtual ~TUnk_804DAB08();
    u8 unk_6C[0x24];
};
typedef char TUnk_804DAB08_size[sizeof(TUnk_804DAB08) == 0x90 ? 1 : -1];

#endif
