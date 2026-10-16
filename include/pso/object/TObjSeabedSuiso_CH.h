#ifndef PSO_OBJECT_TOBJSEABEDSUISO_CH_H
#define PSO_OBJECT_TOBJSEABEDSUISO_CH_H
#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

class TObjSeabedSuiso_CH : public TUnk_804AFBF8 {
public:
    virtual ~TObjSeabedSuiso_CH();
    u8 unk_C8[0x14];
};
typedef char TObjSeabedSuiso_CH_size[sizeof(TObjSeabedSuiso_CH) == 0xDC ? 1 : -1];

#endif
