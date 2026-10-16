#ifndef PSO_MISC_TUNK_804AF8D8_H
#define PSO_MISC_TUNK_804AF8D8_H
#include "types.h"
#include "pso/player/TUnk_80494AE0.h"

class TUnk_804AF8D8 : public TUnk_80494AE0 {
public:
    virtual ~TUnk_804AF8D8();
    virtual void set_flags_and_apply_damage_color();
    virtual void clear_flag_and_notify();
    void *init_vtable_804AF8D8();
    void *destroy(s16);
    void sub_80156CEC();
};

#endif
