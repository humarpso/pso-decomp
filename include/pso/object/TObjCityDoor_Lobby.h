#ifndef PSO_OBJECT_TOBJCITYDOOR_LOBBY_H
#define PSO_OBJECT_TOBJCITYDOOR_LOBBY_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjCityDoor_Lobby : public TUnk_804B9870 {
    virtual ~TObjCityDoor_Lobby();
    virtual void render();
    virtual void run_task();

    u8 unk_90[0x1C4];
};

typedef char TObjCityDoor_Lobby_size[sizeof(TObjCityDoor_Lobby) == 0x254 ? 1 : -1];
#endif
