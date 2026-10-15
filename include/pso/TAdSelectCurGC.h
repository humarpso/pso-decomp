#ifndef PSO_TADSELECTCURGC_H
#define PSO_TADSELECTCURGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdSelectCurGC : public TObject {
public:
    virtual ~TAdSelectCurGC();
public:
    u8 check_flag_0x48();
    void render();
};

#endif
