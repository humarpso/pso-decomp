#ifndef PSO_MISC_TKOMOREBI_H
#define PSO_MISC_TKOMOREBI_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TKomorebi : public TUnk_804B9870 {
    virtual ~TKomorebi();
    virtual void render();
    virtual void run_task();
    static void free_static();
    static void load_resources();};

typedef char TKomorebi_size[sizeof(TKomorebi) == 0x90 ? 1 : -1];
#endif
