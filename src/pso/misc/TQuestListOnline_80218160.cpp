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
void decompress_quest_list_buffers__16TQuestListOnlineFPv(void *);
void invoke_callback_28_and_queue_destruction__16TQuestListOnlineFPv(void *);
void invoke_callback_2c_and_queue_destruction__16TQuestListOnlineFPv(void *);
void invoke_callback_30_and_queue_destruction__16TQuestListOnlineFPv(void *);
void invoke_callback_34_and_queue_destruction__16TQuestListOnlineFPv(void *);
void TQuestListOnline__vt9(Obj_802181B0 *arg0);
}

extern "C" {

void reset_state__16TQuestListOnlineFPv(void* a0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
int send_quest_menu_request__9TProtocolFv(void*);

    extern int TLobby__protocol_instance;
    extern int online_quest_bin_data;
    extern int online_quest_dat_buffer;
    extern int quest_bin_decompressed_size;
    extern int lbl_805D61F4;
void reset_state__16TQuestListOnlineFPv(void* a0) { send_quest_menu_request__9TProtocolFv((void*)(TLobby__protocol_instance)); online_quest_bin_data = 0; quest_bin_decompressed_size = 0; online_quest_dat_buffer = 0; lbl_805D61F4 = 0; set_field_20__12TQuestListVMFPvi(a0, (void*)12); }
void TQuestListOnline__vt9(Obj_802181B0 *arg0) {
    switch (arg0->state) {
    case 0: reset_state__16TQuestListOnlineFPv((void*)(arg0)); break;
    case 1: build_list_window__16TQuestListOnlineFPv(arg0); break;
    case 2: show_info_window__16TQuestListOnlineFPv(arg0); break;
    case 3: TQuestListOnline__sub_80217C1C(arg0); break;
    case 8: handle_quest_confirm__16TQuestListOnlineFPv(arg0); break;
    case 4: run_task__16TQuestListOnlineFPv(arg0); break;
    case 5: request_quest_list__16TQuestListOnlineFi((s32)arg0); break;
    case 6: decompress_quest_list_buffers__16TQuestListOnlineFPv(arg0); break;
    case 9: invoke_callback_28_and_queue_destruction__16TQuestListOnlineFPv(arg0); break;
    case 10: invoke_callback_2c_and_queue_destruction__16TQuestListOnlineFPv(arg0); break;
    case 7: invoke_callback_30_and_queue_destruction__16TQuestListOnlineFPv(arg0); break;
    case 11: invoke_callback_34_and_queue_destruction__16TQuestListOnlineFPv(arg0); break;
    case 12: return;
    }
}

}
