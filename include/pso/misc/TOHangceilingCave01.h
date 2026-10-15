#ifndef PSO_MISC_TOHANGCEILINGCAVE01_H
#define PSO_MISC_TOHANGCEILINGCAVE01_H

#include "types.h"

struct TOHangceilingCave01
{
    void init_geometry();
    void draw_model();
    void check_player_trigger();
    static void destroy_instance();
};

#endif
