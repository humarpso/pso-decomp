#ifndef PSO_MISC_TOCAPSULELABO_H
#define PSO_MISC_TOCAPSULELABO_H

#include "types.h"
#include "pso/misc/TUnk_804B27D8.h"

struct TOCapsuleLabo : public TUnk_804B27D8 {
    virtual ~TOCapsuleLabo();
    u32 m_e4;
    static void unload_static_data();
    static void load_resources();
    void render();};

typedef char TOCapsuleLabo_size[sizeof(TOCapsuleLabo) == 0xE8 ? 1 : -1];
#endif
