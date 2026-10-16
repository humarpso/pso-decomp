#ifndef PSO_ENEMY_TUNK_8048FE7C_H
#define PSO_ENEMY_TUNK_8048FE7C_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_8048FE7C : public TObject {
public:
    virtual ~TUnk_8048FE7C();
    u8 unk_1C[0xE4];
};
typedef char TUnk_8048FE7C_size[sizeof(TUnk_8048FE7C) == 0x100 ? 1 : -1];

#endif
