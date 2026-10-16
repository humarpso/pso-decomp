#ifndef PSO_UI_TUNK_804E24F0_H
#define PSO_UI_TUNK_804E24F0_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804E24F0 : public TItemWeapon {
public:
    virtual ~TUnk_804E24F0();
    u8 unk_1F8[0x4];
};
typedef char TUnk_804E24F0_size[sizeof(TUnk_804E24F0) == 0x1FC ? 1 : -1];

#endif
