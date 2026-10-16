#ifndef PSO_SYSTEM_TUNK_804A2660_H
#define PSO_SYSTEM_TUNK_804A2660_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804A2660 : public TObject {
public:
    virtual ~TUnk_804A2660();
    virtual void run_task();
    u8 unk_1C[0x10];
};
typedef char TUnk_804A2660_size[sizeof(TUnk_804A2660) == 0x2C ? 1 : -1];

#endif
