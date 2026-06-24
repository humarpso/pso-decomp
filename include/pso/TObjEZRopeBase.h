#ifndef PSO_TOBJEZROPEBASE_H
#define PSO_TOBJEZROPEBASE_H

#include "pso/TObject.h"
#include "types.h"

class TObjEZRopeBase : public TObject {
public:
    u8 _pad1C[0x10];
 void* m_2c;
public:
    virtual ~TObjEZRopeBase();
};

#endif
