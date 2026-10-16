#ifndef PSO_MISC_TOCONTAINERANCIENTENEMY_H
#define PSO_MISC_TOCONTAINERANCIENTENEMY_H

#include "types.h"
#include "pso/player/TUnk_804B6C24.h"

struct TOContainerAncientEnemy : public TUnk_804B6C24 {
    virtual ~TOContainerAncientEnemy();
    void check_and_destroy(s16 *arg1, s32 arg2);
    void spawn_break_debris();
    f32 open_and_send();
    void draw_debug_event_no();
    void draw_model();
    void submit_cursor_candidate_if_idle();};

typedef char TOContainerAncientEnemy_size[sizeof(TOContainerAncientEnemy) == 0x368 ? 1 : -1];
#endif
