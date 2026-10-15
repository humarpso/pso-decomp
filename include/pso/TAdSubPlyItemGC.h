#ifndef PSO_TADSUBPLYITEMGC_H
#define PSO_TADSUBPLYITEMGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdSubPlyItemGC : public TObject {
public:
    virtual ~TAdSubPlyItemGC();
public:
    int render_status_line(int a1);
};

#endif
