#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_item_follow_effect__10TObjPlayerFPv(void *arg0);
void *__dt__10TObjPlayerFPvs(void *arg0, s16 arg1);
s32 get_flag_40__8TItemMagFPv(s32);
s32 TLobby__sub_80101AB0(s32);
u32 get_item_ctrl__10TObjPlayerFv();
s8 TObjPlayer__sub_80102C30();
s32 draw_icon__10TObjPlayerFPvii(s32, s32, M2C_UNK *);
M2C_UNK clear_active_flag__13TParticleCtrlFPv(u32);
M2C_UNK enable__13TParticleCtrlFPv(u32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(u32, M2C_UNK *);
s32 obj_testFlags30(s32, M2C_UNK);
void queue_destruction__7TObjectFv(void *);

void update_item_follow_effect__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8[5];
    s32 var_r31;
    s32 var_r30;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != get_item_ctrl__10TObjPlayerFv()) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    var_r31 = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        var_r30 = TLobby__sub_80101AB0(M2C_FIELD(arg0, s32 *, 0x1C));
        if ((var_r30 != 0) && (TObjPlayer__sub_80102C30() == 2)) {
            var_r31 = 1;
            if (draw_icon__10TObjPlayerFPvii(var_r30, M2C_FIELD(arg0, s32 *, 0x20), sp8) != 0) {
                copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, u32 *, 0x24), sp8);
                if ((get_flag_40__8TItemMagFPv(var_r30) == 0) || (obj_testFlags30(var_r30, 0x08000000) == 0)) {
                    clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, u32 *, 0x24));
                } else {
                    enable__13TParticleCtrlFPv(M2C_FIELD(arg0, u32 *, 0x24));
                }
            } else {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, u32 *, 0x24));
            }
        }
    }
    if (var_r31 == 0) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}

extern M2C_UNK lbl_804A2660[];

void *__dt__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2660;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x24))); }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
