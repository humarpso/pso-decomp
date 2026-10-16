#ifndef PSO_MISC_TWINDOWDD_WS_STRING_H
#define PSO_MISC_TWINDOWDD_WS_STRING_H
#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

class TWindowDD_WS_String : public TUnk_804CE018 {
public:
    virtual ~TWindowDD_WS_String();
    u8 unk_1C[0x58];
};
typedef char TWindowDD_WS_String_size[sizeof(TWindowDD_WS_String) == 0x74 ? 1 : -1];

#endif
