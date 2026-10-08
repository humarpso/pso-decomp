#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800C8068_lbl_80500C38 {
    M2C_UNK value;
    u8 remaining[0x1FC];
};

extern "C" {
void bswap_packet_header__6TLobbyFPv(s32);
u32 get_enemy_entity(u16);
extern RecoveredGlobal_800C8068_lbl_80500C38 lbl_80500C38;
void handle_6x09_legacy_kill_enemy(s32 arg0);
extern RecoveredGlobal_800C8068_lbl_80500C38 lbl_80500C38;
void clear_table_80500C38__6TLobbyFv(void);
}

extern "C" {

void TLobby__sub_800C80D0(void);
void reset_instance__15TObjEnemyCustomFv(void);
int init_globals__15TObjEnemyCustomFv(void);

    extern int lbl_805D5198;
void reset_instance__15TObjEnemyCustomFv(void) { lbl_805D5198 = 0; init_globals__15TObjEnemyCustomFv(); }

typedef char RecoveredGlobal_800C8068_lbl_80500C38_size[sizeof(RecoveredGlobal_800C8068_lbl_80500C38) == 0x200 ? 1 : -1];
void handle_6x09_legacy_kill_enemy(s32 arg0) {
    s32 temp_r5;
    u16 temp_r3;
    u32 temp_r3_2;
    bswap_packet_header__6TLobbyFPv(arg0);
    temp_r3 = M2C_FIELD(arg0, u16 *, 2);
    temp_r5 = (temp_r3 * 4) & 0x3FFFC;
    if ((s32) M2C_FIELD(&lbl_80500C38.value, M2C_UNK *, temp_r5) == 0) {
        M2C_FIELD(&lbl_80500C38.value, M2C_UNK *, temp_r5) = 1;
        temp_r3_2 = get_enemy_entity(temp_r3);
        if (temp_r3_2 != 0) {
            M2C_FIELD(temp_r3_2, s32 *, 0x30) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x30) | 0x800);
        }
    }
}

void TLobby__sub_800C80D0(void) {  }
void clear_table_80500C38__6TLobbyFv(void) {
    s32 i;
    for (i = 0; i < 0x80; i++) {
        ((s32 *)&lbl_80500C38)[i] = 0;
    }
}

}
