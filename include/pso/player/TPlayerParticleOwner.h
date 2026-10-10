#ifndef PSO_PLAYER_TPLAYERPARTICLEOWNER_H
#define PSO_PLAYER_TPLAYERPARTICLEOWNER_H
#include "pso/TObject.h"
class TParticleCtrl;
struct TObjPlayer;
class TPlayerParticleOwner : public TObject {
public:
    TPlayerParticleOwner(TObject* parent);
    virtual ~TPlayerParticleOwner();
    TObjPlayer* get_player();
    TParticleCtrl* get_particle();
    void set_particle(TParticleCtrl* value);
    void set_player_id(u16 value);
    u16 player_id;
    TParticleCtrl* particle;
};
typedef char TPlayerParticleOwner_size[sizeof(TPlayerParticleOwner) == 0x24 ? 1 : -1];
#endif
