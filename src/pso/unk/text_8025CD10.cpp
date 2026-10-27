#include "types.h"
#include "pso/ui/Language.h"
struct Obj_8025CD10 { u8 pad[0xb4]; s32 fb4; };

extern "C" {
void update_keyboard_close_mode(Obj_8025CD10 *o);
void update_keyboard_close_mode(Obj_8025CD10 *o) {
    switch (current_language) {
    case LANGUAGE_JAPANESE:
        o->fb4 = 5;
        break;
    case LANGUAGE_ENGLISH:
    case LANGUAGE_GERMAN:
    case LANGUAGE_FRENCH:
    case LANGUAGE_SPANISH:
        o->fb4 = 6;
        break;
    }
}

}
