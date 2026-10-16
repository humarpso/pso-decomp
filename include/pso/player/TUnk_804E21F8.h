#ifndef PSO_PLAYER_TUNK_804E21F8_H
#define PSO_PLAYER_TUNK_804E21F8_H
#include "types.h"
#include "pso/player/TUnk_804E23F0.h"

class TUnk_804E21F8 : public TUnk_804E23F0 {
public:
    virtual ~TUnk_804E21F8();
    virtual void update_weapon();
    virtual void set_technique_roll(s32);
    void sub_802D577C();
    u8 unk_204[0x50];
};

#endif
