#ifndef PSO_MISC_TODOORANCIENT06_H
#define PSO_MISC_TODOORANCIENT06_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorAncient06 : public TUnk_804B0BB8 {
    virtual ~TODoorAncient06();
    void render();
    static void *create(void *arg0);
    static void destroy();
    static void load_resources();};

typedef char TODoorAncient06_size[sizeof(TODoorAncient06) == 0xD4 ? 1 : -1];
#endif
