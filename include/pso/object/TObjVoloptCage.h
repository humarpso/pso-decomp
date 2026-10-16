#ifndef PSO_OBJECT_TOBJVOLOPTCAGE_H
#define PSO_OBJECT_TOBJVOLOPTCAGE_H

#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct TObjVoloptCage : public TObjEnemyCustom {
    virtual ~TObjVoloptCage();
    void sub_80049000();
    u8 unk_38C[0x4];
    u32 m_390;
    void update_state();
    virtual void run_task();
    void update_breakup();
    void update_collision_state();
    static void destroy();
    static void init_break_model();
    virtual void render();};

typedef char TObjVoloptCage_size[sizeof(TObjVoloptCage) == 0x394 ? 1 : -1];
#endif
