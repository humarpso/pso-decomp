#include "types.h"

extern "C" {
extern s32 lbl_805D53B0;
bool fn_800FD8A0(s32 arg0);
extern s32 current_room_id;
bool is_current_room(s32 arg0);
bool fn_800FD8A0(s32 arg0) {
    return lbl_805D53B0 == arg0;
}
bool is_current_room(s32 arg0) {
    return current_room_id == arg0;
}

}
