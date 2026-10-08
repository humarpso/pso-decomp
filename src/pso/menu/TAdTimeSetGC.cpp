#include "pso/TAdTimeSetGC.h"
extern "C" {
s32 poll_load_status__23TAdSinglePlyChrSelectGCFPv();
void change_state__23TAdSinglePlyChrSelectGCFPvi(void *, int);
}
extern "C" {
extern void *lbl_804E32A4[];
}

extern "C" {
void TWindow__close(void *);
void queue_destruction__7TObjectFv(void *);
}

#pragma opt_common_subs off
void TAdTimeSetGC::run_task() {
  TAdTimeSetGCStateAction *entry_action;
  load_status = poll_load_status__23TAdSinglePlyChrSelectGCFPv();
  if (load_status & 1)
  {
    change_state__23TAdSinglePlyChrSelectGCFPvi(this, 0);
  }
  TAdTimeSetGCStateAction action = *(entry_action = &((TAdTimeSetGCStateActions *)lbl_804E32A4)[state_index].task);
  if (action != 0)
  {
    (this->*action)();
  }
  --timer;
  if (timer < 0)
  {
    timer = 0;
  }
}
#pragma opt_common_subs reset

TAdTimeSetGC::~TAdTimeSetGC() {
    if (owned_object != NULL) {
        delete owned_object;
        owned_object = NULL;
    }
    if (window != NULL) {
        TWindow__close(window);
        window = NULL;
    }
    if (queued_object != NULL) {
        queue_destruction__7TObjectFv(queued_object);
        queued_object = NULL;
    }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdTimeSetGC__ct(void *arg0);
void TAdTimeSetGC__sub_802E34A4(void);
void TAdTimeSetGC__sub_802E34A8(void);
void stop_audio_streams__6TLobbyFv(void);
void __ct__7TObjectFP7TObject(void *);
void init__23TAdSinglePlyChrSelectGCFPv(void *);

extern M2C_UNK __vt__12TAdTimeSetGC[];
extern void *TAdTimeSetGC_class_name;

void *TAdTimeSetGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TAdTimeSetGC;
    M2C_FIELD(arg0, void **, 0x0) = TAdTimeSetGC_class_name;
    init__23TAdSinglePlyChrSelectGCFPv(arg0);
    stop_audio_streams__6TLobbyFv();
    return arg0;
}

void TAdTimeSetGC__sub_802E34A4(void) {  }
void TAdTimeSetGC__sub_802E34A8(void) {  }

}

extern "C" void draw_date_time__23TAdSinglePlyChrSelectGCFPv();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E13C8();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E1F8C();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E1FAC();
extern "C" void show_confirm_dialog__23TAdSinglePlyChrSelectGCFPv();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2158();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E22A4();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E23E8();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2450();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E24B8();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2520();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2588();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2610();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2848();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E289C();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2A7C();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2A88();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2BC8();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2BD4();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2D3C();
extern "C" void handle_confirm_menu__23TAdSinglePlyChrSelectGCFPv();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2F20();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2F68();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E2FEC();
extern "C" void TAdSinglePlyChrSelectGC__sub_802E3038();
extern "C" void report_card_status__23TAdSinglePlyChrSelectGCFPv();
extern "C" void build_selection_summary__23TAdSinglePlyChrSelectGCFPv();
extern "C" void close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv();
extern "C" void close_scene__23TAdSinglePlyChrSelectGCFi();
extern "C" void create_backgrounds__23TAdSinglePlyChrSelectGCFi();
extern "C" void create_result_bg__23TAdSinglePlyChrSelectGCFi();
extern "C" void ensure_player_loaded__23TAdSinglePlyChrSelectGCFPv();
extern "C" void ensure_system_file_loaded__23TAdSinglePlyChrSelectGCFPv();
extern "C" void init_menu_window__23TAdSinglePlyChrSelectGCFi();
extern "C" void init_screen__23TAdSinglePlyChrSelectGCFPv();
extern "C" void open_char_select__23TAdSinglePlyChrSelectGCFi();
extern "C" void rebuild_and_maybe_close__23TAdSinglePlyChrSelectGCFPv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void reset_on_load_complete__23TAdSinglePlyChrSelectGCFPv();
extern "C" void run_task__7TObjectFv();
extern "C" void try_setup__23TAdSinglePlyChrSelectGCFi();
extern "C" void update_char_timer__23TAdSinglePlyChrSelectGCFPv();
extern "C" void update_close_on_load__23TAdSinglePlyChrSelectGCFPv();
extern "C" void update_close_timer__23TAdSinglePlyChrSelectGCFPv();
extern "C" void update_load_countdown__23TAdSinglePlyChrSelectGCFPv();
extern "C" void update_load_state__23TAdSinglePlyChrSelectGCFPv();
extern "C" void update_load_state__23TAdSinglePlyChrSelectGCFi();
extern "C" void update_state__23TAdSinglePlyChrSelectGCFPv();
extern "C" void update_state__23TAdSinglePlyChrSelectGCFi();
extern "C" void update_timer__23TAdSinglePlyChrSelectGCFPv();
__declspec(section ".data") void *lbl_804E3040[2] = {
    (void *)0x0, (void *)0x42b40000,
};
__declspec(section ".data") void *lbl_804E3048[2] = {
    (void *)0x0, (void *)0x0,
};
void *lbl_804E3050[149] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0xffffffff,
    (void *)&rebuild_and_maybe_close__23TAdSinglePlyChrSelectGCFPv, (void *)0x0, (void *)0xffffffff, (void *)&report_card_status__23TAdSinglePlyChrSelectGCFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E3038, (void *)0x0,
    (void *)0xffffffff, (void *)&ensure_system_file_loaded__23TAdSinglePlyChrSelectGCFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&TAdSinglePlyChrSelectGC__sub_802E2FEC, (void *)0x0, (void *)0xffffffff, (void *)&update_load_state__23TAdSinglePlyChrSelectGCFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E2F68, (void *)0x0,
    (void *)0xffffffff, (void *)&ensure_player_loaded__23TAdSinglePlyChrSelectGCFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&TAdSinglePlyChrSelectGC__sub_802E2F20, (void *)0x0, (void *)0xffffffff, (void *)&reset_on_load_complete__23TAdSinglePlyChrSelectGCFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&open_char_select__23TAdSinglePlyChrSelectGCFi, (void *)0x0,
    (void *)0xffffffff, (void *)&handle_confirm_menu__23TAdSinglePlyChrSelectGCFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv, (void *)0x0, (void *)0xffffffff, (void *)&update_load_state__23TAdSinglePlyChrSelectGCFi,
    (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E2D3C, (void *)0x0,
    (void *)0xffffffff, (void *)&update_load_countdown__23TAdSinglePlyChrSelectGCFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&close_scene__23TAdSinglePlyChrSelectGCFi, (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E2BD4,
    (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E2BC8, (void *)0x0,
    (void *)0xffffffff, (void *)&update_timer__23TAdSinglePlyChrSelectGCFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&create_backgrounds__23TAdSinglePlyChrSelectGCFi, (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E2A88,
    (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E2A7C, (void *)0x0,
    (void *)0xffffffff, (void *)&update_char_timer__23TAdSinglePlyChrSelectGCFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&init_screen__23TAdSinglePlyChrSelectGCFPv, (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E289C,
    (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E2848, (void *)0x0,
    (void *)0xffffffff, (void *)&update_close_timer__23TAdSinglePlyChrSelectGCFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&update_state__23TAdSinglePlyChrSelectGCFi, (void *)0x0, (void *)0xffffffff, (void *)&try_setup__23TAdSinglePlyChrSelectGCFi,
    (void *)0x0, (void *)0xffffffff, (void *)&update_close_on_load__23TAdSinglePlyChrSelectGCFPv, (void *)0x0,
    (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E2610, (void *)0x0, (void *)0xffffffff,
    (void *)&TAdSinglePlyChrSelectGC__sub_802E2588, (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E2520,
    (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E24B8, (void *)0x0,
    (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E2450, (void *)0x0, (void *)0xffffffff,
    (void *)&TAdSinglePlyChrSelectGC__sub_802E24B8, (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E23E8,
    (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E22A4, (void *)0x0,
    (void *)0xffffffff, (void *)&init_menu_window__23TAdSinglePlyChrSelectGCFi, (void *)0x0, (void *)0xffffffff,
    (void *)&TAdSinglePlyChrSelectGC__sub_802E22A4, (void *)0x0, (void *)0xffffffff, (void *)&build_selection_summary__23TAdSinglePlyChrSelectGCFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E22A4, (void *)0x0,
    (void *)0xffffffff, (void *)&create_result_bg__23TAdSinglePlyChrSelectGCFi, (void *)0x0, (void *)0xffffffff,
    (void *)&TAdSinglePlyChrSelectGC__sub_802E2158, (void *)0x0, (void *)0xffffffff, (void *)&show_confirm_dialog__23TAdSinglePlyChrSelectGCFPv,
    (void *)0x0, (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E1FAC, (void *)0x0,
    (void *)0xffffffff, (void *)&TAdSinglePlyChrSelectGC__sub_802E1F8C, (void *)0x0, (void *)0xffffffff,
    (void *)&update_state__23TAdSinglePlyChrSelectGCFPv,
};
void *lbl_804E32A4[150] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *lbl_804E34FC[6] = {
    (void *)0x0, (void *)0x0, (void *)&TAdSinglePlyChrSelectGC__sub_802E13C8, (void *)&run_task__7TObjectFv,
    (void *)&draw_date_time__23TAdSinglePlyChrSelectGCFPv, (void *)&render_shadows__7TObjectFv,
};
