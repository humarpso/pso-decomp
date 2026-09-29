#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Rec_801AA17C {
    s32 kinds[4];
    s32 participants[4];
    s32 state;
};

extern "C" {
extern struct Rec_801AA17C lbl_8050E890[];
s32 TObjPlayer__sub_801AA17C(struct Rec_801AA17C *output, s32 player);
}

extern "C" {

s32 TObjPlayer__sub_801AA17C(struct Rec_801AA17C *output, s32 player) {
    s32 i;
    if (lbl_8050E890[player].state == 0) {
        return 0;
    }
    if (lbl_8050E890[player].state == 2) {
        for (i = 0; i < 4; i++) {
            output->kinds[i] = lbl_8050E890[player].kinds[i];
            output->participants[i] = lbl_8050E890[player].participants[i];
        }
        return 2;
    }
    if (lbl_8050E890[player].state == 1) {
        for (i = 0; i < 4; i++) {
            output->kinds[i] = lbl_8050E890[player].kinds[i];
            output->participants[i] = lbl_8050E890[player].participants[i];
        }
        return 1;
    }
    return 0;
}

}
