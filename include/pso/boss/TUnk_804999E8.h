#ifndef PSO_BOSS_TUNK_804999E8_H
#define PSO_BOSS_TUNK_804999E8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804999E8 : public TObject {
public:
    virtual ~TUnk_804999E8();
    void *init_object(void *);
    void *destroy_task_object(s16);
    u8 unk_1C[0x8];
};

#endif
