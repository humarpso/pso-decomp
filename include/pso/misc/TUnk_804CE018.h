#ifndef PSO_MISC_TUNK_804CE018_H
#define PSO_MISC_TUNK_804CE018_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CE018 : public TObject {
public:
    virtual ~TUnk_804CE018();
    virtual void render();
    virtual void run_task();
};
typedef char TUnk_804CE018_size[sizeof(TUnk_804CE018) == 0x1C ? 1 : -1];

#endif
