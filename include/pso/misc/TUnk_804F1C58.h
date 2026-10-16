#ifndef PSO_MISC_TUNK_804F1C58_H
#define PSO_MISC_TUNK_804F1C58_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804F1C58 : public TObject {
public:
    virtual ~TUnk_804F1C58();
    void *destroy(s16);
    u8 unk_1C[0xC];
    void * m_28;
    u8 unk_2C[0x10];
};
typedef char TUnk_804F1C58_size[sizeof(TUnk_804F1C58) == 0x3C ? 1 : -1];

#endif
