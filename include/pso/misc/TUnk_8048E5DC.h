#ifndef PSO_MISC_TUNK_8048E5DC_H
#define PSO_MISC_TUNK_8048E5DC_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_8048E5DC : public TObject {
public:
    virtual ~TUnk_8048E5DC();
    virtual void render_shadows();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x20];
};
typedef char TUnk_8048E5DC_size[sizeof(TUnk_8048E5DC) == 0x3C ? 1 : -1];

#endif
