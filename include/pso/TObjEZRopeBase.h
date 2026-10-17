#ifndef PSO_TOBJEZROPEBASE_H
#define PSO_TOBJEZROPEBASE_H

#include "pso/TObject.h"
#include "types.h"

class TObjEZRopeBase : public TObject {
public:
    u8 unk_1C[0x4];
    void * m_20;
    u8 unk_24[0x4];
    u32 m_28;
 void* m_2c;
public:
    virtual ~TObjEZRopeBase();
    void sub_800FF8CC(void *, void *, s32);
    void sub_800FF788(void *);
};

#endif
