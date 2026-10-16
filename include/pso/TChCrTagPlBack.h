#ifndef PSO_TCHCRTAGPLBACK_H
#define PSO_TCHCRTAGPLBACK_H
#include "pso/TChCrTag.h"
#include "types.h"

class TChCrTagPlBack : public TChCrTag {
public:
    virtual ~TChCrTagPlBack();
    void draw_frame();
public:
    static void *create(void *arg0);
    static void *create_default();
    void get_position_offset(void *arg1);
};

#endif
