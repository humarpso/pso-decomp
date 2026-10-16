#ifndef PSO_MISC_TOKEYGENERICSW_H
#define PSO_MISC_TOKEYGENERICSW_H

#include "types.h"
#include "pso/misc/TOKey.h"

struct TOKeyGenericSw : public TOKey {
    virtual ~TOKeyGenericSw();
    virtual void vfunc_16();
    virtual void vfunc_17();
    virtual void vfunc_25();
    u32 m_d8;
    u32 m_dc;
    void render();
    static void *create(void *arg0);
    static void free_shared_resources();
    static void load_resources();
    u8 unk_E0[0x1C];
};

typedef char TOKeyGenericSw_size[sizeof(TOKeyGenericSw) == 0xFC ? 1 : -1];
#endif
