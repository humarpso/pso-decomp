#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8015C534_lbl_804B00C8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015C534_lbl_804B08BC {
    M2C_UNK value;
    u8 remaining[0x148];
};

extern "C" {
M2C_UNK TLobby__sub_8001FE7C(u32, int);
M2C_UNK free__11TOBoss4RockFUi(u32);
M2C_UNK free_if_valid__10TObjPlayerFi(int);
extern u32 lbl_805D58E8;
extern u32 lbl_805D58EC;
void fn_8015C5F8(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_container_base(void *, int, void *);
extern RecoveredGlobal_8015C534_lbl_804B00C8 lbl_804B00C8;
extern RecoveredGlobal_8015C534_lbl_804B08BC lbl_804B08BC;
extern u32 lbl_805D58E8;
extern s32 tl_05;
u8 *init_ancient_container(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8015C534_lbl_804B00C8_size[sizeof(RecoveredGlobal_8015C534_lbl_804B00C8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015C534_lbl_804B08BC_size[sizeof(RecoveredGlobal_8015C534_lbl_804B08BC) == 0x14C ? 1 : -1];
u8 *init_ancient_container(u8 *arg0, s32 arg1) {
    init_container_base((void *) (arg0), (int) (tl_05), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804B08BC.value;
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x60000000);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B00C8.value), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) (M2C_FIELD(arg0, f32 *, 0x78) + M2C_FIELD(&lbl_804B00C8.value, f32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((void *) ((*(s32 *)&lbl_805D58E8)), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((void *) ((*(s32 *)&lbl_805D58E8)), (int) (0));
    return arg0;
}

#pragma push
#pragma fp_contract on
void fn_8015C5F8(void) {
    s32 var_r31;
    s32 var_r30;
    u32 p;
    if ((u32) lbl_805D58EC != 0U) {
        var_r30 = 0;
        var_r31 = 0;
        do {
            free_if_valid__10TObjPlayerFi((int) (M2C_FIELD(lbl_805D58EC, M2C_UNK *, var_r31)));
            var_r30 += 1;
            var_r31 += 4;
        } while (var_r30 < 3);
        p = lbl_805D58EC;
        if (p != 0U) {
            free__11TOBoss4RockFUi(p);
            lbl_805D58EC = 0U;
        }
    }
    p = lbl_805D58E8;
    if (p != 0U) {
        TLobby__sub_8001FE7C(p, (int) (1));
        lbl_805D58E8 = 0U;
    }
}
#pragma pop

}
