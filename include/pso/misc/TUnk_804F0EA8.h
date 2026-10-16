#ifndef PSO_MISC_TUNK_804F0EA8_H
#define PSO_MISC_TUNK_804F0EA8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804F0EA8 : public TObject {
public:
    virtual ~TUnk_804F0EA8();
    virtual void run_task();
    u8 unk_1C[0x8];
};
typedef char TUnk_804F0EA8_size[sizeof(TUnk_804F0EA8) == 0x24 ? 1 : -1];

#endif
