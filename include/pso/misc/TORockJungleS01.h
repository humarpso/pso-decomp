#ifndef PSO_MISC_TOROCKJUNGLES01_H
#define PSO_MISC_TOROCKJUNGLES01_H

#include "types.h"
#include "pso/misc/TORockCaveBrakable.h"

struct TORockJungleS01 : public TORockCaveBrakable {
    virtual ~TORockJungleS01();
    u32 m_bc;
    static void *create(void *arg0);
    static u8 *get_model(s32 arg0);
    static void free_globals();
    static void load_resources();};

typedef char TORockJungleS01_size[sizeof(TORockJungleS01) == 0xC0 ? 1 : -1];
#endif
