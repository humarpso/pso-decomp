#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdStorySelectGC__sub_80207D44(s32 arg0);
void set_state__16TAdStorySelectGCFi(s32 arg0);
M2C_UNK TLobby__sub_80207BB0();
M2C_UNK init_floor_map_registry();

extern s32 lbl_805D3628;

s32 TAdStorySelectGC__sub_80207D44(s32 arg0) {
    if ((s32) lbl_805D3628 == -1) {
        lbl_805D3628 = arg0;
        return 1;
    }
    return 0;
}

extern s32 lbl_805D6060;

void set_state__16TAdStorySelectGCFi(s32 arg0) {
    lbl_805D6060 = arg0;
    switch (arg0) {
    case 0:
        init_floor_map_registry();
        return;
    case 1:
        TLobby__sub_80207BB0();
        return;
    }
}

}
