#ifndef PSO_TCHCRTAGOCCUPATION_H
#define PSO_TCHCRTAGOCCUPATION_H
#include "pso/TChCrTag.h"
#include "types.h"

class TChCrTagOccupation : public TChCrTag {
public:
    virtual ~TChCrTagOccupation();
    virtual void render();
    void sub_802A2DF4();
public:
    static void *create(void *arg0);
    static void create_all();
};

#endif
