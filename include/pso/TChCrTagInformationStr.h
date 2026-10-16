#ifndef PSO_TCHCRTAGINFORMATIONSTR_H
#define PSO_TCHCRTAGINFORMATIONSTR_H
#include "pso/TObject.h"
#include "types.h"

class TChCrTagInformationStr : public TObject {
public:
    virtual ~TChCrTagInformationStr();
    virtual void render();
    virtual void run_task();
public:
    static void *create(void *arg0, void *arg1);
};

#endif
