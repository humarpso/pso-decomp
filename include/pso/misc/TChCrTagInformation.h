#ifndef PSO_MISC_TCHCRTAGINFORMATION_H
#define PSO_MISC_TCHCRTAGINFORMATION_H

#include "types.h"

struct TChCrTagInformation
{
    int render();
    void update_selected_char();
    void run_task();
    static void *create(void *arg0);
    static void *create_default();
};

#endif
