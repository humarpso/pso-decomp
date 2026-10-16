#ifndef PSO_UNK_TUNK_804B8E18_H
#define PSO_UNK_TUNK_804B8E18_H
#include "types.h"
#include "pso/player/TUnk_804806E8.h"

class TUnk_804B8E18 : public TUnk_804806E8 {
public:
    virtual ~TUnk_804B8E18();
    void sub_8019A44C(s32);
    void update_goal_checks(u16);
    void update_best_time();
    void *destroy_player_obj(s16);
    u8 unk_334[0x20];
    s32 m_354;
    u8 unk_358[0x4C];
};
typedef char TUnk_804B8E18_size[sizeof(TUnk_804B8E18) == 0x3A4 ? 1 : -1];

#endif
