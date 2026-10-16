#ifndef PSO_MISC_TTECRAZONDE_H
#define PSO_MISC_TTECRAZONDE_H

#include "types.h"
#include "pso/unk/TUnk_804CC148.h"

struct TTecRaZonde : public TUnk_804CC148 {
    virtual ~TTecRaZonde();
    u32 m_ec;
    void calc_damage();
    void create(void *arg1, void *arg2);
    static void render();
    u8 unk_F0[0x60];
};

typedef char TTecRaZonde_size[sizeof(TTecRaZonde) == 0x150 ? 1 : -1];
#endif
