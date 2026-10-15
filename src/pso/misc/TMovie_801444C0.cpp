#include "types.h"
#include "pso/misc/TMovie.h"

extern "C" {

s32 is_playback_finished__6TMovieFv(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 TKeyBoardControl__sub_8000F91C(s32);
s32 TAdEndText__sub_8001B41C();
s32 run_disk_error_check__6TLobbyFv();
s32 activate_main_menu_scene();
s32 fn_801449F0();
s32 check_reset_button__16TKeyBoardControlFv();
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, s32);
s8 get_opening_movie_purpose();
s8 func_801A5E54__Fv();

extern s8 controller_input_state[];
extern s8 controller_physical_port_bank[];

s32 TMovie::check_skip_input() {
    void *var_r31;
    s32 var_r30;
    s8 temp_r3;

    if (TAdEndText__sub_8001B41C() != 0) {
        if ((run_disk_error_check__6TLobbyFv() == 0) || (is_playback_finished__6TMovieFv(*(s32 *)((s8 *)this + 0x20)) != 0) || (func_801A5E54__Fv() != 0)) {
            if ((run_disk_error_check__6TLobbyFv() == 0) || (func_801A5E54__Fv() != 0)) {
                fn_801449F0();
            }
            return 1;
        }
        goto block_return0;
    }
    temp_r3 = get_opening_movie_purpose();
    switch (temp_r3) {
    case 0:
        var_r31 = controller_physical_port_bank + 0x20;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 4) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 2) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x400) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x200) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 8) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x10) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x20) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x40) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x80) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x20000) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x10000) != 0) goto block_fn_8000F91C;
        var_r31 = controller_input_state + 0x160;
        if (test_flag_4c__23TAdSinglePlyChrSelectGCFv(var_r31, 4) != 0) goto block_fn_8000F91C;
        if (test_flag_4c__23TAdSinglePlyChrSelectGCFv(var_r31, 2) != 0) goto block_fn_8000F91C;
        if (run_disk_error_check__6TLobbyFv() == 0) goto block_fn_8000F91C;
        if (check_reset_button__16TKeyBoardControlFv() != 0) goto block_fn_8000F91C;
        if (is_playback_finished__6TMovieFv(*(s32 *)((s8 *)this + 0x20)) == 0) goto block_return0;
block_fn_8000F91C:
        TKeyBoardControl__sub_8000F91C(9);
        return 1;
    case 1:
        var_r30 = 0;
        if (check_reset_button__16TKeyBoardControlFv() != 0) {
            var_r30 = 1;
        }
        var_r31 = controller_physical_port_bank + 0x20;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 2) != 0) goto block_call_func;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 8) != 0) goto block_call_func;
        var_r31 = controller_input_state + 0x160;
        if (test_flag_4c__23TAdSinglePlyChrSelectGCFv(var_r31, 4) != 0) goto block_call_func;
        if (test_flag_4c__23TAdSinglePlyChrSelectGCFv(var_r31, 2) != 0) goto block_call_func;
        if (run_disk_error_check__6TLobbyFv() == 0) goto block_call_func;
        if (var_r30 != 0) goto block_call_func;
        if (is_playback_finished__6TMovieFv(*(s32 *)((s8 *)this + 0x20)) == 0) goto block_return0;
block_call_func:
        if ((func_801A5E54__Fv() != 0) || (var_r30 != 0)) {
            activate_main_menu_scene();
        }
        return 1;
    }
block_return0:
    return 0;
}

}
