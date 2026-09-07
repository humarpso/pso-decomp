#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80149CE0_lbl_8043F810 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80149CE0_lbl_804A8640 {
    M2C_UNK value;
    u8 remaining[0x174];
};

extern "C" {
u8 * TObjNpcBase__ct(void *);
M2C_UNK init_npc_animation__10TObjPlayerFPvPvPvPv(void *, void *, void *, int);
M2C_UNK TObjPlayer__sub_8014394C(void *);
extern RecoveredGlobal_80149CE0_lbl_8043F810 lbl_8043F810;
extern M2C_UNK lbl_804A8640[];
extern s32 *lbl_805D5738;
u8 *TObjNpcFemaleBase__sub_80149CE0(u8 *arg0);
}

extern "C" {

void TObjNpcFemaleBase__sub_80149C7C(void);
void *destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);

    extern int lbl_805D5758;
    extern int lbl_805D5D78;
void TObjNpcFemaleBase__sub_80149C7C(void) { lbl_805D5758 = lbl_805D5D78; }

extern M2C_UNK lbl_804A8640[];

void *destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A8640;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80149CE0_lbl_8043F810_size[sizeof(RecoveredGlobal_80149CE0_lbl_8043F810) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80149CE0_lbl_804A8640_size[sizeof(RecoveredGlobal_80149CE0_lbl_804A8640) == 0x178 ? 1 : -1];
u8 *TObjNpcFemaleBase__sub_80149CE0(u8 *arg0) {
    TObjNpcBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80149CE0_lbl_804A8640 *)&lbl_804A8640).value;
    init_npc_animation__10TObjPlayerFPvPvPvPv((void *) (arg0), (void *) (&lbl_8043F810.value), (void *) (*lbl_805D5738), (int) (0));
    TObjPlayer__sub_8014394C((void *) (arg0));
    return arg0;
}

}
