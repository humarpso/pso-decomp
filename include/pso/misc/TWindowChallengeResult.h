#ifndef PSO_MISC_TWINDOWCHALLENGERESULT_H
#define PSO_MISC_TWINDOWCHALLENGERESULT_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowChallengeResult : public TUnk_804CE018 {
    virtual ~TWindowChallengeResult();

    u8 unk_1C[0x4C];
};

typedef char TWindowChallengeResult_size[sizeof(TWindowChallengeResult) == 0x68 ? 1 : -1];
#endif
