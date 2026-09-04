#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80182E60(void);
void *TObjPlayer__sub_80182D24(void *arg0, s16 arg1);
void check_player_in_range__10TObjPlayerFPv(void *arg0);
void fn_80182E7C(void* a0);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK is_player_in_range__10TObjPlayerFiif(void *, void *);

void check_player_in_range__10TObjPlayerFPv(void *arg0) {
    is_player_in_range__10TObjPlayerFiif(arg0, (s8 *)arg0 + 0x38);
}

extern M2C_UNK lbl_804B5BA8[];

void *TObjPlayer__sub_80182D24(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5BA8;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *lbl_805D4E28;

s32 TLobby__sub_80182E60(void) {
    if ((void *) lbl_805D4E28 == NULL) {
        return -1;
    }
    return M2C_FIELD(lbl_805D4E28, s32 *, 0x1C);
}

    extern const float lbl_805DBC00;
void fn_80182E7C(void* a0) { *(float*)((char*)a0 + 0x9c) = lbl_805DBC00; *(int*)((char*)a0 + 0x90) = 1; }

}
