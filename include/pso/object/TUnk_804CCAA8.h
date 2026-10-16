#ifndef PSO_OBJECT_TUNK_804CCAA8_H
#define PSO_OBJECT_TUNK_804CCAA8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CCAA8 : public TObject {
public:
    virtual ~TUnk_804CCAA8();
    u8 unk_1C[0x48];
};
typedef char TUnk_804CCAA8_size[sizeof(TUnk_804CCAA8) == 0x64 ? 1 : -1];

#endif
