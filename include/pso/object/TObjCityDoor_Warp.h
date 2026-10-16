#ifndef PSO_OBJECT_TOBJCITYDOOR_WARP_H
#define PSO_OBJECT_TOBJCITYDOOR_WARP_H

#include "types.h"
#include "pso/object/TUnk_804B5BA8.h"

struct TObjCityDoor_Warp : public TUnk_804B5BA8 {
    virtual ~TObjCityDoor_Warp();
};

typedef char TObjCityDoor_Warp_size[sizeof(TObjCityDoor_Warp) == 0xBC ? 1 : -1];
#endif
