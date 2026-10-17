#ifndef PSO_UNK_TEXT_8011A780_H
#define PSO_UNK_TEXT_8011A780_H

#include "types.h"

extern "C" {
void TLobby__sub_8011AA44(s16 arg0, s32 _w1);
void TLobby__sub_8011AED8(s8 arg0, s16 arg1, u8 *arg2, f32 farg0, f32 farg1);
u32 advance_item_id_counter(s32 client);
u32 build_item_id(u16 arg0);
void handle_6x5C_destroy_floor_item(void *arg0);
void handle_6x60_standard_drop_item_request(void *arg0);
void handle_6x62(void);
void handle_6xA2_specializable_item_drop_request(void *arg0);
void process_enemy_drop_request(s8 area, s16 source, int client, s16 room, int slot, f32 x, f32 z);
}

#endif
