#ifndef PSO_MISC_TUNK_804ED598_H
#define PSO_MISC_TUNK_804ED598_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804ED598 : public TObject {
public:
    virtual ~TUnk_804ED598();
    u8 unk_1C[0x28];
};
typedef char TUnk_804ED598_size[sizeof(TUnk_804ED598) == 0x44 ? 1 : -1];

#endif
