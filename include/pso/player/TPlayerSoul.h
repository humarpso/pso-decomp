#ifndef PSO_PLAYER_TPLAYERSOUL_H
#define PSO_PLAYER_TPLAYERSOUL_H
#include "pso/player/TPlayerParticleOwner.h"
class TPlayerSoul : public TPlayerParticleOwner {
public:
    TPlayerSoul(TObject* parent, u16 player_id);
    virtual ~TPlayerSoul();
    virtual void run_task();
};
typedef char TPlayerSoul_size[sizeof(TPlayerSoul) == 0x24 ? 1 : -1];
#endif
