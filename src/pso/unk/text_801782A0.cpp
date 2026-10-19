#include "types.h"
#include "pso/misc/TOSwitchTimer.h"

extern "C" {
u8 is_current_floor_switch_set(u16 id);
s32 get_current_floor(void);
void fn_801782A0(TOSwitchTimer *timer);
}

void fn_801782A0(TOSwitchTimer *timer) {
    s32 i;
    u16 *ids;

    timer->m_90 = 0;
    timer->m_94 = 0;
    timer->m_98 = (u32)timer->m_5c;
    if (timer->m_98 >= 2) {
        timer->m_98 = 1;
    }
    timer->m_9c = timer->rotation_y;
    if ((s32)timer->m_9c > 1) {
        timer->m_9c = 0;
    }
    timer->m_a0 = timer->rotation_z;
    if ((s32)timer->m_a0 < 0) {
        timer->m_a0 = 0;
    }
    timer->m_a4 = (s32)timer->m_a0 * 3 / 4;
    timer->m_a8 = timer->m_84;
    if (timer->m_a8 < 0x100) {
        timer->m_b0 = is_current_floor_switch_set(timer->m_a8);
    } else {
        timer->m_a8 = 0xFFFF;
        timer->m_b0 = 0;
    }
    ids = (u16 *)((u8 *)timer + 0xAA);
    for (i = 0; i < 3; i++) {
        *ids = *(u32 *)((u8 *)timer + 0x84 + i * 4) >> 16;
        if (*ids >= 0x100) {
            *ids = 0xFFFF;
        }
        ids++;
    }
    timer->m_b4 = get_current_floor();
}
