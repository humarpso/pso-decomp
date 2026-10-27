#ifndef PSO_BOSS_TUNK_804999E8_H
#define PSO_BOSS_TUNK_804999E8_H
#include "types.h"
#include "pso/TObject.h"

// Base of the screen fade tasks: alpha moves towards its end value and the
// fade fills the screen with color.
class TUnk_804999E8 : public TObject {
public:
    virtual ~TUnk_804999E8();
    virtual void render();
    void *init_object(void *);
    void *destroy_task_object(s16);
    f32 alpha;
    union {
        s32 m_20;
        u8 color[3];
    };
};

#endif
