#include "types.h"
#include "pso/system/vector.h"
struct Vec_80074E04 { f32 x, y, z; };

extern "C" {
extern Vec_80074E04 tombstone_position_table[];
void fn_80074E04(s32 i, Vec_80074E04 *out);
void fn_80074E04(s32 i, Vec_80074E04 *out) {
    if (i < 0 || i >= 4) {
        return;
    }
    VecCopy((Vec *)&tombstone_position_table[i], (const Vec *)out);
}

}
