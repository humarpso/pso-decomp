#ifndef PSO_OBJECT_TOBJHMS_EZROPE_PLAYER_H
#define PSO_OBJECT_TOBJHMS_EZROPE_PLAYER_H
#include "types.h"
#include "pso/TObjEZRopeBase.h"

class TObjHMS_EZRope_Player : public TObjEZRopeBase {
public:
    virtual ~TObjHMS_EZRope_Player();
    u8 unk_30[0x18];
};
typedef char TObjHMS_EZRope_Player_size[sizeof(TObjHMS_EZRope_Player) == 0x48 ? 1 : -1];

#endif
