#ifndef PSO_MISC_TFOGCTRL_EOR_H
#define PSO_MISC_TFOGCTRL_EOR_H
#include "types.h"
#include "pso/TObject.h"

class TFogCtrl_EOR : public TObject {
public:
    virtual ~TFogCtrl_EOR();
};
typedef char TFogCtrl_EOR_size[sizeof(TFogCtrl_EOR) == 0x1C ? 1 : -1];

#endif
