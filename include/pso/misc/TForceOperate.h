#ifndef PSO_MISC_TFORCEOPERATE_H
#define PSO_MISC_TFORCEOPERATE_H

#include "types.h"
#include "pso/TObject.h"

struct TForceOperate : public TObject {
    virtual ~TForceOperate();
    void* m_1c;
    static s32 destroy(s32 arg0, s16 arg1);
    void set_field_0(s16 v);
    u8 unk_20[0x4];
};

typedef char TForceOperate_size[sizeof(TForceOperate) == 0x24 ? 1 : -1];
#endif
