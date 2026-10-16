#ifndef PSO_MISC_TENEFAKETECTHUNDEREFF_H
#define PSO_MISC_TENEFAKETECTHUNDEREFF_H
#include "types.h"
#include "pso/TObject.h"

class TeneFakeTecThunderEff : public TObject {
public:
    virtual ~TeneFakeTecThunderEff();
    u8 unk_1C[0x32C];
};
typedef char TeneFakeTecThunderEff_size[sizeof(TeneFakeTecThunderEff) == 0x348 ? 1 : -1];

#endif
