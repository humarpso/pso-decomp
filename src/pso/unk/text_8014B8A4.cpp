#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8014B8A4_lbl_8043FB50 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8014B8A4_lbl_804A9F50 {
    M2C_UNK value;
    u8 remaining[0x174];
};

extern "C" {
u8 * TObjNpcBase__ct(void *);
M2C_UNK init_npc_animation__10TObjPlayerFPvPvPvPv(void *, void *, void *, int);
M2C_UNK TObjPlayer__sub_8014394C(void *);
extern RecoveredGlobal_8014B8A4_lbl_8043FB50 lbl_8043FB50;
extern RecoveredGlobal_8014B8A4_lbl_804A9F50 lbl_804A9F50;
extern s32 *lbl_805D5738;
u8 *construct_male_npc_base(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_8014B8A4_lbl_8043FB50_size[sizeof(RecoveredGlobal_8014B8A4_lbl_8043FB50) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_8014B8A4_lbl_804A9F50_size[sizeof(RecoveredGlobal_8014B8A4_lbl_804A9F50) == 0x178 ? 1 : -1];
u8 *construct_male_npc_base(u8 *arg0) {
    TObjNpcBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A9F50.value;
    init_npc_animation__10TObjPlayerFPvPvPvPv((void *) (arg0), (void *) (&lbl_8043FB50.value), (void *) (*lbl_805D5738), (int) (0));
    TObjPlayer__sub_8014394C((void *) (arg0));
    return arg0;
}

}
