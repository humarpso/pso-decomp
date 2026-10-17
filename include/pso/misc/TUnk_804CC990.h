#ifndef PSO_MISC_TUNK_804CC990_H
#define PSO_MISC_TUNK_804CC990_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CC990 : public TObject {
public:
    virtual ~TUnk_804CC990();
    u8 unk_1C[0x10];
    s32 m_2c;
    u8 unk_30[0x4];
};
typedef char TUnk_804CC990_size[sizeof(TUnk_804CC990) == 0x34 ? 1 : -1];

#endif
