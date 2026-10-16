#ifndef PSO_PLAYER_TUNK_804806E8_H
#define PSO_PLAYER_TUNK_804806E8_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804806E8 : public TObjMotion {
public:
    virtual ~TUnk_804806E8();
    u8 unk_FC[0x1AC];
    u8 *target;
    u8 unk_2AC[0xC];
    s16 hpmax;
    u8 unk_2BA[0x6];
    s16 m_2c0;
    u8 unk_2C2[0x6];
    s16 m_2c8;
    u8 unk_2CA[0x5C];
    s16 mode;
    s16 phase;
    u8 unk_32A[0x2];
    s16 hp;
    u8 unk_32E[0x6];
};
typedef char TUnk_804806E8_size[sizeof(TUnk_804806E8) == 0x334 ? 1 : -1];

#endif
