#ifndef PSO_PLAYER_TUNK_80484840_H
#define PSO_PLAYER_TUNK_80484840_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80484840 : public TObject {
public:
    virtual ~TUnk_80484840();
    u8 unk_1C[0x28];
};
typedef char TUnk_80484840_size[sizeof(TUnk_80484840) == 0x44 ? 1 : -1];

#endif
