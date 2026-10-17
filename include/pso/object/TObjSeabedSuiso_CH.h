#ifndef PSO_OBJECT_TOBJSEABEDSUISO_CH_H
#define PSO_OBJECT_TOBJSEABEDSUISO_CH_H
#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

class TObjSeabedSuiso_CH : public TUnk_804AFBF8 {
public:
    virtual ~TObjSeabedSuiso_CH();
    void init_kind_params();
    void update_state();
    u8 unk_C8[0xC];
    s32 m_d4;
    u8 unk_D8[0x4];
};
typedef char TObjSeabedSuiso_CH_size[sizeof(TObjSeabedSuiso_CH) == 0xDC ? 1 : -1];

#endif
