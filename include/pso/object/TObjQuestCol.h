#ifndef PSO_OBJECT_TOBJQUESTCOL_H
#define PSO_OBJECT_TOBJQUESTCOL_H

#include "types.h"

struct TObjQuestCol
{
    u8 _pad1C[0x94];
    u32 m_b0;
    s32 update_trigger_state(f32 farg0);
};

#endif
