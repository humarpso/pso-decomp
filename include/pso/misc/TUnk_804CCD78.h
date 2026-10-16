#ifndef PSO_MISC_TUNK_804CCD78_H
#define PSO_MISC_TUNK_804CCD78_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CCD78 : public TObject {
public:
    virtual ~TUnk_804CCD78();
    u8 unk_1C[0x24];
};
typedef char TUnk_804CCD78_size[sizeof(TUnk_804CCD78) == 0x40 ? 1 : -1];

#endif
