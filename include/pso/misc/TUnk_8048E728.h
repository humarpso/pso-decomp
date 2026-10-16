#ifndef PSO_MISC_TUNK_8048E728_H
#define PSO_MISC_TUNK_8048E728_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_8048E728 : public TObject {
public:
    virtual ~TUnk_8048E728();
    u8 unk_1C[0xA4];
};
typedef char TUnk_8048E728_size[sizeof(TUnk_8048E728) == 0xC0 ? 1 : -1];

#endif
