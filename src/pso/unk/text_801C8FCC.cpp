#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Vec_801C8FCC { f32 x, y, z; } Vec_801C8FCC;

typedef struct Cmd_801C8FCC {
    u8 cmd;
    u8 size;
    u16 client;
    s32 area;
    Vec_801C8FCC a;
    Vec_801C8FCC pos;
} Cmd_801C8FCC;

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss4DarkFalz__sub_8004C220(void *, void *);
s32 TLobby__sub_800822E8(void *, s32);
s32 is_in_tl03_state__10TObjPlayerFPv(void *);
u8 *get_player_by_client_id(u16);
void run_action_state_phase__10TObjPlayerFisi(void *, s32, s32);
void TObjPlayer__sub_801D0EA0(void *, void *);
void swap_endian__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D1658(void *);
s32 validate_6x55_intra_map_warp(void *);
void handle_6x55_intra_map_warp(s32 arg0);
}

extern "C" {

void handle_6x55_intra_map_warp(s32 arg0) {
    Cmd_801C8FCC cmd;
    u8 *p;
    TObjPlayer__sub_801D1658(&cmd);
    TObjPlayer__sub_801D0EA0(&cmd, (void *)arg0);
    swap_endian__10TObjPlayerFPv(&cmd);
    if (validate_6x55_intra_map_warp(&cmd) != 0) {
        p = get_player_by_client_id(cmd.client);
        if (p != NULL && is_in_tl03_state__10TObjPlayerFPv(p) != 0 && TLobby__sub_800822E8(p, 0x8200) == 0) {
            *(s32 *)(p + 0x65C) = cmd.area;
            TBoss4DarkFalz__sub_8004C220(p, &cmd.a);
            VecCopy__FP3VecPC3Vec(p + 0x660, &cmd.pos);
            run_action_state_phase__10TObjPlayerFisi(p, 0x14, 0);
        }
    }
}

}
