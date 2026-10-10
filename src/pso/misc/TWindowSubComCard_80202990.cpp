#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
