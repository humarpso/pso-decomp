#ifndef PSO_MISC_TUNK_804DC7C4_H
#define PSO_MISC_TUNK_804DC7C4_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804DC7C4 : public TObject {
public:
    virtual ~TUnk_804DC7C4();
    virtual void render_shadows();
    virtual void render();
    u8 unk_1C[0x20];
};
typedef char TUnk_804DC7C4_size[sizeof(TUnk_804DC7C4) == 0x3C ? 1 : -1];

#endif
