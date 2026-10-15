#ifndef PSO_TOBJONLINEENDINGHEXLINE_H
#define PSO_TOBJONLINEENDINGHEXLINE_H
#include "pso/TObject.h"
#include "types.h"

class TObjOnlineEndingHexLine : public TObject {
public:
    virtual ~TObjOnlineEndingHexLine();
public:
    void step_line();
    static void *create(void *arg0, void *arg1);
};

#endif
