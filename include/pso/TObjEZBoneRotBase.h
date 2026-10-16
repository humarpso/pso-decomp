#ifndef PSO_TOBJEZBONEROTBASE_H
#define PSO_TOBJEZBONEROTBASE_H

#include "pso/TObject.h"
#include "types.h"

class TObjEZBoneRotBase : public TObject {
public:
    virtual ~TObjEZBoneRotBase();
    void sub_800FED0C();
    void sub_800FEC40(u8 *);
};

#endif
