#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowKeyBoardSoft.h"

extern "C" {

void *get_global_state__23TAdSinglePlyChrSelectGCFv();
s16 init_sound_mode__6TLobbyFPv();
s32 play_area_music();
void fn_8023F160(void);
void fn_8023F18C(void);
void window_request_refresh(u8 *arg0);
u32 create_menu__17TWindowOptionCtrlFv(void *);
s32 fn_8036A648(s32);
void queue_destruction__7TObjectFv(void *arg0);

void TWindowOptionCtrl::set_params(void *arg0, s16 arg1, s8 arg2) {
    void *temp_r3;

    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        *(s16 *)((s8 *)temp_r3 + 4) = arg1;
        *(s8 *)((s8 *)temp_r3 + 6) = arg2;
    }
}

void TWindowOptionCtrl::apply_selection_change() {
    if ((s16) *(s16 *)((s8 *)this + 0x1E) != (s16) *(s16 *)((s8 *)this + 0x20)) {
        TLobby::stop_audio_streams();
        TLobby::set_sound_output_mode(*(s16 *)((s8 *)this + 0x20));
        TLobby::init_layout_positions();
    }
}

void TWindowOptionCtrl::init_selection_indices() {
    s16 temp_r3;

    temp_r3 = init_sound_mode__6TLobbyFPv();
    *(s16 *)((s8 *)this + 0x1E) = temp_r3;
    *(s16 *)((s8 *)this + 0x20) = temp_r3;
}

void TWindowOptionCtrl::apply_and_close(s32 arg1) {
    TLobby::stop_audio_streams();
    TLobby::stop_audio_streams();
    TLobby::close_option_window();
    fn_8036A648(arg1);
    play_area_music();
    *(u8 *)((s8 *)this + 0x1D) = (u8) (*(u8 *)((s8 *)this + 0x1D) | 2);
}

s32 TWindowOptionCtrl::handle_input(s32 arg1) {
    if (TWindowKeyBoardSoft::set_language((s8) arg1) != 0) {
        fn_8023F160();
        fn_8023F18C();
        if ((u32) *(u32 *)((s8 *)this + 0x34) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x34));
            *(u32 *)((s8 *)this + 0x34) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)this + 0x28) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x28));
            *(u32 *)((s8 *)this + 0x28) = 0U;
        }
        *(u32 *)((s8 *)this + 0x28) = create_menu__17TWindowOptionCtrlFv(this);
        window_request_refresh((u8 *)(*(u32 *)((s8 *)this + 0x28)));
        return 1;
    }
    return 0;
}

}
