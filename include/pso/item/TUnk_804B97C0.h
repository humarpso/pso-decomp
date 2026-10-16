#ifndef PSO_ITEM_TUNK_804B97C0_H
#define PSO_ITEM_TUNK_804B97C0_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804B97C0 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_804B97C0();
    virtual void vfunc_14();
    virtual void vfunc_15();
    virtual void render();
    virtual void run_task();
    u8 unk_AC[0x8];
};
typedef char TUnk_804B97C0_size[sizeof(TUnk_804B97C0) == 0xB4 ? 1 : -1];

#endif
