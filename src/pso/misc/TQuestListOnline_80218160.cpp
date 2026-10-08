#include "types.h"

struct Obj_802181B0 { u8 pad[0x20]; u32 state; };

extern "C" {
void reset_state__16TQuestListOnlineFPv(void* a0);
void build_list_window__16TQuestListOnlineFPv(void *);
void show_info_window__16TQuestListOnlineFPv(void *);
void TQuestListOnline__sub_80217C1C(void *);
void handle_quest_confirm__16TQuestListOnlineFPv(void *);
int run_task__16TQuestListOnlineFPv(void *);
void request_quest_list__16TQuestListOnlineFi(s32);
void TQuestListOnline__sub_80217B30(void *);
void invoke_callback_28_and_queue_destruction__16TQuestListOnlineFPv(void *);
void invoke_callback_2c_and_queue_destruction__16TQuestListOnlineFPv(void *);
void invoke_callback_30_and_queue_destruction__16TQuestListOnlineFPv(void *);
void invoke_callback_34_and_queue_destruction__16TQuestListOnlineFPv(void *);
void TQuestListOnline__vt9(Obj_802181B0 *arg0);
}

extern "C" {

void reset_state__16TQuestListOnlineFPv(void* a0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
int fn_801DB6F0(void*);

    extern int TLobby__data_805D5580;
    extern int lbl_805D61E8;
    extern int lbl_805D61EC;
    extern int lbl_805D61F0;
    extern int lbl_805D61F4;
void reset_state__16TQuestListOnlineFPv(void* a0) { fn_801DB6F0((void*)(TLobby__data_805D5580)); lbl_805D61E8 = 0; lbl_805D61F0 = 0; lbl_805D61EC = 0; lbl_805D61F4 = 0; set_field_20__12TQuestListVMFPvi(a0, (void*)12); }
void TQuestListOnline__vt9(Obj_802181B0 *arg0) {
    switch (arg0->state) {
    case 0: reset_state__16TQuestListOnlineFPv((void*)(arg0)); break;
    case 1: build_list_window__16TQuestListOnlineFPv(arg0); break;
    case 2: show_info_window__16TQuestListOnlineFPv(arg0); break;
    case 3: TQuestListOnline__sub_80217C1C(arg0); break;
    case 4: handle_quest_confirm__16TQuestListOnlineFPv(arg0); break;
    case 5: run_task__16TQuestListOnlineFPv(arg0); break;
    case 6: request_quest_list__16TQuestListOnlineFi((s32)arg0); break;
    case 7: TQuestListOnline__sub_80217B30(arg0); break;
    case 8: invoke_callback_28_and_queue_destruction__16TQuestListOnlineFPv(arg0); break;
    case 9: invoke_callback_2c_and_queue_destruction__16TQuestListOnlineFPv(arg0); break;
    case 10: invoke_callback_30_and_queue_destruction__16TQuestListOnlineFPv(arg0); break;
    case 11: invoke_callback_34_and_queue_destruction__16TQuestListOnlineFPv(arg0); break;
    case 12: return;
    }
}

}
