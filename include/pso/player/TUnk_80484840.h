#ifndef PSO_PLAYER_TUNK_80484840_H
#define PSO_PLAYER_TUNK_80484840_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80484840 : public TObject {
public:
    virtual ~TUnk_80484840();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x8];
    s32 m_24;
    u8 unk_28[0x4];
    s32 m_2c;
    u8 unk_30[0x8];
    s32 m_38;
    u8 unk_3C[0x8];
};
typedef char TUnk_80484840_size[sizeof(TUnk_80484840) == 0x44 ? 1 : -1];

#endif
