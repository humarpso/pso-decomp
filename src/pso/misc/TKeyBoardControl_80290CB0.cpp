#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u8 main_menu_scene_active_flag;
void TKeyBoardControl__sub_80290D10(void);
}

extern "C" {

void update_main_menu_scene__16TKeyBoardControlFv(void);
M2C_UNK TKeyBoardControl__sub_8000F90C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F92C();
M2C_UNK reset_controller_input_state();
M2C_UNK set_copy_clear_color_argb(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK init_creation_menu_scene();
M2C_UNK render_tick__Fv();

extern u8 main_menu_scene_active_flag;

void update_main_menu_scene__16TKeyBoardControlFv(void) {
    set_copy_clear_color_argb(0, 0, 0xFF);
    reset_controller_input_state();
    TKeyBoardControl__sub_8000F90C(2);
    TKeyBoardControl__sub_8000F91C(6);
    if ((u8) main_menu_scene_active_flag != 0) {
        TKeyBoardControl__sub_80290D10();
        TKeyBoardControl__sub_8000F92C();
        return;
    }
    init_creation_menu_scene();
    render_tick__Fv();
}
void TKeyBoardControl__sub_80290D10(void) { (*(unsigned char *)&main_menu_scene_active_flag) = 0; }

}
