#ifndef PSO_BOSS_TUNK_804E4AD4_H
#define PSO_BOSS_TUNK_804E4AD4_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804E4AD4 : public TObject {
public:
    virtual ~TUnk_804E4AD4();
    u8 unk_1C[0x10];
};
typedef char TUnk_804E4AD4_size[sizeof(TUnk_804E4AD4) == 0x2C ? 1 : -1];

#endif
