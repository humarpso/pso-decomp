#ifndef PSO_MISC_TUNK_804C3248_H
#define PSO_MISC_TUNK_804C3248_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804C3248 : public TObjMotion {
public:
    virtual ~TUnk_804C3248();
    virtual void enter_scene();
    virtual void update_if_active();
    u8 unk_FC[0x5C];
};

#endif
