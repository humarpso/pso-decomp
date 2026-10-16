#ifndef PSO_OBJECT_TOBJQUESTCOLBASE_H
#define PSO_OBJECT_TOBJQUESTCOLBASE_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjQuestColBase : public TUnk_804AF8A0 {
    virtual ~TObjQuestColBase();
    virtual void render();
    u8 unk_AC[0x4];
    u32 m_b0;
    u32 m_b4;
    u32 m_b8;
    s32 is_within_range(f32 farg0);
    void update_room_id_check();
    virtual void run_task();};

typedef char TObjQuestColBase_size[sizeof(TObjQuestColBase) == 0xBC ? 1 : -1];
#endif
