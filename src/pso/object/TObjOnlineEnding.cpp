#include "types.h"

extern "C" {

s16 get_card_window_value__16TObjOnlineEndingFv(void);
void *get_character_save_record(s32);

s16 get_card_window_value__16TObjOnlineEndingFv(void) {
    if (get_character_save_record(0xFFFF) == NULL) {
        return 0x3E7;
    }
    return *(s16 *)((s8 *)(get_character_save_record(0xFFFF)) + 0x2228);
}

}
