#ifndef PSO_MISC_TOROCKCAVE_H
#define PSO_MISC_TOROCKCAVE_H

#include "types.h"

struct TORockCave
{
    void draw_model();
    static void free_instances();
    static void load_resources();
};

#endif
