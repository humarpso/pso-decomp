#ifndef PSO_MISC_TOREVLIGHTCAVE01_H
#define PSO_MISC_TOREVLIGHTCAVE01_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TORevlightCave01 : public TUnk_804AFBF8 {
    virtual ~TORevlightCave01();
    u32 m_c8;
    u32 m_cc;
    static void *create(void *arg0);
    static void release_static_instance();
    static void load_shared_resource();
    void run_task();
    void render();};

typedef char TORevlightCave01_size[sizeof(TORevlightCave01) == 0xD0 ? 1 : -1];
#endif
