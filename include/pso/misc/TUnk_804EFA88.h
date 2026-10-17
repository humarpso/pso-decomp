#ifndef PSO_MISC_TUNK_804EFA88_H
#define PSO_MISC_TUNK_804EFA88_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804EFA88 : public TObject {
public:
    virtual ~TUnk_804EFA88();
    void *destroy_object(s16);
    u8 unk_1C[0x4];
    s32 m_20;
};
typedef char TUnk_804EFA88_size[sizeof(TUnk_804EFA88) == 0x24 ? 1 : -1];

#endif
