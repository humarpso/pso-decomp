#include "types.h"

extern "C" {

s32 get_character_save_record(u32 arg0);
s32 get_split_screen_character_save_record(u32);

s32 is_split_screen();
extern s32 active_character_save_record;

s32 get_character_save_record(u32 arg0) {
    if (is_split_screen() != 0) {
        if (arg0 == 0xFFFF) {
            return get_split_screen_character_save_record(0U);
        }
        return get_split_screen_character_save_record(arg0);
    }
    return active_character_save_record;
}

}
