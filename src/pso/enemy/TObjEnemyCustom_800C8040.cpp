#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/misc/TLobby.h"

extern "C" {
void bswap_packet_header__6TLobbyFv(s32);
u32 get_enemy_entity(u16);
void handle_6x09_legacy_kill_enemy(s32 arg0);
}

extern "C" {

void TLobby__sub_800C80D0(void);
int init_globals__15TObjEnemyCustomFv(void);

    extern int enemy_custom_camera_active_flag;
s32 legacy_enemy_kill_received_flags[128];

void TObjEnemyCustom::reset_instance() { enemy_custom_camera_active_flag = 0; init_globals__15TObjEnemyCustomFv(); }

void handle_6x09_legacy_kill_enemy(s32 arg0) {
    s32 temp_r5;
    u16 temp_r3;
    u32 temp_r3_2;
    bswap_packet_header__6TLobbyFv(arg0);
    temp_r3 = *(u16 *)((s8 *)arg0 + 2);
    temp_r5 = (temp_r3 * 4) & 0x3FFFC;
    if ((s32) *(s32 *)((s8 *)legacy_enemy_kill_received_flags + temp_r5) == 0) {
        *(s32 *)((s8 *)legacy_enemy_kill_received_flags + temp_r5) = 1;
        temp_r3_2 = get_enemy_entity(temp_r3);
        if (temp_r3_2 != 0) {
            *(s32 *)((s8 *)temp_r3_2 + 0x30) = (s32) (*(s32 *)((s8 *)temp_r3_2 + 0x30) | 0x800);
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
