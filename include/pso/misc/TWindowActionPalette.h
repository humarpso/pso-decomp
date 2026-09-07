#ifndef PSO_MISC_TWINDOWACTIONPALETTE_H
#define PSO_MISC_TWINDOWACTIONPALETTE_H

#include "types.h"

struct TWindowActionPalette {
    struct ChildList {
        u32 count;
        void **entries;
    };
    struct Scale {
        f32 x;
        f32 y;
    };

    void render();

    u8 unknown_00[0x24];
    ChildList children;
    u8 unknown_2c[0x34];
    u8 resources[3][4];
    u8 state;
    u8 unknown_6d[3];
    Scale scale;
};

#endif
