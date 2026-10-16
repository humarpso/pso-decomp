#ifndef PSO_UNK_TOBJENEEPSILONBODY_H
#define PSO_UNK_TOBJENEEPSILONBODY_H
#include "types.h"
#include "pso/enemy/TObjEneEpsilon.h"

class TObjEneEpsilonBody : public TObjEneEpsilon {
public:
    virtual ~TObjEneEpsilonBody();
    u8 unk_3A8[0x16C];
};
typedef char TObjEneEpsilonBody_size[sizeof(TObjEneEpsilonBody) == 0x514 ? 1 : -1];

#endif
