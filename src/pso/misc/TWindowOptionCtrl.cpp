#include "types.h"

extern "C" {

void set_params__17TWindowOptionCtrlFPvsc(void *arg0, s16 arg1, s8 arg2);
void apply_selection_change__17TWindowOptionCtrlFPv(void *arg0);
void init_selection_indices__17TWindowOptionCtrlFPv(void *arg0);
void apply_and_close__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1);
s32 handle_input__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1);
void *get_global_state__23TAdSinglePlyChrSelectGCFv();
s32 set_language__19TWindowKeyBoardSoftFc(s8);
s32 close_option_window__6TLobbyFv();
s32 init_layout_positions__6TLobbyFv();
s16 init_sound_mode__6TLobbyFPv();
s32 set_sound_output_mode__6TLobbyFi(s16);
s32 stop_audio_streams__6TLobbyFv();
s32 play_area_music();
s32 fn_8023F160();
s32 fn_8023F18C();
s32 window_request_refresh(u32);
u32 create_menu__17TWindowOptionCtrlFv(void *);
s32 fn_8036A648(s32);
s32 queue_destruction__7TObjectFv(void *);

void set_params__17TWindowOptionCtrlFPvsc(void *arg0, s16 arg1, s8 arg2) {
    void *temp_r3;

    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        *(s16 *)((s8 *)temp_r3 + 4) = arg1;
        *(s8 *)((s8 *)temp_r3 + 6) = arg2;
    }
}

void apply_selection_change__17TWindowOptionCtrlFPv(void *arg0) {
    if ((s16) *(s16 *)((s8 *)arg0 + 0x1E) != (s16) *(s16 *)((s8 *)arg0 + 0x20)) {
        stop_audio_streams__6TLobbyFv();
        set_sound_output_mode__6TLobbyFi(*(s16 *)((s8 *)arg0 + 0x20));
        init_layout_positions__6TLobbyFv();
    }
}

void init_selection_indices__17TWindowOptionCtrlFPv(void *arg0) {
    s16 temp_r3;

    temp_r3 = init_sound_mode__6TLobbyFPv();
    *(s16 *)((s8 *)arg0 + 0x1E) = temp_r3;
    *(s16 *)((s8 *)arg0 + 0x20) = temp_r3;
}

void apply_and_close__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1) {
    stop_audio_streams__6TLobbyFv();
    stop_audio_streams__6TLobbyFv();
    close_option_window__6TLobbyFv();
    fn_8036A648(arg1);
    play_area_music();
    *(u8 *)((s8 *)arg0 + 0x1D) = (u8) (*(u8 *)((s8 *)arg0 + 0x1D) | 2);
}

s32 handle_input__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1) {
    if (set_language__19TWindowKeyBoardSoftFc((s8) arg1) != 0) {
        fn_8023F160();
        fn_8023F18C();
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x34));
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x28) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x28));
            *(u32 *)((s8 *)arg0 + 0x28) = 0U;
        }
        *(u32 *)((s8 *)arg0 + 0x28) = create_menu__17TWindowOptionCtrlFv(arg0);
        window_request_refresh(*(u32 *)((s8 *)arg0 + 0x28));
        return 1;
    }
    return 0;
}

}
