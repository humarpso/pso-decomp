#ifndef PSO_PLAYER_TUNK_804C4540_H
#define PSO_PLAYER_TUNK_804C4540_H
#include "types.h"
#include "pso/player/TObjPlayer.h"

class TPlyCharData;

class TUnk_804C4540 : public TObjPlayer {
public:
    virtual ~TUnk_804C4540();
    static TUnk_804C4540 *create(TPlyCharData *data);
    int set_position_from(void *pos);
    void set_animation_default(s16 index);
};
typedef char TUnk_804C4540_size[sizeof(TUnk_804C4540) == 0xDB8 ? 1 : -1];

#endif
