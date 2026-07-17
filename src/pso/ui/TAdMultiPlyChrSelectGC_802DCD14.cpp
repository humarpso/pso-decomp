#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiPlyChrSelectGC__sub_802DCD14(void *arg0);
M2C_UNK begin_change_game_mode__21TAdMultiChgGameModeGCFv();
M2C_UNK request_scene_change__21TAdMultiChgGameModeGCFv();
M2C_UNK set_game_mode_state__21TAdMultiChgGameModeGCFv();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_chr_select_state__22TAdMultiPlyChrSelectGCFv();

void TAdMultiPlyChrSelectGC__sub_802DCD14(void *arg0) {
    s32 temp_r0;

    TAdMultiPlyChrSelectGC__sub_802C6A10();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48);
    switch (temp_r0) {
    case 0:
        if (get_chr_select_state__22TAdMultiPlyChrSelectGCFv() != 0) {
            begin_change_game_mode__21TAdMultiChgGameModeGCFv();
            return;
        }
        set_game_mode_state__21TAdMultiChgGameModeGCFv();
        return;
    case 1:
        request_scene_change__21TAdMultiChgGameModeGCFv();
        return;
    case 2:
        begin_change_game_mode__21TAdMultiChgGameModeGCFv();
        return;
    }
}

}
