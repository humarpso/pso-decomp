#ifndef PSO_MISC_TUNK_804F01A8_H
#define PSO_MISC_TUNK_804F01A8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804F01A8 : public TObject {
public:
    virtual ~TUnk_804F01A8();
    void *ct();
    void *destroy(s16);
    u8 unk_1C[0x14];
};
typedef char TUnk_804F01A8_size[sizeof(TUnk_804F01A8) == 0x30 ? 1 : -1];

#endif
