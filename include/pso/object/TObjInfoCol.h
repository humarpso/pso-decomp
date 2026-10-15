#ifndef PSO_OBJECT_TOBJINFOCOL_H
#define PSO_OBJECT_TOBJINFOCOL_H

#include "types.h"
#include <dolphin/mtx.h>

class TObjInfoCol
{
public:
    u8 unresolved_00[0x38];
    Vec position;
    u8 unresolved_44[0x68];
    f32 interaction_radius;

    s32 is_target_in_range(f32 radius_squared);
    void run_task();
public:
    void bswap_6x78();
};

#include <stddef.h>
typedef char TObjInfoColPositionOffset[
    offsetof(TObjInfoCol, position) == 0x38 ? 1 : -1];
typedef char TObjInfoColRadiusOffset[
    offsetof(TObjInfoCol, interaction_radius) == 0xAC ? 1 : -1];

#endif
