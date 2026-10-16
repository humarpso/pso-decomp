#ifndef PSO_MISC_TOMONUMENTANCIENT01_H
#define PSO_MISC_TOMONUMENTANCIENT01_H

#include "types.h"
#include "pso/misc/TUnk_804B27D8.h"

struct TOMonumentAncient01 : public TUnk_804B27D8 {
    virtual ~TOMonumentAncient01();
    virtual void render();
    static void *create(void *arg0);
    static void release_static_resource();
    static void load_resource_instance();};

typedef char TOMonumentAncient01_size[sizeof(TOMonumentAncient01) == 0xE4 ? 1 : -1];
#endif
