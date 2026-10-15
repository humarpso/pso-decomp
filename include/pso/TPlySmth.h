#ifndef PSO_TPLYSMTH_H
#define PSO_TPLYSMTH_H

#include "types.h"
#include "pso/macros.h"
#include "pso/protocol.h"

class TPlySmth {
public:
    TPlySmth() {};

    void bswap() {
        bswap_32(as(u32 *, &m_smth));
        bswap_32(as(u32 *, &m_smth1));
    };
public:
    u8 m_smth[4];
    u8 m_smth1[4];
public:
    void*construct();
};

#endif
