#include "types.h"
#include "pso/unk/text_800FD8A0.h"

extern s32 lbl_805D53B0;
extern s32 current_room_id;
bool fn_800FD8A0(s32 arg0) {
    return lbl_805D53B0 == arg0;
}
bool is_current_room(s32 arg0) {
    return current_room_id == arg0;
}
