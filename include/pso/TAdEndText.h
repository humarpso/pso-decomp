#ifndef PSO_TADENDTEXT_H
#define PSO_TADENDTEXT_H
#include "pso/TObject.h"
#include "types.h"

class TAdEndText : public TObject {
public:
    virtual ~TAdEndText();
public:
    static void free_resources();
    static void load_ending_font();
};

#endif
