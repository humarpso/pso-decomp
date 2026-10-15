#include "types.h"

extern "C" {
extern u8 main_menu_scene_active_flag;
void TKeyBoardControl__sub_80290D10(void);
}

extern "C" {

void update_main_menu_scene__16TKeyBoardControlFv(void);
s32 TKeyBoardControl__sub_8000F90C(s32);
s32 TKeyBoardControl__sub_8000F91C(s32);
s32 TKeyBoardControl__sub_8000F92C();
s32 reset_controller_input_state();
s32 set_copy_clear_color_argb(s32, s32, s32);
s32 init_creation_menu_scene();
s32 render_tick__Fv();

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
