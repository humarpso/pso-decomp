#ifndef PSO_BOSS_TUNK_804F1280_H
#define PSO_BOSS_TUNK_804F1280_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804F1280 : public TObject {
public:
    virtual ~TUnk_804F1280();
    u8 unk_1C[0x28];
};
typedef char TUnk_804F1280_size[sizeof(TUnk_804F1280) == 0x44 ? 1 : -1];

#endif
