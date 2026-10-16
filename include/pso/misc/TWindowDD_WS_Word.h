#ifndef PSO_MISC_TWINDOWDD_WS_WORD_H
#define PSO_MISC_TWINDOWDD_WS_WORD_H
#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

class TWindowDD_WS_Word : public TUnk_804CE018 {
public:
    virtual ~TWindowDD_WS_Word();
    void *destroy(s16);
    u8 sub_80342268();
    u8 sub_80342254();
    u8 unk_1C[0x74];
};
typedef char TWindowDD_WS_Word_size[sizeof(TWindowDD_WS_Word) == 0x90 ? 1 : -1];

#endif
