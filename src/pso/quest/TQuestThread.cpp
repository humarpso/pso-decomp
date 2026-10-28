#include "types.h"
#include "pso/TObject.h"
#include "pso/TObjItemNameSelect.h"
#include "pso/TObjItemOKWindow.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TQuestListOnline.h"
#include "pso/misc/TQuestListVM.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/misc/TScene.h"
#include "pso/misc/TUnk_804C8678.h"
#include "pso/misc/TUnk_804D0618.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TWindowMakeTeam.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/quest/AreaDialogueScripts.h"
#include "pso/quest/QuestVm.h"
#include "pso/quest/TQuestThread.h"
#include "pso/ui/Language.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct ItemNameEntry { s32 text_id; s32 value; };
struct WindowPos { f32 x; f32 y; };
struct QuestScriptHeader { u8 pad[0x14]; char name[1]; };
struct ByteBlock_20 { u8 bytes[0x20]; };
struct ByteBlock_100 { u8 bytes[0x100]; };

extern "C" {
s32 memcpy(s32, s32, s32);
int memset(void *, void *, void *);
s32 strcmp(s32, s32 *);
s32 strncpy(void *, void *, int);
void mem_free(void *p);
s32 get_main_phase();
s32 get_current_floor(void);
void copy_name(s32 name);
void read_disc_file(void *, s32);
s32 get_text_collection(s32 id);
int queue_destruction__7TObjectFv(void *);
s32 check_value_equals__13TUnk_804B6C24Fl(void *, s32);
s32 init_quest_script_context(s32, void *);
s32 bswap_header__6TLobbyFPv();
void *get_player_by_client_id(s32);
s32 check_flag_100__10TObjPlayerFPv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 has_player_active_menu__11TWindowCtrlFv(s32);
s32 get_window_id__11TWindowCtrlFv(void);
void complete_actor_speech_balloons(s32);
s32 is_actor_speech_balloon_done(s32);
void TLobby__sub_8024AC20(s32);
void TWindow__close(void *);
void *get_window_layout_position(s32);
void *TQuestVmDownLoadServer__sub_8006EF6C(s32);
void *check_room_seq_4__16TAdChrSelASlotGCFl(void *, s32);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void *p, int a1, int a2, int a3);
void send_and_handle__6TLobbyFii(void *, void *, s32);
void *update_window_mode_from_progress__6TLobbyFPv(void *, WindowPos *);
void TWindowSubComCard__sub_80265500(u8 *);
s32 align_menu_entry_positions(u32);
s32 get_selected_menu_value(void *);
s32 select_cursor_entry__22TWindowSubShortCutListFv(void *);
void TWindowHelpItem__set_displayed_item_by_id(void *, s32);
u32 TKeyBoardControl__ct(void *, void *, s32, s32, s32, s32);
void fn_80131ADC(u8 *, u8 *);
void fn_80131B18(u8 *, u8 *);
char *fn_8026CB5C(void);
int TQuestListVM__sub_801F6530(void);
int TQuestListOnline__sub_801F6540(void);
s32 *TQuestThread__sub_801F6548(void);
void TQuestThread__sub_801F5D88(void);
void fn_801F6520(void *p);
u32 __nw__7TObjectFUl(s32);

extern s32 local_client_id;
extern s32 game_difficulty_selection;
extern s32 enable_v2_features;
extern s32 evt2_random_enemies_mode;
extern s32 tl_00;
extern s32 tl_04;
extern s32 tl_su;
extern u8 controller_input_state[];
}

extern const char *TQuestThread__class_name;
extern const char *TQuestThreadBoard__class_name;
extern const char *TObjItemNameEntry__class_name;
extern const char *TObjItemNameSelect__class_name;
extern TUnk_804C8678 *quest_mission_manager;
extern TUnk_804C8678 *quest_area_manager;
extern TQuestThreadBoard *quest_thread_board;
extern s32 TQuestThread__floor_handler_ids[18];
extern u8 quest_board_handlers[0xD8];
extern char lbl_80512B18[0x10];
extern int item_name_selection_index;
extern ItemNameEntry *item_name_selection_table;
extern ItemNameEntry lbl_804C8410[];
extern ItemNameEntry lbl_804C8488[];
extern char lbl_8044A5D0[];
extern char lbl_8044A640[];
extern char lbl_805DC50C[3];
extern s32 lbl_805DC4FC;
extern const f32 lbl_805DC4EC;
extern const f32 lbl_805DC4F0;
extern const f32 lbl_805DC4F4;
extern const f32 lbl_805DC4F8;
extern const f32 lbl_805DC500;
extern const f32 lbl_805DC504;
extern const f32 lbl_805DC508;

TObjItemNameSelect::~TObjItemNameSelect() {
    if (m_20 != nullptr) { TWindow__close(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { TWindow__close(m_1c); m_1c = nullptr; }
}

TObjItemNameSelect::TObjItemNameSelect(TObject *parent) : TObject(parent) {
    WindowPos pos;
    s32 i;

    m_name = TObjItemNameSelect__class_name;
    item_name_selection_table = TLobby::get_instance() == 0 ? lbl_804C8410 : lbl_804C8488;
    m_1c = check_room_seq_4__16TAdChrSelASlotGCFl(get_window_layout_position(0x58), 0x19);
    for (i = 0; item_name_selection_table[i].text_id != -1; i++) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(m_1c, get_text_collection(item_name_selection_table[i].text_id), 6, i);
    }
    ((TWindowSubComCardList *)m_1c)->set_scroll_target(lbl_805DC500, lbl_805DC504);
    TWindowSubComCard__sub_80265500((u8 *)m_1c);
    ((TLobby *)m_1c)->set_field_1c(lbl_805DC508);
    pos.x = lbl_805DC4F4;
    pos.y = lbl_805DC4F8;
    m_20 = update_window_mode_from_progress__6TLobbyFPv(get_window_layout_position(0x55), &pos);
    if (m_20 != NULL) {
        send_and_handle__6TLobbyFii(m_20, TQuestVmDownLoadServer__sub_8006EF6C(0x46), 0x81);
    }
}

void TObjItemNameEntry::set_entered_name(const char *name) {
    strncpy(lbl_80512B18, (void *)name, 8);
    lbl_80512B18[8] = 0;
}

s32 TObjItemNameEntry::process_keyboard_input() {
    s32 text;

    if (m_1c != NULL && ((TWindowSubComCard *)m_1c)->update_keyboard() != 0) {
        text = ((TWindowSubComCard *)m_1c)->realloc_buffer();
        if (strcmp(text, &lbl_805DC4FC) == 0) {
            mem_free((void *)text);
            free_menu_object(m_1c);
            return 0;
        }
        if (TWindowSubComCard::contains_profanity((char *)text) != 0) {
            free_menu_object(m_1c);
            mem_free((void *)text);
            return 0;
        }
        set_entered_name((const char *)text);
        mem_free((void *)text);
        return 1;
    }
    return 0;
}

void *TObjItemNameEntry::create(void *parent) {
    return new TObjItemNameEntry((TObject *)parent);
}

TObjItemNameEntry::~TObjItemNameEntry() {
    if (m_20 != nullptr) { TWindow__close(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { queue_destruction__7TObjectFv(m_1c); m_1c = nullptr; }
}

TObjItemNameEntry::TObjItemNameEntry(TObject *parent) : TObject(parent) {
    u32 keyboard;

    m_name = TObjItemNameEntry__class_name;
    if ((keyboard = __nw__7TObjectFUl(0x2C)) != 0U) {
        keyboard = TKeyBoardControl__ct((void *)keyboard, this, 8, 0, 1, local_client_id);
    }
    m_1c = (void *)keyboard;
    if (m_1c != NULL) {
        ((TWindowMakeTeam *)m_1c)->set_sub_position((u8 *)get_window_layout_position(0xBF));
        fn_80131ADC((u8 *)m_1c, (u8 *)get_window_layout_position(0xC0));
        fn_80131B18((u8 *)m_1c, (u8 *)fn_8026CB5C());
    }
    m_20 = check_room_seq_4__16TAdChrSelASlotGCFl(get_window_layout_position(0x56), 1);
    if (m_20 != NULL) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(m_20, (int)TQuestVmDownLoadServer__sub_8006EF6C(0x47), 0x81, 0);
    }
    ((TWindowSubComCardList *)m_20)->set_scroll_target(lbl_805DC4EC, lbl_805DC4F0);
    align_menu_entry_positions((u32)m_20);
    TQuestThread::set_status_flag_80(m_20);
}

s32 TQuestThreadBoard::create_instance(int label) {
    TQuestThreadBoard *board;

    if (quest_mission_manager != NULL) {
        board = new TQuestThreadBoard(quest_mission_manager, label);
        board->set_parent((TObject *)tl_00);
        return (s32)board;
    }
    return 0;
}

void TQuestThreadBoard::run_task() {
    TObject *parent = m_up;

    switch (state) {
    case QST_RUNNING:
    case QST_SUSPEND_SYNC:
        state = ctx.dispatch();
        break;
    case QST_SUSPEND_RETURN:
        queue_destruction__7TObjectFv(this);
        break;
    case QST_SUSPEND_EXIT:
        TQuestThread::queue_destruction(parent);
        break;
    case QST_WAIT_MESSAGE: {
        void *player = get_player_by_client_id(local_client_id);
        if (player != NULL && check_flag_100__10TObjPlayerFPv(player) == 0 &&
            TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 4) != 0) {
            s32 id = get_window_id__11TWindowCtrlFv();
            if (is_actor_speech_balloon_done(id) == 0) {
                complete_actor_speech_balloons(id);
            } else {
                state = QST_RUNNING;
            }
        }
        break;
    }
    case QST_WAIT_MESSAGE_QB:
        if (get_player_by_client_id(local_client_id) != NULL &&
            TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 4) != 0) {
            state = QST_RUNNING;
        }
        if (TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 8) != 0 ||
            has_player_active_menu__11TWindowCtrlFv(local_client_id) == 0) {
            TWindowCtrl::clear_flag();
            TWindowCtrl::clear_flag_2();
            TLobby::close_windows();
            queue_destruction__7TObjectFv(this);
        }
        break;
    case QST_SUSPEND_6:
        break;
    case QST_WAIT_LIST:
        if (((TWindowMenu *)ctx.list_window)->is_visible() != 0) {
            ctx.registers[ctx.result_register] = get_selected_menu_value(ctx.list_window);
            TWindow__close(ctx.list_window);
            ctx.list_window = NULL;
            state = QST_RUNNING;
            TLobby__sub_8024AC20(local_client_id);
            TWindowCtrl::clear_flag();
            TWindowCtrl::clear_flag_2();
        }
        if (TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 8) != 0 ||
            has_player_active_menu__11TWindowCtrlFv(local_client_id) == 0) {
            if (ctx.message_window != NULL) {
                TWindow__close(ctx.message_window);
                ctx.message_window = NULL;
            }
            if (ctx.list_window != NULL) {
                TWindow__close(ctx.list_window);
                ctx.list_window = NULL;
            }
            TWindowCtrl::clear_flag();
            TWindowCtrl::clear_flag_2();
            TLobby::close_windows();
            queue_destruction__7TObjectFv(this);
        }
        break;
    case QST_WAIT_FADE:
        if (TLobby::get_quest_thread_state() == 0) {
            state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_NAME_ENTRY:
        if (((TObjItemNameEntry *)ctx.item_name_entry)->process_keyboard_input() != 0) {
            queue_destruction__7TObjectFv(ctx.item_name_entry);
            ctx.item_name_entry = NULL;
            state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_NAME_SELECT: {
        s32 selection = ((TObjItemNameSelect *)ctx.item_name_select)->get_result();
        if (selection >= 0) {
            TObjItemNameSelect::set_selection_index(selection);
            queue_destruction__7TObjectFv(ctx.item_name_select);
            ctx.item_name_select = NULL;
            state = QST_RUNNING;
        }
        break;
    }
    case QST_WAIT_ITEM_OK:
        if (((TObjItemOKWindow *)ctx.item_ok_window)->is_done() != 0) {
            ctx.registers[ctx.result_register] = ((TObjItemOKWindow *)ctx.item_ok_window)->get_result();
            queue_destruction__7TObjectFv(ctx.item_ok_window);
            ctx.item_ok_window = NULL;
            state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_CHOICE: {
        s32 item = select_cursor_entry__22TWindowSubShortCutListFv(ctx.pack_select_window);
        if (item != ctx.registers[ctx.result_register]) {
            ctx.registers[ctx.result_register] = item;
            TWindowHelpItem__set_displayed_item_by_id(ctx.pack_select_help_window, item);
        }
        if (((TUnk_804D0618 *)ctx.pack_select_window)->get_status_flag() != 0) {
            TWindow__close(ctx.pack_select_window);
            ctx.pack_select_window = NULL;
            TWindow__close(ctx.pack_select_help_window);
            ctx.pack_select_help_window = NULL;
            state = QST_RUNNING;
            TLobby__sub_8024AC20(local_client_id);
            TWindowCtrl::clear_flag_bit2();
        }
        break;
    }
    }
}

TQuestThreadBoard::~TQuestThreadBoard() {
    if (ctx.message_window != nullptr) {
        TWindow__close(ctx.message_window);
        ctx.message_window = nullptr;
    }
    if (ctx.list_window != nullptr) {
        TWindow__close(ctx.list_window);
        ctx.list_window = nullptr;
    }
    TLobby::close_windows();
    quest_thread_board = NULL;
}

TQuestThreadBoard::TQuestThreadBoard(TObject *root, s32 label) : TObject(NULL) {
    m_name = TQuestThreadBoard__class_name;
    ctx.copy(&((TUnk_804C8678 *)root)->ctx);
    ctx.pc = ctx.function_table[label];
    state = QST_RUNNING;
    quest_thread_board = this;
}

void QuestVmContext::copy(QuestVmContext *src) {
    s32 tmp;
    s32 to;
    u8 *from;
    tmp = (s32)src->code;
    from = (u8 *)src + 0x30;
    to = (s32)((u8 *)this + 0x30);
    code = (u8 *)tmp;
    function_table = src->function_table;
    registers = src->registers;
    message_window = src->message_window;
    list_window = src->list_window;
    result_register = src->result_register;
    unk18 = src->unk18;
    call_stack_depth = src->call_stack_depth;
    pc = src->pc;
    unk24 = src->unk24;
    unk28 = src->unk28;
    message_speaker = src->message_speaker;
    tmp = *(s32 *)((s8 *)src + 0x30);
    *(s32 *)((s8 *)this + 0x30) = tmp;
    *(ByteBlock_20 *)(to + 4) = *(const ByteBlock_20 *)((s32)from + 4);
    to = (s32)((u8 *)this + 0x50);
    from = (u8 *)src + 0x50;
    *(ByteBlock_100 *)(to + 4) = *(const ByteBlock_100 *)((s32)from + 4);
    unk154 = src->unk154;
    unk155 = src->unk155;
    unk156 = src->unk156;
    unk158 = src->unk158;
    item_name_entry = src->item_name_entry;
    item_name_select = src->item_name_select;
    item_ok_window = src->item_ok_window;
    pack_select_window = src->pack_select_window;
    pack_select_help_window = src->pack_select_help_window;
    statistic_arg1 = src->statistic_arg1;
    statistic_arg2 = src->statistic_arg2;
}

void TQuestThread::destroy_all_in(TObject *parent) {
    TObject *child = parent->m_down;
    while (parent->m_down != NULL && child != NULL) {
        TObject *cur = child;
        child = child->m_next;
        if (check_value_equals__13TUnk_804B6C24Fl(cur, (s32)TQuestThread__class_name) != 0) {
            queue_destruction__7TObjectFv(cur);
        } else {
            destroy_all_in(cur);
        }
    }
}

void TQuestThread::run_task() {
    TObject *parent = m_up;

    switch (state) {
    case QST_RUNNING:
    case QST_SUSPEND_SYNC:
        state = ctx.dispatch();
        break;
    case QST_SUSPEND_RETURN:
        queue_destruction__7TObjectFv(this);
        break;
    case QST_SUSPEND_EXIT:
        queue_destruction(parent);
        break;
    case QST_WAIT_MESSAGE: {
        void *player = get_player_by_client_id(local_client_id);
        if (player != NULL && check_flag_100__10TObjPlayerFPv(player) == 0 &&
            TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 4) != 0) {
            s32 id = get_window_id__11TWindowCtrlFv();
            if (is_actor_speech_balloon_done(id) == 0) {
                complete_actor_speech_balloons(id);
            } else {
                state = QST_RUNNING;
            }
        }
        break;
    }
    case QST_WAIT_MESSAGE_QB:
        if (get_player_by_client_id(local_client_id) != NULL) {
            void *pad = controller_input_state + 0x20;
            if (TWindowShortListCtrl__check_controller_button(pad, 4) != 0) {
                state = QST_RUNNING;
            }
            if (TWindowShortListCtrl__check_controller_button(pad, 8) != 0) {
                TLobby::close_windows();
                queue_destruction__7TObjectFv(this);
            }
        }
        break;
    case QST_WAIT_LIST:
        if (((TWindowMenu *)ctx.list_window)->is_visible() != 0) {
            ctx.registers[ctx.result_register] = get_selected_menu_value(ctx.list_window);
            TWindow__close(ctx.list_window);
            ctx.list_window = NULL;
            state = QST_RUNNING;
            TLobby__sub_8024AC20(local_client_id);
            TWindowCtrl::clear_flag();
            TWindowCtrl::clear_flag_2();
        }
        break;
    case QST_WAIT_FADE:
        if (TLobby::get_quest_thread_state() == 0) {
            state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_NAME_ENTRY:
        if (((TObjItemNameEntry *)ctx.item_name_entry)->process_keyboard_input() != 0) {
            queue_destruction__7TObjectFv(ctx.item_name_entry);
            ctx.item_name_entry = NULL;
            state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_NAME_SELECT: {
        s32 selection = ((TObjItemNameSelect *)ctx.item_name_select)->get_result();
        if (selection >= 0) {
            TObjItemNameSelect::set_selection_index(selection);
            queue_destruction__7TObjectFv(ctx.item_name_select);
            ctx.item_name_select = NULL;
            state = QST_RUNNING;
        }
        break;
    }
    case QST_WAIT_ITEM_OK:
        if (((TObjItemOKWindow *)ctx.item_ok_window)->is_done() != 0) {
            ctx.registers[ctx.result_register] = ((TObjItemOKWindow *)ctx.item_ok_window)->get_result();
            queue_destruction__7TObjectFv(ctx.item_ok_window);
            ctx.item_ok_window = NULL;
            state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_CHOICE: {
        s32 item = select_cursor_entry__22TWindowSubShortCutListFv(ctx.pack_select_window);
        if (item != ctx.registers[ctx.result_register]) {
            ctx.registers[ctx.result_register] = item;
            TWindowHelpItem__set_displayed_item_by_id(ctx.pack_select_help_window, item);
        }
        if (((TUnk_804D0618 *)ctx.pack_select_window)->get_status_flag() != 0 ||
            ((TLobby *)ctx.pack_select_window)->get_flag_bit2() != 0) {
            if (((TLobby *)ctx.pack_select_window)->get_flag_bit2() != 0) {
                ctx.registers[ctx.result_register] = -1;
            }
            TWindow__close(ctx.pack_select_window);
            ctx.pack_select_window = NULL;
            TWindow__close(ctx.pack_select_help_window);
            ctx.pack_select_help_window = NULL;
            state = QST_RUNNING;
            TLobby__sub_8024AC20(local_client_id);
            TWindowCtrl::clear_flag_bit2();
            TWindowCtrl::clear_flag();
            TWindowCtrl::clear_flag_2();
        }
        break;
    }
    }
}

TQuestThread::~TQuestThread() {}

u8 *TQuestThread::create_for_floor() {
    s32 floor = get_current_floor();
    if (TQuestThread__floor_handler_ids[floor] != -1 && quest_mission_manager != NULL) {
        return (u8 *)new TQuestThread(quest_mission_manager, TQuestThread__floor_handler_ids[floor]);
    }
    return NULL;
}

u32 TQuestThread::create(int label) {
    TQuestThread *thread;

    if (quest_mission_manager != NULL) {
        thread = new TQuestThread(quest_mission_manager, label);
        if (thread != NULL) {
            thread->set_parent((TObject *)tl_00);
            return (u32)thread;
        }
        return 0U;
    }
    return 0U;
}

TQuestThread *TQuestThread::create_in_root(s32 label) {
    if (quest_mission_manager != NULL) {
        return new TQuestThread(quest_mission_manager, label);
    }
    return NULL;
}

TQuestThread::TQuestThread(TObject *root, s32 label) : TObject(root) {
    m_name = TQuestThread__class_name;
    ctx.copy(&((TUnk_804C8678 *)root)->ctx);
    ctx.pc = ctx.function_table[label];
    state = QST_RUNNING;
    if (ctx.pc == -1) {
        queue_destruction__7TObjectFv(this);
    }
}

void TQuestThread::clear_floor_handler(s32 floor) {
    if (floor < 0 || floor > 0x11) {
        return;
    }
    TQuestThread__floor_handler_ids[floor] = -1;
}

void TQuestThread::set_floor_handler(s32 floor, s32 label) {
    if (floor < 0 || floor > 0x11) {
        return;
    }
    TQuestThread__floor_handler_ids[floor] = label;
}

void TQuestThread__sub_801F5D88(void) { TQuestThread::clear_all_floor_handlers(); }

void TQuestThread::clear_all_floor_handlers() {
    s32 i;
    for (i = 0; i < 0x12; i++) {
        TQuestThread__floor_handler_ids[i] = -1;
    }
}

void TQuestThread::clear_buffer(void *root) {
    if (((TUnk_804C8678 *)root)->ctx.registers != NULL) {
        memset(((TUnk_804C8678 *)root)->ctx.registers, (void *)0, (void *)1024);
    }
}

void handle_6x77_sync_quest_register(u8 *packet) {
    TUnk_804C8678 *root;
    s32 *registers;
    u16 index;
    bswap_header__6TLobbyFPv();
    root = quest_mission_manager;
    if (root != NULL) {
        index = *(u16 *)(packet + 4);
        registers = root->ctx.registers;
        if (index <= 0xFFU) {
            registers[index] = *(s32 *)(packet + 8);
        }
    }
}

char *TQuestThread::get_quest_name() {
    if (quest_mission_manager != NULL) {
        return ((QuestScriptHeader *)quest_mission_manager->script)->name;
    }
    return lbl_8044A5D0;
}

void TQuestThread::clear_thread_state() {
    memset(quest_board_handlers, (void *)0, (void *)0xD8);
}

s32 TQuestThread::get_register(void *root, int index) {
    if (root != NULL) {
        return ((TUnk_804C8678 *)root)->ctx.registers[index];
    }
    return 0;
}

void TUnk_804C8678::run_task() {}

TUnk_804C8678::~TUnk_804C8678() {
    if (kind == 0) {
        quest_mission_manager = NULL;
        TQuestThread::clear_thread_state();
    } else {
        quest_area_manager = NULL;
    }
    TAdSinglePlyChrSelectGC::safe_free(script);
}

void TQuestThread::destroy_quest_obj() {
    if (quest_area_manager != NULL) {
        queue_destruction__7TObjectFv(quest_area_manager);
        quest_area_manager = NULL;
    }
}

void load_area_dialogue_script() {
    s32 bank;

    switch (TOKeyMachine01::get_global_state()) {
    case 0: if (get_main_phase() == 14) { bank = 0; } else { bank = 1; } break;
    case 1: case 2: bank = 2; break;
    case 3: case 4: case 5: bank = 3; break;
    case 6: case 7: case 13: bank = 4; break;
    case 8: case 9: case 10: bank = 5; break;
    case 18: if (get_main_phase() == 14) { bank = 6; } else { bank = 7; } break;
    case 19: case 20: case 32: bank = 8; break;
    case 21: case 22: case 33: bank = 9; break;
    case 23: case 24: case 25: case 26: case 27: case 30: bank = 10; break;
    case 28: case 29: case 31: bank = 11; break;
    default: return;
    }
    if (enable_v2_features == 1 && game_difficulty_selection == 3) {
        new TUnk_804C8678((TObject *)tl_04, area_dialogue_ultimate_script_files[current_language][bank], 1);
    } else {
        new TUnk_804C8678((TObject *)tl_04, area_dialogue_script_files[current_language][bank], 1);
    }
}

s32 TQuestThread::create_by_mode() {
    switch (evt2_random_enemies_mode) {
    case 1:
        return (s32)new TUnk_804C8678((TObject *)tl_su, (const char *)TQuestThread__sub_801F6548());
    case 2:
        return (s32)new TUnk_804C8678((TObject *)tl_su, (void *)TQuestListOnline__sub_801F6540(), TQuestListOnline::get_quest_count());
    case 3: {
        TUnk_804C8678 *root = new TUnk_804C8678((TObject *)tl_su, (void *)TQuestListVM::get_instance(), TQuestListVM__sub_801F6530());
        TQuestListVM::reset();
        return (s32)root;
    }
    case 4:
        return (s32)new TUnk_804C8678((TObject *)tl_su, (void *)TQuestListOnline__sub_801F6540(), TQuestListOnline::get_quest_count());
    case 5:
        return (s32)new TUnk_804C8678((TObject *)tl_su, (const char *)TQuestThread__sub_801F6548());
    default:
        return 0;
    }
}

TUnk_804C8678::TUnk_804C8678(TObject *parent, void *data, s32 size) : TObject(parent) {
    s32 alloc_size;
    if (size < 0) {
        queue_destruction__7TObjectFv(this);
    } else {
        alloc_size = size + 0x400;
        script = ((TQuestVmDownLoadServer *)alloc_size)->alloc();
        memcpy(script, (s32)data, alloc_size);
        quest_mission_manager = this;
        init_quest_script_context(script, &ctx);
        kind = 0;
    }
    TQuestThread::clear_thread_state();
}

TUnk_804C8678::TUnk_804C8678(TObject *parent, const char *filename, s32 kind) : TObject(parent) {
    s32 size;
    this->kind = kind;
    script = 0;
    switch (this->kind) {
    case 0:
        copy_name((s32)lbl_8044A640);
        size = ((TScene *)filename)->update_lobby_scene();
        if (size < 0) {
            queue_destruction__7TObjectFv(this);
        } else {
            script = ((TQuestVmDownLoadServer *)(size + 0x400))->alloc();
            read_disc_file((void *)filename, script);
            copy_name((s32)lbl_805DC50C);
            quest_mission_manager = this;
            init_quest_script_context(script, &ctx);
            new TQuestThread(this, 0);
        }
        TQuestThread::clear_thread_state();
        break;
    case 1:
        size = ((TScene *)filename)->update_lobby_scene();
        if (size < 0) {
            queue_destruction__7TObjectFv(this);
        } else {
            script = ((TQuestVmDownLoadServer *)(size + 0x400))->alloc();
            read_disc_file((void *)filename, script);
            quest_area_manager = this;
            init_quest_script_context(script, &ctx);
        }
        break;
    default:
        queue_destruction__7TObjectFv(this);
        break;
    }
}

TUnk_804C8678::TUnk_804C8678(TObject *parent, const char *filename) : TObject(parent) {
    s32 size;
    copy_name((s32)lbl_8044A640);
    size = ((TScene *)filename)->update_lobby_scene();
    if (size < 0) {
        queue_destruction__7TObjectFv(this);
    } else {
        script = ((TQuestVmDownLoadServer *)(size + 0x400))->alloc();
        read_disc_file((void *)filename, script);
        copy_name((s32)lbl_805DC50C);
        quest_mission_manager = this;
        init_quest_script_context(script, &ctx);
        kind = 0;
    }
    TQuestThread::clear_thread_state();
}

void TQuestThread::set_status_flag_80(void *window) { *(u16 *)((u8 *)window + 0x70) |= 0x80; }

void TObjItemNameSelect::set_selection_index(int index) { item_name_selection_index = index; }

int TQuestThread::queue_destruction(void *obj) { return queue_destruction__7TObjectFv(obj); }

void free_menu_object(void *window) {
    void *menu = *(void **)((u8 *)window + 0x20);
    if (menu != NULL) {
        fn_801F6520(menu);
    }
}

void fn_801F6520(void *p) { *(u16 *)((u8 *)p + 0x60) &= 0xfffe; }

extern "C" {
void __dt__18TObjItemNameSelectFv();
void __dt__17TObjItemNameEntryFv();
void __dt__17TQuestThreadBoardFv();
void run_task__17TQuestThreadBoardFv();
void __dt__12TQuestThreadFv();
void run_task__12TQuestThreadFv();
void run_task__7TObjectFv();
void render__7TObjectFv();
void render_shadows__7TObjectFv();
}

void *__vt__18TObjItemNameSelect[] = {
    0, 0,
    (void *)__dt__18TObjItemNameSelectFv,
    (void *)run_task__7TObjectFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};

void *__vt__17TObjItemNameEntry[] = {
    0, 0,
    (void *)__dt__17TObjItemNameEntryFv,
    (void *)run_task__7TObjectFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};

void *__vt__17TQuestThreadBoard[] = {
    0, 0,
    (void *)__dt__17TQuestThreadBoardFv,
    (void *)run_task__17TQuestThreadBoardFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};

void *__vt__12TQuestThread[] = {
    0, 0,
    (void *)__dt__12TQuestThreadFv,
    (void *)run_task__12TQuestThreadFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};
