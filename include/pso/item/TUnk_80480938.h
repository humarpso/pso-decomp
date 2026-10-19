#ifndef PSO_ITEM_TUNK_80480938_H
#define PSO_ITEM_TUNK_80480938_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80480938 : public TObject {
public:
    virtual ~TUnk_80480938();
    virtual void render();
    virtual void run_task();
};
typedef char TUnk_80480938_size[sizeof(TUnk_80480938) == 0x1C ? 1 : -1];

#endif
