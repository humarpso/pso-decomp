#ifndef PSO_OBJECT_TOBJMESBASE_H
#define PSO_OBJECT_TOBJMESBASE_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjMesBase : public TUnk_804AF8A0 {
    virtual ~TObjMesBase();
    virtual void vfunc_14();
    virtual void vfunc_15();
    virtual void vfunc_16();
    virtual void run_task();
    void* messageChild;
    s32 messagePhase;
    s32 messageLabel;
    s32 messageBank;
    void start_message();
    void debug_draw_label();
    void clear_ref_if_destroyed();};
typedef char TObjMesBaseSizeCheck[sizeof(TObjMesBase) == 0xBC ? 1 : -1];

#endif
