#ifndef PSO_UNK_TUNK_804A4948_H
#define PSO_UNK_TUNK_804A4948_H
#include "types.h"
#include "pso/items/TItemWeapon.h"

class TUnk_804A4948 : public TItemWeapon {
public:
    virtual ~TUnk_804A4948();
    void set_special_selector(u8);
    virtual void vfunc_62();
};

#endif
