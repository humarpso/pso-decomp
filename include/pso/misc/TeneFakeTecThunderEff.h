#ifndef PSO_MISC_TENEFAKETECTHUNDEREFF_H
#define PSO_MISC_TENEFAKETECTHUNDEREFF_H
#include "types.h"
#include "pso/TObject.h"

class TeneFakeTecThunderEff : public TObject {
public:
    virtual ~TeneFakeTecThunderEff();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x30C];
    s32 m_328;
    u8 unk_32C[0x4];
    s32 m_330;
    u8 unk_334[0x4];
    s32 m_338;
    u8 unk_33C[0x4];
    s32 m_340;
    u8 unk_344[0x4];
};
typedef char TeneFakeTecThunderEff_size[sizeof(TeneFakeTecThunderEff) == 0x348 ? 1 : -1];

#endif
