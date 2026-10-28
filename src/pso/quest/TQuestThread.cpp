#include "types.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TUnk_804D0618.h"
#include "pso/misc/TUnk_804C8678.h"
#include "pso/quest/AreaDialogueScripts.h"
#include "pso/quest/QuestVm.h"
#include "pso/quest/TQuestThread.h"
#include "pso/TObject.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TQuestListOnline.h"
#include "pso/misc/TQuestListVM.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/misc/TScene.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TWindowMakeTeam.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/ui/Language.h"
class TObjItemNameSelect : public TObject {
public:
 void* m_1c;
 void* m_20;
public:
    virtual void render();
    virtual ~TObjItemNameSelect();
};

struct Self_801F4DFC {
    const char *name;
    u8 pad4[0x18 - 0x4];
    void *vtable;
    void *m_1c;
    void *m_20;
};

struct Entry_801F4DFC {
    s32 id;
    s32 f4;
};

struct Pos_801F4DFC {
    f32 x;
    f32 y;
};

struct RecoveredGlobal_801F4F20_lbl_80512B18 {
    s32 value;
    u8 remaining[0xC];
};

typedef char RecoveredGlobal_801F4F20_lbl_80512B18_size[sizeof(RecoveredGlobal_801F4F20_lbl_80512B18) == 0x10 ? 1 : -1];

struct RecoveredGlobal_801F5630___vt__17TQuestThreadBoard {
    s32 value;
    u8 remaining[0x14];
};

typedef char RecoveredGlobal_801F5630___vt__17TQuestThreadBoard_size[sizeof(RecoveredGlobal_801F5630___vt__17TQuestThreadBoard) == 0x18 ? 1 : -1];

struct ByteBlock_20 { u8 bytes[0x20]; };

struct ByteBlock_100 { u8 bytes[0x100]; };

struct Node_801F57B4 {
    u8 pad0[0xC];
    Node_801F57B4* next;
    u8 pad1[4];
    Node_801F57B4* child;
};

struct RecoveredGlobal_801F5B5C_TQuestThread__data_80512AD0 { s32 value; u8 remaining[0x44]; };

typedef char RecoveredGlobal_801F5B5C_TQuestThread__data_80512AD0_size[sizeof(RecoveredGlobal_801F5B5C_TQuestThread__data_80512AD0) == 0x48 ? 1 : -1];

struct RecoveredGlobal_801F5E7C_lbl_805129F8 {
    s32 value;
    u8 remaining[0xD4];
};

struct RecoveredGlobal_801F5CB0___vt__12TQuestThread {
    s32 value;
    u8 remaining[0x14];
};

struct QuestScriptHeader { u8 pad[0x14]; char name[1]; };

typedef char RecoveredGlobal_801F5CB0___vt__12TQuestThread_size[sizeof(RecoveredGlobal_801F5CB0___vt__12TQuestThread) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_801F5E7C_lbl_805129F8_size[sizeof(RecoveredGlobal_801F5E7C_lbl_805129F8) == 0xD8 ? 1 : -1];

// TUnk_804C8678: owns a loaded quest script and the context its threads start from
struct QuestRoot {
    u8 pad0[0x18];
    void *vt;
    u8 pad1C[0x24 - 0x1C];
    QuestVmContext ctx;
    s32 script;
    u8 pad19C[4];
    s32 kind; // 0: quest_mission_manager, 1: quest_area_manager
};

typedef char QuestRoot_size[sizeof(QuestRoot) == 0x1A4 ? 1 : -1];

struct QuestThreadBoardObj {
    s32 name;
    u8 pad4[0x10 - 0x4];
    void *parent;
    u8 pad14[0x18 - 0x14];
    void *vt;
    QuestVmContext ctx;
    quest_suspend_reason state;
};

extern "C" {

s32 memcpy(s32, s32, s32);
int memset(void*, void*, void*);
s32 get_main_phase();
s32 get_current_floor(void);
int queue_destruction__7TObjectFv(void*);
s32 check_value_equals__13TUnk_804B6C24Fl(void*, s32);
void * TQuestVmDownLoadServer__sub_8006EF6C(s32);
void copy_name(s32 arg0);
void read_disc_file(void *, s32);
s32 get_text_collection(s32 arg0);
void fn_80131ADC(u8 *arg0, u8 *arg1);
void fn_80131B18(u8 *arg0, u8 *arg1);
u32 TKeyBoardControl__ct(void *, void *, s32, s32, s32, s32);
void mem_free(void *p);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 check_flag_100__10TObjPlayerFPv(void *);
void * get_player_by_client_id(s32);
s32 init_quest_script_context(s32, void *);
s32 bswap_header__6TLobbyFPv();
void * TObjItemNameEntry__ct(void *arg0, void *parent);
u8 * TQuestThreadBoard__ct(u8 *arg0, s32 arg1, s32 arg2);
void destroy_children_with_tag(Node_801F57B4* arg0);
void TQuestThread__sub_801F5D88(void);
void * __dt__13TUnk_804C8678Fv(void *arg0, s16 arg1);
void set_item_name_selection_index(int a0);
void fn_801F6520(void* p);
int TQuestListVM__sub_801F6530(void);
int TQuestListOnline__sub_801F6540(void);
s32 *TQuestThread__sub_801F6548(void);
s32 __dl__7TObjectFPv(void *);
u32 __nw__7TObjectFUl(s32);
s32 __dt__7TObjectFv(void *, s32);
void __ct__7TObjectFP7TObject(void *self, void *parent);
void TWindow__close(void*);
void TLobby__sub_8024AC20(s32);
s32 has_player_active_menu__11TWindowCtrlFv(s32);
s32 get_window_id__11TWindowCtrlFv(void);
void complete_actor_speech_balloons(s32);
s32 is_actor_speech_balloon_done(s32);
void TWindowHelpItem__set_displayed_item_by_id(void *, s32);
void TWindowSubComCard__sub_80265500(u8 *arg0);
s32 get_selected_menu_value(void *);
s32 align_menu_entry_positions(u32);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void *p, int a1, int a2, int a3);
void * check_room_seq_4__16TAdChrSelASlotGCFl(void *, s32);
s32 select_cursor_entry__22TWindowSubShortCutListFv(void *);
void send_and_handle__6TLobbyFii(void *, void *, s32);
void * update_window_mode_from_progress__6TLobbyFPv(void *, Pos_801F4DFC *);
char *fn_8026CB5C(void);
void * get_window_layout_position(s32);
s32 strcmp(s32, s32 *);
s32 strncpy(void *, void *, int);
}
extern s32 TQuestThread__data_804C8678[];
extern RecoveredGlobal_801F5B5C_TQuestThread__data_80512AD0 TQuestThread__floor_handler_ids;
extern void *__vt__12TQuestThread[];
extern void *__vt__17TObjItemNameEntry[];
extern void *__vt__17TQuestThreadBoard[];
extern void *__vt__18TObjItemNameSelect[];
extern s32 enable_v2_features;
extern s32 evt2_random_enemies_mode;
extern char lbl_8044A5D0[];
extern u8 lbl_8044A640[];
extern Entry_801F4DFC lbl_804C8410[];
extern Entry_801F4DFC lbl_804C8488[];
extern u8 controller_input_state[];
extern RecoveredGlobal_801F5E7C_lbl_805129F8 quest_board_handlers;
extern RecoveredGlobal_801F4F20_lbl_80512B18 lbl_80512B18;
extern const char *TQuestThread__class_name;
extern s32 TQuestThreadBoard__class_name;
extern s32 TObjItemNameEntry__class_name;
extern const char *TObjItemNameSelect__class_name;
extern s32 local_client_id;
extern s32 game_difficulty_selection;
extern u32 quest_mission_manager;
extern u32 quest_area_manager;
extern s32 quest_thread_board;
extern int item_name_selection_index;
extern Entry_801F4DFC *item_name_selection_table;
extern const f32 lbl_805DC4EC;
extern const f32 lbl_805DC4F0;
extern const f32 lbl_805DC4F4;
extern const f32 lbl_805DC4F8;
extern s32 lbl_805DC4FC;
extern const f32 lbl_805DC500;
extern const f32 lbl_805DC504;
extern const f32 lbl_805DC508;
extern u8 lbl_805DC50C;
extern s32 tl_00;
extern s32 tl_04;
extern s32 tl_su;
TObjItemNameSelect::~TObjItemNameSelect() {
    if (m_20 != nullptr) { TWindow__close(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { TWindow__close(m_1c); m_1c = nullptr; }
}

extern "C" {
Self_801F4DFC *TObjItemNameSelect__ct(Self_801F4DFC *self, void *parent) {
    Pos_801F4DFC pos;
    s32 i;

    __ct__7TObjectFP7TObject(self, parent);
    self->vtable = __vt__18TObjItemNameSelect;
    self->name = TObjItemNameSelect__class_name;
    item_name_selection_table = TLobby::get_instance() == 0 ? lbl_804C8410 : lbl_804C8488;
    self->m_1c = check_room_seq_4__16TAdChrSelASlotGCFl(get_window_layout_position(0x58), 0x19);
    for (i = 0; item_name_selection_table[i].id != -1; i++) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(self->m_1c, get_text_collection(item_name_selection_table[i].id), 6, i);
    }
    ((TWindowSubComCardList *)(self->m_1c))->set_scroll_target(lbl_805DC500, lbl_805DC504);
    TWindowSubComCard__sub_80265500((u8 *)self->m_1c);
    ((TLobby *)(self->m_1c))->set_field_1c(lbl_805DC508);
    pos.x = lbl_805DC4F4;
    pos.y = lbl_805DC4F8;
    self->m_20 = update_window_mode_from_progress__6TLobbyFPv(get_window_layout_position(0x55), &pos);
    if (self->m_20 != NULL) {
        send_and_handle__6TLobbyFii(self->m_20, TQuestVmDownLoadServer__sub_8006EF6C(0x46), 0x81);
    }
    return self;
}

void fn_801F4F20(s32 arg0) {
    strncpy((void *)&lbl_80512B18.value, (void *)arg0, 8);
    *(s8 *)((s8 *)&lbl_80512B18.value + 8) = 0;
}

s32 TWindowSubComCard::process_keyboard_input() {
    s32 temp_r31;
    u32 temp_field;

    temp_field = *(u32 *)((s8 *)this + 0x1C);
    if ((temp_field != 0U) && (((TWindowSubComCard *)temp_field)->update_keyboard() != 0)) {
        temp_r31 = ((TWindowSubComCard *)(*(u32 *)((s8 *)this + 0x1C)))->realloc_buffer();
        if (strcmp(temp_r31, &lbl_805DC4FC) == 0) {
            mem_free((void *)temp_r31);
            free_menu_object((void *)*(u32 *)((s8 *)this + 0x1C));
            return 0;
        }
        if (TWindowSubComCard::contains_profanity((char *)temp_r31) != 0) {
            free_menu_object((void *)*(u32 *)((s8 *)this + 0x1C));
            mem_free((void *)temp_r31);
            return 0;
        }
        fn_801F4F20(temp_r31);
        mem_free((void *)temp_r31);
        return 1;
    }
    return 0;
}

void *TObjItemNameEntry::create(void *arg0) {
    void *o = (void *)__nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TObjItemNameEntry__ct(o, arg0);
    }
    return o;
}

}
TObjItemNameEntry::~TObjItemNameEntry() {
    if (m_20 != nullptr) { TWindow__close(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { queue_destruction__7TObjectFv(m_1c); m_1c = nullptr; }
}

extern "C" {
void *TObjItemNameEntry__ct(void *arg0, void *parent) {
    u32 var_r0;

    __ct__7TObjectFP7TObject(arg0, parent);
    *(void ***)((s8 *)arg0 + 0x18) = __vt__17TObjItemNameEntry;
    *(s32 *)((s8 *)arg0 + 0) = TObjItemNameEntry__class_name;
    if ((var_r0 = __nw__7TObjectFUl(0x2C)) != 0U) {
        var_r0 = TKeyBoardControl__ct((void*)var_r0, arg0, 8, 0, 1, local_client_id);
    }
    *(u32 *)((s8 *)arg0 + 0x1C) = var_r0;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x1C) != 0U) {
        ((TWindowMakeTeam *)(*(u32 *)((s8 *)arg0 + 0x1C)))->set_sub_position((u8 *)(get_window_layout_position(0xBF)));
        fn_80131ADC((u8 *)(*(u32 *)((s8 *)arg0 + 0x1C)), (u8 *)(get_window_layout_position(0xC0)));
        fn_80131B18((u8 *)(*(u32 *)((s8 *)arg0 + 0x1C)), (u8 *)(fn_8026CB5C()));
    }
    *(u32 *)((s8 *)arg0 + 0x20) = (u32)check_room_seq_4__16TAdChrSelASlotGCFl(get_window_layout_position(0x56), 1);
    if ((u32) *(u32 *)((s8 *)arg0 + 0x20) != 0U) {
        forward_trade_action_default__16TObjCityMainWarpFPviii((void *)(*(u32 *)((s8 *)arg0 + 0x20)), (int)(TQuestVmDownLoadServer__sub_8006EF6C(0x47)), 0x81, 0);
    }
    ((TWindowSubComCardList *)(*(u32 *)((s8 *)arg0 + 0x20)))->set_scroll_target(lbl_805DC4EC, lbl_805DC4F0);
    align_menu_entry_positions(*(u32 *)((s8 *)arg0 + 0x20));
    TQuestThread::set_status_flag_80((void *)*(u32 *)((s8 *)arg0 + 0x20));
    return arg0;
}

s32 TQuestThreadBoard::create_instance(int arg0) {
    s32 var_r31;

    if ((u32) quest_mission_manager != 0U) {
        var_r31 = __nw__7TObjectFUl(0x194);
        if (var_r31 != 0) {
            var_r31 = ((s32)TQuestThreadBoard__ct((u8 *)var_r31, (s32)quest_mission_manager, (s32)arg0));
        }
        ((TObject *)var_r31)->set_parent((TObject *)tl_00);
        return var_r31;
    }
    return 0;
}

void run_task__17TQuestThreadBoardFv(QuestThreadBoardObj *o) {
    void *parent = o->parent;

    switch (o->state) {
    case QST_RUNNING:
    case QST_SUSPEND_SYNC:
        o->state = o->ctx.dispatch();
        break;
    case QST_SUSPEND_RETURN:
        queue_destruction__7TObjectFv(o);
        break;
    case QST_SUSPEND_EXIT:
        TQuestThread::queue_destruction(parent);
        break;
    case QST_WAIT_MESSAGE: {
        void *p = get_player_by_client_id(local_client_id);
        if (p != NULL && check_flag_100__10TObjPlayerFPv(p) == 0 &&
            TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 4) != 0) {
            s32 id = get_window_id__11TWindowCtrlFv();
            if (is_actor_speech_balloon_done(id) == 0) {
                complete_actor_speech_balloons(id);
            } else {
                o->state = QST_RUNNING;
            }
        }
        break;
    }
    case QST_WAIT_MESSAGE_QB:
        if (get_player_by_client_id(local_client_id) != NULL &&
            TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 4) != 0) {
            o->state = QST_RUNNING;
        }
        if (TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 8) != 0 ||
            has_player_active_menu__11TWindowCtrlFv(local_client_id) == 0) {
            TWindowCtrl::clear_flag();
            TWindowCtrl::clear_flag_2();
            TLobby::close_windows();
            queue_destruction__7TObjectFv(o);
        }
        break;
    case QST_SUSPEND_6:
        break;
    case QST_WAIT_LIST:
        if (((TWindowMenu *)(o->ctx.list_window))->is_visible() != 0) {
            o->ctx.registers[o->ctx.result_register] = get_selected_menu_value(o->ctx.list_window);
            TWindow__close(o->ctx.list_window);
            o->ctx.list_window = NULL;
            o->state = QST_RUNNING;
            TLobby__sub_8024AC20(local_client_id);
            TWindowCtrl::clear_flag();
            TWindowCtrl::clear_flag_2();
        }
        if (TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 8) != 0 ||
            has_player_active_menu__11TWindowCtrlFv(local_client_id) == 0) {
            if (o->ctx.message_window != NULL) {
                TWindow__close(o->ctx.message_window);
                o->ctx.message_window = NULL;
            }
            if (o->ctx.list_window != NULL) {
                TWindow__close(o->ctx.list_window);
                o->ctx.list_window = NULL;
            }
            TWindowCtrl::clear_flag();
            TWindowCtrl::clear_flag_2();
            TLobby::close_windows();
            queue_destruction__7TObjectFv(o);
        }
        break;
    case QST_WAIT_FADE:
        if (TLobby::get_quest_thread_state() == 0) {
            o->state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_NAME_ENTRY:
        if (((TWindowSubComCard *)(o->ctx.item_name_entry))->process_keyboard_input() != 0) {
            queue_destruction__7TObjectFv(o->ctx.item_name_entry);
            o->ctx.item_name_entry = NULL;
            o->state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_NAME_SELECT: {
        s32 r = ((TQuestThread *)o->ctx.item_name_select)->update_com_card();
        if (r >= 0) {
            set_item_name_selection_index(r);
            queue_destruction__7TObjectFv(o->ctx.item_name_select);
            o->ctx.item_name_select = NULL;
            o->state = QST_RUNNING;
        }
        break;
    }
    case QST_WAIT_ITEM_OK:
        if (((TQuestThread *)o->ctx.item_ok_window)->update_board_card() != 0) {
            o->ctx.registers[o->ctx.result_register] = ((TQuestThread *)o->ctx.item_ok_window)->tick_com_card();
            queue_destruction__7TObjectFv(o->ctx.item_ok_window);
            o->ctx.item_ok_window = NULL;
            o->state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_CHOICE: {
        s32 v = select_cursor_entry__22TWindowSubShortCutListFv(o->ctx.pack_select_window);
        if (v != o->ctx.registers[o->ctx.result_register]) {
            o->ctx.registers[o->ctx.result_register] = v;
            TWindowHelpItem__set_displayed_item_by_id(o->ctx.pack_select_help_window, v);
        }
        if (((TUnk_804D0618 *)(o->ctx.pack_select_window))->get_status_flag() != 0) {
            TWindow__close(o->ctx.pack_select_window);
            o->ctx.pack_select_window = NULL;
            TWindow__close(o->ctx.pack_select_help_window);
            o->ctx.pack_select_help_window = NULL;
            o->state = QST_RUNNING;
            TLobby__sub_8024AC20(local_client_id);
            TWindowCtrl::clear_flag_bit2();
        }
        break;
    }
    }
}
}

TQuestThreadBoard::~TQuestThreadBoard() {
    if (m_28 != nullptr) {
        TWindow__close(m_28);
        m_28 = nullptr;
    }
    if (m_2c != nullptr) {
        TWindow__close(m_2c);
        m_2c = nullptr;
    }
    TLobby::close_windows();
    quest_thread_board = 0;
}

u8 *TQuestThreadBoard__ct(u8 *arg0, s32 arg1, s32 arg2) {
    QuestThreadBoardObj *board = (QuestThreadBoardObj *)arg0;
    __ct__7TObjectFP7TObject(board, NULL);
    board->vt = __vt__17TQuestThreadBoard;
    board->name = TQuestThreadBoard__class_name;
    board->ctx.copy(&((QuestRoot *)arg1)->ctx);
    board->ctx.pc = board->ctx.function_table[arg2];
    board->state = QST_RUNNING;
    (*(u8 * *)&quest_thread_board) = arg0;
    return arg0;
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

extern "C" {
void destroy_children_with_tag(Node_801F57B4* arg0) {
    Node_801F57B4* n = arg0->child;
    while (arg0->child != 0 && n != 0) {
        Node_801F57B4* cur = n;
        n = n->next;
        if (check_value_equals__13TUnk_804B6C24Fl(cur, (s32)TQuestThread__class_name) != 0) {
            queue_destruction__7TObjectFv(cur);
        } else {
            destroy_children_with_tag(cur);
        }
    }
}

void run_task__12TQuestThreadFv(TQuestThread *t) {
    TObject *parent = t->m_up;
    switch (t->state) {
    case QST_RUNNING:
    case QST_SUSPEND_SYNC:
        t->state = t->ctx.dispatch();
        break;
    case QST_SUSPEND_RETURN:
        queue_destruction__7TObjectFv(t);
        break;
    case QST_SUSPEND_EXIT:
        TQuestThread::queue_destruction(parent);
        break;
    case QST_WAIT_MESSAGE: {
        void *p = get_player_by_client_id(local_client_id);
        if (p != NULL && check_flag_100__10TObjPlayerFPv(p) == 0 &&
            TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 4) != 0) {
            s32 id = get_window_id__11TWindowCtrlFv();
            if (is_actor_speech_balloon_done(id) == 0) {
                complete_actor_speech_balloons(id);
            } else {
                t->state = QST_RUNNING;
            }
        }
        break;
    }
    case QST_WAIT_MESSAGE_QB:
        if (get_player_by_client_id(local_client_id) != NULL) {
            void *pad = controller_input_state + 0x20;
            if (TWindowShortListCtrl__check_controller_button(pad, 4) != 0) {
                t->state = QST_RUNNING;
            }
            if (TWindowShortListCtrl__check_controller_button(pad, 8) != 0) {
                TLobby::close_windows();
                queue_destruction__7TObjectFv(t);
            }
        }
        break;
    case QST_WAIT_LIST:
        if (((TWindowMenu *)(t->ctx.list_window))->is_visible() != 0) {
            t->ctx.registers[t->ctx.result_register] = get_selected_menu_value(t->ctx.list_window);
            TWindow__close(t->ctx.list_window);
            t->ctx.list_window = 0;
            t->state = QST_RUNNING;
            TLobby__sub_8024AC20(local_client_id);
            TWindowCtrl::clear_flag();
            TWindowCtrl::clear_flag_2();
        }
        break;
    case QST_WAIT_FADE:
        if (TLobby::get_quest_thread_state() == 0) {
            t->state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_NAME_ENTRY:
        if (((TWindowSubComCard *)(t->ctx.item_name_entry))->process_keyboard_input() != 0) {
            queue_destruction__7TObjectFv(t->ctx.item_name_entry);
            t->ctx.item_name_entry = 0;
            t->state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_NAME_SELECT: {
        s32 r = ((TQuestThread *)t->ctx.item_name_select)->update_com_card();
        if (r >= 0) {
            set_item_name_selection_index(r);
            queue_destruction__7TObjectFv(t->ctx.item_name_select);
            t->ctx.item_name_select = 0;
            t->state = QST_RUNNING;
        }
        break;
    }
    case QST_WAIT_ITEM_OK:
        if (((TQuestThread *)t->ctx.item_ok_window)->update_board_card() != 0) {
            t->ctx.registers[t->ctx.result_register] = ((TQuestThread *)t->ctx.item_ok_window)->tick_com_card();
            queue_destruction__7TObjectFv(t->ctx.item_ok_window);
            t->ctx.item_ok_window = 0;
            t->state = QST_RUNNING;
        }
        break;
    case QST_WAIT_ITEM_CHOICE: {
        s32 sel = select_cursor_entry__22TWindowSubShortCutListFv(t->ctx.pack_select_window);
        if (sel != t->ctx.registers[t->ctx.result_register]) {
            t->ctx.registers[t->ctx.result_register] = sel;
            TWindowHelpItem__set_displayed_item_by_id(t->ctx.pack_select_help_window, sel);
        }
        if (((TUnk_804D0618 *)(t->ctx.pack_select_window))->get_status_flag() != 0 || ((TLobby *)(t->ctx.pack_select_window))->get_flag_bit2() != 0) {
            if (((TLobby *)(t->ctx.pack_select_window))->get_flag_bit2() != 0) {
                t->ctx.registers[t->ctx.result_register] = -1;
            }
            TWindow__close(t->ctx.pack_select_window);
            t->ctx.pack_select_window = 0;
            TWindow__close(t->ctx.pack_select_help_window);
            t->ctx.pack_select_help_window = 0;
            t->state = QST_RUNNING;
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
    s32 floor;
    floor = get_current_floor();
    if ((&TQuestThread__floor_handler_ids.value)[floor] != -1 && quest_mission_manager != 0U) {
        return (u8 *)new TQuestThread((TObject *)quest_mission_manager, (&TQuestThread__floor_handler_ids.value)[floor]);
    }
    return NULL;
}

u32 TQuestThread::create(int arg0) {
    TQuestThread *t;

    if ((u32) quest_mission_manager != 0U) {
        t = new TQuestThread((TObject *)quest_mission_manager, arg0);
        if (t != NULL) {
            t->set_parent((TObject *)tl_00);
            return (u32)t;
        }
        return 0U;
    }
    return 0U;
}

TQuestThread *TQuestThread::create_in_root(s32 label) {
    if (quest_mission_manager != 0U) {
        return new TQuestThread((TObject *)quest_mission_manager, label);
    }
    return NULL;
}

TQuestThread::TQuestThread(TObject *parent, s32 label) : TObject(parent) {
    m_name = TQuestThread__class_name;
    ctx.copy(&((QuestRoot *)parent)->ctx);
    ctx.pc = ctx.function_table[label];
    state = QST_RUNNING;
    if (ctx.pc == -1) {
        queue_destruction__7TObjectFv(this);
    }
}
}

void TQuestThread::clear_floor_handler(s32 i) {
    if (i < 0 || i > 0x11) {
        return;
    }
    ((s32 *)&TQuestThread__floor_handler_ids)[i] = -1;
}

void TQuestThread::set_floor_handler(s32 i, s32 v) {
    if (i < 0 || i > 0x11) {
        return;
    }
    ((s32 *)&TQuestThread__floor_handler_ids)[i] = v;
}

void TQuestThread__sub_801F5D88(void) { TQuestThread::clear_all_floor_handlers(); }

void TQuestThread::clear_all_floor_handlers() {
    s32 i;
    for (i = 0; i < 0x12; i++) {
        ((s32 *)&TQuestThread__floor_handler_ids)[i] = -1;
    }
}

void TQuestThread::clear_buffer(void *p) {
    QuestRoot *root = (QuestRoot *)p;
    if (root->ctx.registers != NULL) {
        memset(root->ctx.registers, (void*)0, (void*)1024);
    }
}

void handle_6x77_sync_quest_register(u8 *arg0) {
    QuestRoot *root;
    s32 *registers;
    u16 index;
    bswap_header__6TLobbyFPv();
    root = *(QuestRoot **)&quest_mission_manager;
    if (root != NULL) {
        index = *(u16 *)(arg0 + 4);
        registers = root->ctx.registers;
        if (index <= 0xFFU) {
            registers[index] = *(s32 *)(arg0 + 8);
        }
    }
}

char *TQuestThread::get_quest_name() {
    if ((*(QuestRoot **)&quest_mission_manager) != 0) {
        return ((QuestScriptHeader *)(*(QuestRoot **)&quest_mission_manager)->script)->name;
    }
    return lbl_8044A5D0;
}

void TQuestThread::clear_thread_state() {
    memset(&quest_board_handlers.value, (void*)(0), (void*)(0xD8));
}

s32 TQuestThread::get_register(void *arg0, int arg1) {
    if (arg0 != NULL) {
        return ((QuestRoot *)arg0)->ctx.registers[arg1];
    }
    return 0;
}

void TUnk_804C8678::run_task() {  }

void *__dt__13TUnk_804C8678Fv(void *arg0, s16 arg1) {
    QuestRoot *root = (QuestRoot *)arg0;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = TQuestThread__data_804C8678;
        if (root->kind == 0) {
            (*(s32 *)&quest_mission_manager) = 0;
            TQuestThread::clear_thread_state();
        } else {
            (*(s32 *)&quest_area_manager) = 0;
        }
        TAdSinglePlyChrSelectGC::safe_free(root->script);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TQuestThread::destroy_quest_obj() {
    if ((u32) quest_area_manager != 0U) {
        queue_destruction__7TObjectFv((void*)((void*)quest_area_manager));
        quest_area_manager = 0U;
    }
}

void load_area_dialogue_script(void) {
    s32 bank;
    void *mem;

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
        mem = (void *)__nw__7TObjectFUl(0x1A4);
        if (mem != NULL) {
            load_quest_root_script((u8 *)mem, (void *)tl_04, (void *)area_dialogue_ultimate_script_files[current_language][bank], 1);
        }
    } else {
        mem = (void *)__nw__7TObjectFUl(0x1A4);
        if (mem != NULL) {
            load_quest_root_script((u8 *)mem, (void *)tl_04, (void *)area_dialogue_script_files[current_language][bank], 1);
        }
    }
}

s32 TQuestThread::create_by_mode() {
    s32 temp_r31;
    s32 quest_count;
    s32 object;
    s32 var_r30_2;
    s32 var_r30_3;
    s32 var_r30_4;
    s32 var_r31;
    switch ((s32) evt2_random_enemies_mode) {
    case 1:
        temp_r31 = __nw__7TObjectFUl(0x1A4);
        if (temp_r31 != 0) {
            temp_r31 = ((s32)construct_load_quest((QuestRoot *)temp_r31, (void *)tl_su, (void *)(TQuestThread__sub_801F6548())));
        }
        return temp_r31;
    case 2:
        object = __nw__7TObjectFUl(0x1A4);
        if (object != 0) {
            temp_r31 = TQuestListOnline::get_quest_count();
            object = (s32)init_from_script((void *)object, (s32)tl_su, (s32)(TQuestListOnline__sub_801F6540()), (s32)temp_r31);
        }
        return object;
    case 3:
        var_r30_2 = __nw__7TObjectFUl(0x1A4);
        if (var_r30_2 != 0) {
            var_r30_2 = (s32)init_from_script((void *)var_r30_2, (s32)tl_su, (s32)(TQuestListVM::get_instance()), (s32)TQuestListVM__sub_801F6530());
        }
        TQuestListVM::reset();
        return var_r30_2;
    case 4:
        var_r30_3 = __nw__7TObjectFUl(0x1A4);
        if (var_r30_3 != 0) {
            quest_count = TQuestListOnline::get_quest_count();
            var_r30_3 = (s32)init_from_script((void *)var_r30_3, (s32)tl_su, (s32)(TQuestListOnline__sub_801F6540()), (s32)quest_count);
        }
        return var_r30_3;
    case 5:
        var_r30_4 = __nw__7TObjectFUl(0x1A4);
        if (var_r30_4 != 0) {
            var_r30_4 = ((s32)construct_load_quest((QuestRoot *)var_r30_4, (void *)tl_su, (void *)(TQuestThread__sub_801F6548())));
        }
        return var_r30_4;
    default:
        return 0;
    }
}

void *TQuestThread::init_from_script(void *object, int arg1, int arg2, int arg3) {
    QuestRoot *root = (QuestRoot *)object;
    s32 temp_r31;
    __ct__7TObjectFP7TObject(object, (void *)arg1);
    *(s32 **)((s8 *)object + 0x18) = TQuestThread__data_804C8678;
    if (arg3 < 0) {
        queue_destruction__7TObjectFv(object);
    } else {
        temp_r31 = arg3 + 0x400;
        root->script = ((TQuestVmDownLoadServer *)temp_r31)->alloc();
        memcpy(root->script, arg2, temp_r31);
        *(void **)&quest_mission_manager = object;
        init_quest_script_context(root->script, &root->ctx);
        root->kind = 0;
    }
    clear_thread_state();
    return object;
}

u8 *load_quest_root_script(u8 *object, void *parent, void *scene, s32 arg3) {
    s32 size;
    void *mem;
    QuestRoot *root;
    __ct__7TObjectFP7TObject(object, parent);
    *(s32 **)((s8 *)object + 0x18) = TQuestThread__data_804C8678;
    ((QuestRoot *)object)->kind = arg3;
    ((QuestRoot *)object)->script = 0;
    root = (QuestRoot *)object;
    switch (root->kind) {
    case 0:
        copy_name((s32)lbl_8044A640);
        size = ((TScene *)scene)->update_lobby_scene();
        if (size < 0) {
            queue_destruction__7TObjectFv(object);
        } else {
            root->script = ((TQuestVmDownLoadServer *)(size + 0x400))->alloc();
            read_disc_file(scene, root->script);
            copy_name((s32)&lbl_805DC50C);
            (*(u8 * *)&quest_mission_manager) = object;
            init_quest_script_context(root->script, &root->ctx);
            new TQuestThread((TObject *)object, 0);
        }
        TQuestThread::clear_thread_state();
        break;
    case 1:
        size = ((TScene *)scene)->update_lobby_scene();
        if (size < 0) {
            queue_destruction__7TObjectFv(object);
        } else {
            root->script = ((TQuestVmDownLoadServer *)(size + 0x400))->alloc();
            read_disc_file(scene, root->script);
            quest_area_manager = (u32)object;
            init_quest_script_context(root->script, &root->ctx);
        }
        break;
    default:
        queue_destruction__7TObjectFv(root);
        break;
    }
    return object;
}
extern "C" {

QuestRoot *TQuestThread::construct_load_quest(QuestRoot *self, void *parent, void *scene) {
    s32 r;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = ((u8 *)&TQuestThread__data_804C8678);
    copy_name((s32)lbl_8044A640);
    r = ((TScene *)scene)->update_lobby_scene();
    if (r < 0) {
        queue_destruction__7TObjectFv(self);
    } else {
        self->script = ((TQuestVmDownLoadServer *)(r + 0x400))->alloc();
        read_disc_file(scene, self->script);
        copy_name((s32)&lbl_805DC50C);
        (*(QuestRoot * *)&quest_mission_manager) = self;
        init_quest_script_context(self->script, &self->ctx);
        self->kind = 0;
    }
    clear_thread_state();
    return self;
}

void TQuestThread::set_status_flag_80(void *p) { *(u16*)((char*)p + 0x70) |= 0x80; }

void set_item_name_selection_index(int a0) { item_name_selection_index = a0; }

int TQuestThread::queue_destruction(void *p) { return queue_destruction__7TObjectFv(p); }

void free_menu_object(void* p) { void* m = *(void**)((char*)p + 0x20); if (m) fn_801F6520(m); }

void fn_801F6520(void* p) { *(u16*)((char*)p + 0x60) &= 0xfffe; }

void __dt__18TObjItemNameSelectFv();
void __dt__17TObjItemNameEntryFv();
void __dt__17TQuestThreadBoardFv();
void __dt__12TQuestThreadFv();
void run_task__7TObjectFv();
void render__7TObjectFv();
void render_shadows__7TObjectFv();
}
void *__vt__18TObjItemNameSelect[] = {
    0,
    0,
    (void *)__dt__18TObjItemNameSelectFv,
    (void *)run_task__7TObjectFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};
void *__vt__17TObjItemNameEntry[] = {
    0,
    0,
    (void *)__dt__17TObjItemNameEntryFv,
    (void *)run_task__7TObjectFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};
void *__vt__17TQuestThreadBoard[] = {
    0,
    0,
    (void *)__dt__17TQuestThreadBoardFv,
    (void *)run_task__17TQuestThreadBoardFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};
void *__vt__12TQuestThread[] = {
    0,
    0,
    (void *)__dt__12TQuestThreadFv,
    (void *)run_task__12TQuestThreadFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};
