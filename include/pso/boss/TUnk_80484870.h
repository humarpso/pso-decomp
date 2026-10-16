#ifndef PSO_BOSS_TUNK_80484870_H
#define PSO_BOSS_TUNK_80484870_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80484870 : public TObject {
public:
    virtual ~TUnk_80484870();
    void *ct(void *, void *);
    void *dt(s16);
    u8 unk_1C[0xC];
};
typedef char TUnk_80484870_size[sizeof(TUnk_80484870) == 0x28 ? 1 : -1];

#endif
