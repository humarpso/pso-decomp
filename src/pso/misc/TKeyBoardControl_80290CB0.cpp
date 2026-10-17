#include "types.h"
#include "pso/system/main_loop.h"
#include "pso/misc/TKeyBoardControl.h"

extern "C" {
extern u8 main_menu_scene_active_flag;
void TKeyBoardControl__sub_80290D10(void);
void TKeyBoardControl__sub_8000F90C(s32 arg0);
void TKeyBoardControl__sub_8000F91C(s32 arg0);
s32 TKeyBoardControl__sub_8000F92C();
void reset_controller_input_state(void);
s32 set_copy_clear_color_argb(s32, s32, s32);
void init_creation_menu_scene(void);

void TKeyBoardControl::update_main_menu_scene() {
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
    render_tick();
}
void TKeyBoardControl__sub_80290D10(void) { (*(unsigned char *)&main_menu_scene_active_flag) = 0; }

}
