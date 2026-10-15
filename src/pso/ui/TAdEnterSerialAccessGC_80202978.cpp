#include "types.h"

extern "C" {

s32 get_field_118__22TAdEnterSerialAccessGCFv(void);
s32 get_serial_result__22TAdEnterSerialAccessGCFv(void);

extern u8 *secondary_card_system_save_payload;

s32 get_serial_result__22TAdEnterSerialAccessGCFv(void) {
    return *(s32 *)((s8 *)secondary_card_system_save_payload + 0x118);
}

extern void *system_save_payload;

s32 get_field_118__22TAdEnterSerialAccessGCFv(void) {
    return *(s32 *)((s8 *)system_save_payload + 0x118);
}

}
