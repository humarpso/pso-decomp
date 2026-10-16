#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/misc/TLobby.h"

extern "C" {
u32 get_enemy_entity(u16);
void handle_6x09_legacy_kill_enemy(s32 arg0);
}

extern "C" {

void TLobby__sub_800C80D0(void);

    extern int enemy_custom_camera_active_flag;
s32 legacy_enemy_kill_received_flags[128];

void TObjEnemyCustom::reset_instance() { enemy_custom_camera_active_flag = 0; TObjEnemyCustom::init_globals(); }

void handle_6x09_legacy_kill_enemy(s32 arg0) {
    s32 temp_r5;
    u16 temp_r3;
    u32 enemy_entity;
    ((TLobby *)arg0)->bswap_packet_header();
    temp_r3 = *(u16 *)((s8 *)arg0 + 2);
    temp_r5 = (temp_r3 * 4) & 0x3FFFC;
    if ((s32) *(s32 *)((s8 *)legacy_enemy_kill_received_flags + temp_r5) == 0) {
        *(s32 *)((s8 *)legacy_enemy_kill_received_flags + temp_r5) = 1;
        enemy_entity = get_enemy_entity(temp_r3);
        if (enemy_entity != 0) {
            *(s32 *)((s8 *)enemy_entity + 0x30) = (s32) (*(s32 *)((s8 *)enemy_entity + 0x30) | 0x800);
        }
    }
}

void TLobby__sub_800C80D0(void) {  }
void TLobby::clear_table_80500C38() {
    s32 i;
    for (i = 0; i < 0x80; i++) {
        legacy_enemy_kill_received_flags[i] = 0;
    }
}

}
