#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801F3DEC_TLobby__data_805127D0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_801F3DEC_TLobby__data_805127D0 TLobby__data_805127D0;
void TLobby__sub_801F3DEC(void);
s32 add_player__6TLobbyFiii(s32, s32, s32);
M2C_UNK bswap_32__FPUl(void *);
extern int TLobby__data_805D5EE0;
bool TLobby__sub_801F3F40(s32 arg0);
}

extern "C" {

void rebuild_all__6TLobbyFi(int a0);
int TLobby__sub_801F3B30(void);
int TLobby__sub_801F3BC4(void);
int TLobby__sub_801F4340(void);
int free_boss4rock__6TLobbyFv(void);
int TLobby__sub_8020A2AC(void);
int rebuild_entry__6TLobbyFPv(void);
int init_sub_state__6TLobbyFPv(void);

    extern int TLobby__data_805D5EE0;
    extern short TLobby__data_805D6134;
void rebuild_all__6TLobbyFi(int a0) { TLobby__data_805D5EE0 = a0; TLobby__sub_801F3BC4(); init_sub_state__6TLobbyFPv(); TLobby__sub_8020A2AC(); TLobby__sub_801F3B30(); free_boss4rock__6TLobbyFv(); rebuild_entry__6TLobbyFPv(); TLobby__sub_801F4340(); TLobby__data_805D6134 = 1; TLobby__data_805D5EE0 = 0; }
typedef char RecoveredGlobal_801F3DEC_TLobby__data_805127D0_size[sizeof(RecoveredGlobal_801F3DEC_TLobby__data_805127D0) == 0x28 ? 1 : -1];
void TLobby__sub_801F3DEC(void) {
    memset((void *) (&TLobby__data_805127D0.value), (int) (0), (int) (0x24));
}
bool TLobby__sub_801F3F40(s32 arg0) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u8 *var_r31;
    var_r31 = (u8 *)((*(u8 * *)&TLobby__data_805D5EE0));
    if (var_r31 != NULL) {
loop_1:
        sp14 = M2C_FIELD(var_r31, s32 *, 0);
        sp10 = M2C_FIELD(var_r31, s32 *, 4);
        spC = M2C_FIELD(var_r31, s32 *, 8);
        sp8 = M2C_FIELD(var_r31, s32 *, 0xC);
        bswap_32__FPUl((void *) (&sp14));
        bswap_32__FPUl((void *) (&sp10));
        bswap_32__FPUl((void *) (&spC));
        bswap_32__FPUl((void *) (&sp8));
        if ((sp14 == 3) && (spC == arg0)) {
            return add_player__6TLobbyFiii(spC, (s32) (var_r31 + 0x10), sp8) != 0;
        }
        if (sp14 != 0) {
            var_r31 += sp10;
            goto loop_1;
        }
        goto block_6;
    }
block_6:
    return 0;
}

}
