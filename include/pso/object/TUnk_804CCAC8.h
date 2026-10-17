#ifndef PSO_OBJECT_TUNK_804CCAC8_H
#define PSO_OBJECT_TUNK_804CCAC8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CCAC8 : public TObject {
public:
    virtual ~TUnk_804CCAC8();
    u8 unk_1C[0x10];
    s32 m_2c;
    u8 unk_30[0x4];
};
typedef char TUnk_804CCAC8_size[sizeof(TUnk_804CCAC8) == 0x34 ? 1 : -1];

#endif
