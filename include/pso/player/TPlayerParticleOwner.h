#ifndef PSO_PLAYER_TPLAYERPARTICLEOWNER_H
#define PSO_PLAYER_TPLAYERPARTICLEOWNER_H
#include "pso/TObject.h"
class TParticleCtrl;
class TPlayerParticleOwner : public TObject {
public:
    TPlayerParticleOwner(TObject* parent);
    virtual ~TPlayerParticleOwner();
    u16 player_id;
    TParticleCtrl* particle;
};
typedef char TPlayerParticleOwner_size[sizeof(TPlayerParticleOwner) == 0x24 ? 1 : -1];
#endif
