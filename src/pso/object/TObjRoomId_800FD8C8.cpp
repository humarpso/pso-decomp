#include "types.h"
#include "pso/object/TObjRoomId.h"

extern "C" {

s32 set_global_count__12TObjNpcEnemyFl(s32);
s32 debug_printf_at(s32, s32, ...);

extern u32 current_room_id;

void TObjRoomId::draw_debug_line(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == (u32) current_room_id) {
        set_global_count__12TObjNpcEnemyFl(0xFF00FF);
        debug_printf_at((arg1 << 0x10) | arg2, arg3);
        set_global_count__12TObjNpcEnemyFl(0xF0F0F0FF);
    }
}

}
