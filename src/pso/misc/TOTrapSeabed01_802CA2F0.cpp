#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_effect_layers__14TOTrapSeabed01FPv(u8 *arg0);
M2C_UNK PPCSync();
M2C_UNK TOComputerMachine01__sub_8023DDC8(int, int, int, void *, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(int, int, f32);
M2C_UNK TObjFish__sub_803DA798(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_80141A30();
M2C_UNK fn_803DC88C(void *);
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK set_depth_buffer_settings_3__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(int);

extern M2C_UNK trigger_by_id__14TOTrapSeabed01FUi[];
extern s32 lbl_805D53A4;
extern s32 TOTrapSeabed01__data_805D6814;
extern u8 *lbl_805D6818;
extern s32 lbl_805D681C;
extern s32 lbl_805D6820;

void render_effect_layers__14TOTrapSeabed01FPv(u8 *arg0) {
    TObjFish__sub_803DA798((void *) (TOTrapSeabed01__data_805D6814));
    if ((s32) lbl_805D53A4 != (s32) lbl_805D681C) {
        if (((void *) lbl_805D6818 != NULL) && ((s32) lbl_805D6820 != -1)) {
            TOComputerMachine01__sub_8023DDC8((int) (M2C_FIELD(lbl_805D6818, s32 *, 4)), (int) (0), (int) (-0x14), (void *) ((u16) lbl_805D6820), (int) (1));
            PPCSync();
        }
        lbl_805D681C = lbl_805D53A4;
    }
    fn_803DC88C((void *) (trigger_by_id__14TOTrapSeabed01FUi));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    set_depth_buffer_settings_3__Fv();
    set_depth_buffer_settings_id__FUl((int) (1));
    TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xF8)), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    func_80141618__Fv();
    fn_80141A30();
    begin_effect_render__13TParticleCtrlFv();
    set_depth_buffer_settings_1__Fv();
    set_depth_buffer_settings_id__FUl((int) (2));
    TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xF8)), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    func_80141618__Fv();
    fn_80141A30();
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
    fn_803DC88C((void *) (NULL));
}

}
