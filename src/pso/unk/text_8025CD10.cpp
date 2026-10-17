#include "types.h"
struct Obj_8025CD10 { u8 pad[0xb4]; s32 fb4; };

extern "C" {
extern s32 current_language;
void update_keyboard_close_mode(Obj_8025CD10 *o);
void update_keyboard_close_mode(Obj_8025CD10 *o) {
    switch (current_language) {
    case 0:
        o->fb4 = 5;
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        o->fb4 = 6;
        break;
    }
}

}
