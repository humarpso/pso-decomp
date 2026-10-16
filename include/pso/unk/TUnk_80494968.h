#ifndef PSO_UNK_TUNK_80494968_H
#define PSO_UNK_TUNK_80494968_H
#include "types.h"
#include "pso/TAttackTrace.h"

class TUnk_80494968 : public TAttackTrace {
public:
    virtual ~TUnk_80494968();
    virtual void vfunc_6(void *, void *);
    virtual void shift_line_buffer_down();
    void sub_800D7818(s32, s32);
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x10C];
};
typedef char TUnk_80494968_size[sizeof(TUnk_80494968) == 0x128 ? 1 : -1];

#endif
