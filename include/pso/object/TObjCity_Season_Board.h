#ifndef PSO_OBJECT_TOBJCITY_SEASON_BOARD_H
#define PSO_OBJECT_TOBJCITY_SEASON_BOARD_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjCity_Season_Board : public TUnk_804B9870 {
    virtual ~TObjCity_Season_Board();

    u8 unk_90[0x4];
};

typedef char TObjCity_Season_Board_size[sizeof(TObjCity_Season_Board) == 0x94 ? 1 : -1];
#endif
