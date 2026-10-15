#include "pso/THunterGuildSeqOnlineTask.h"

#include "types.h"
#include "pso/TObject.h"

struct Pkt_80214F80 {
    u8 f0;
    u8 chunk;
    u8 pad2[2];
    char name[0x10];
    u8 data[0x400];
    u32 size;
};

struct Pos_80214F80 { s32 a; s32 b; };

extern "C" {
s32 get_input__16TKeyBoardControlFv();
void TKeyBoardControl__sub_8000F95C();
void TQuestListOnline__sub_8013ACF4(s32);
void mem_free(void *);
void clear_counter__6TLobbyFv();
void reset_download__22TQuestVmDownLoadServerFv();
void ensure_online_quests_loaded__16TQuestListOnlineFv();
void clear_flag3_all_tasks__9TMainTaskFv(TMainTask *);
s32 TWindow__close(int);
extern unsigned char TQuestListOnline__dat_download_state[];
extern unsigned char TQuestListOnline__bin_download_state[];
extern s32 evt2_random_enemies_mode;
extern int TQuestListOnline__bin_download_complete;
extern int TQuestListOnline__dat_download_complete;
extern u32 TQuestListOnline__download_window;
extern u32 TQuestListOnline__quest_info_window;
extern void *TQuestListOnline__download_barrier_window;
void TKeyBoardControl__sub_8000F950();
void TKeyBoardControl__sub_8000F95C();
s32 is_flag_set__6TLobbyFv();
void set_enemy_mode_flag__6TLobbyFv();
void TQuestListOnline__sub_8013ACF4(s32);
void mem_free(void *);
void clear_counter__6TLobbyFv();
void activate_body_collision__10TObjPlayerFPv(void *);
void clear_lobby_flag__10TObjPlayerFPv(void *);
void *get_player_by_client_id(s32);
void TQuestListOnline__sub_802176DC(void *, s32);
void decompress_quest_buffer__16TQuestListOnlineFl(void *, s32);
s32 init__16TQuestListOnlineFv();
void clear_flag3_all_tasks__9TMainTaskFv(TMainTask *);
s32 TWindow__close(int);
s32 unsuppress_slot__11TWindowCtrlFv(void *);
extern unsigned char TQuestListOnline__dat_download_state[];
extern unsigned char TQuestListOnline__bin_download_state[];
extern s32 local_client_id;
extern s32 evt2_random_enemies_mode;
extern int TQuestListOnline__bin_download_complete;
extern int TQuestListOnline__dat_download_complete;
extern u32 TQuestListOnline__download_window;
extern u32 TQuestListOnline__quest_info_window;
extern void *TQuestListOnline__download_barrier_window;
extern s32 quest_download_active;
void *TQuestVmDownLoadServer__sub_8006EF6C(s32);
void update_graph__8TDLGraphFll(s32, s32);
void send_quest_barrier__9TProtocolFv(s32);
void set_field_1c__6TLobbyFf(void *, f32);
void complete_reveal__14TWindowMessageFPv(void *);
void send_and_handle__6TLobbyFii(void *, void *, s32);
void *update_window_mode_from_progress__6TLobbyFPv(void *, Pos_80214F80 *);
void *get_window_layout_position(s32);
int strncmp(const char *, const char *, u32);
void *memcpy(void *, const void *, u32);
extern Pos_80214F80 lbl_8044BCC8[];
extern unsigned char TQuestListOnline__dat_download_state[];
extern unsigned char TQuestListOnline__bin_download_state[];
extern s32 TLobby__protocol_instance;
extern int TQuestListOnline__bin_download_complete;
extern int TQuestListOnline__dat_download_complete;
extern void *TQuestListOnline__download_barrier_window;
extern s32 quest_download_received_bytes;
extern s32 quest_download_graph_current_bytes;
extern const f32 lbl_805DC660;
}

extern "C" {
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 TWindow__close(int);
s32 unsuppress_slot__11TWindowCtrlFv(void *);
extern s32 controller_input_state[];
extern s32 local_client_id;
extern u32 TQuestListOnline__quest_info_window;
}

void THunterGuildSeqOnlineTask::run_task() {
    u8 *p;
    if (TQuestListOnline__quest_info_window != 0) {
        p = (u8 *)controller_input_state + 0x20;
        if (TWindowShortListCtrl__check_controller_button((int)p, 4) != 0 ||
            TWindowShortListCtrl__check_controller_button((int)p, 2) != 0) {
            TWindow__close((int)TQuestListOnline__quest_info_window);
            TQuestListOnline__quest_info_window = 0;
            unsuppress_slot__11TWindowCtrlFv((void *)local_client_id);
        }
    }
}

THunterGuildSeqOnlineTask::~THunterGuildSeqOnlineTask() {}

#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TQuestListOnline.h"

extern "C" {

void *THunterGuildSeqOnlineTask__ct(void *arg0);
void handle_6x73_exit_quest(void);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void *init__22THunterGuildSeqOfflineFPvPv(void *, void *, void *);

extern s32 __vt__25THunterGuildSeqOnlineTask[];
extern void *lbl_805D3660;

void *THunterGuildSeqOnlineTask__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__25THunterGuildSeqOnlineTask;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3660;
    return arg0;
}

extern void *tl_00;
extern unsigned char reset_random_enemies_mode[];

void handle_6x73_exit_quest(void) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init__22THunterGuildSeqOfflineFPvPv(o, tl_00, reset_random_enemies_mode);
    }
}
void TQuestListOnline::close_windows_and_reset() {
    u8 *q;
    if (get_input__16TKeyBoardControlFv() == 0) {
        clear_counter__6TLobbyFv();
        evt2_random_enemies_mode = 0;
        TKeyBoardControl__sub_8000F95C();
        q = TQuestListOnline__bin_download_state;
        if (*(void **)(q + 0x38) != NULL) {
            mem_free(*(void **)(q + 0x38));
            *(void **)(q + 0x38) = NULL;
        }
        q = TQuestListOnline__dat_download_state;
        if (*(void **)(q + 0x38) != NULL) {
            mem_free(*(void **)(q + 0x38));
            *(void **)(q + 0x38) = NULL;
        }
        if (TQuestListOnline__download_window != 0) {
            TWindow__close((int)TQuestListOnline__download_window);
            TQuestListOnline__download_window = 0;
        }
        if (TQuestListOnline__quest_info_window != 0) {
            TWindow__close((int)TQuestListOnline__quest_info_window);
            TQuestListOnline__quest_info_window = 0;
        }
        if (TQuestListOnline__download_barrier_window != NULL) {
            TWindow__close((int)TQuestListOnline__download_barrier_window);
            TQuestListOnline__download_barrier_window = NULL;
        }
        TQuestListOnline__bin_download_complete = 0;
        TQuestListOnline__dat_download_complete = 0;
        TQuestListOnline__sub_8013ACF4(0xB);
        ensure_online_quests_loaded__16TQuestListOnlineFv();
        clear_flag3_all_tasks__9TMainTaskFv(&main_task);
        reset_download__22TQuestVmDownLoadServerFv();
    }
}
void TQuestListOnline::handle_quest_ready() {
    s32 i;
    void *p;
    u8 *q;
    s32 r;
    s32 m;
    if (init__16TQuestListOnlineFv() != 0) {
        q = TQuestListOnline__bin_download_state;
        decompress_quest_buffer__16TQuestListOnlineFl(*(void **)(q + 0x38), *(s32 *)(q + 0x34));
        q = TQuestListOnline__dat_download_state;
        TQuestListOnline__sub_802176DC(*(void **)(q + 0x38), *(s32 *)(q + 0x34));
        set_enemy_mode_flag__6TLobbyFv();
        r = is_flag_set__6TLobbyFv();
        m = 2;
        if (r != 0) {
            m = 4;
        }
        evt2_random_enemies_mode = m;
        TKeyBoardControl__sub_8000F950();
        unsuppress_slot__11TWindowCtrlFv((void *)local_client_id);
    } else {
        clear_counter__6TLobbyFv();
        evt2_random_enemies_mode = 0;
        TKeyBoardControl__sub_8000F95C();
        q = TQuestListOnline__bin_download_state;
        if (*(void **)(q + 0x38) != NULL) {
            mem_free(*(void **)(q + 0x38));
            *(void **)(q + 0x38) = NULL;
        }
        q = TQuestListOnline__dat_download_state;
        if (*(void **)(q + 0x38) != NULL) {
            mem_free(*(void **)(q + 0x38));
            *(void **)(q + 0x38) = NULL;
        }
        TQuestListOnline__bin_download_complete = 0;
        TQuestListOnline__dat_download_complete = 0;
        TQuestListOnline__sub_8013ACF4(0xB);
    }
    if (TQuestListOnline__download_window != 0) {
        TWindow__close((int)TQuestListOnline__download_window);
        TQuestListOnline__download_window = 0;
    }
    if (TQuestListOnline__quest_info_window != 0) {
        TWindow__close((int)TQuestListOnline__quest_info_window);
        TQuestListOnline__quest_info_window = 0;
    }
    if (TQuestListOnline__download_barrier_window != NULL) {
        TWindow__close((int)TQuestListOnline__download_barrier_window);
        TQuestListOnline__download_barrier_window = NULL;
    }
    clear_flag3_all_tasks__9TMainTaskFv(&main_task);
    quest_download_active = 0;
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != NULL) {
            clear_lobby_flag__10TObjPlayerFPv(p);
            activate_body_collision__10TObjPlayerFPv(p);
        }
    }
    unsuppress_slot__11TWindowCtrlFv((void *)local_client_id);
}
void TLobby::handle_quest_download_chunk() {
    Pkt_80214F80 *p = (Pkt_80214F80 *)this;
    int *flag;
    u8 *buf;
    if (p != NULL) {
        if (strncmp((char *)TQuestListOnline__dat_download_state, p->name, 0x10) == 0) {
            flag = &TQuestListOnline__dat_download_complete;
            buf = *(u8 **)(TQuestListOnline__dat_download_state + 0x38);
        } else if (strncmp((char *)TQuestListOnline__bin_download_state, p->name, 0x10) == 0) {
            flag = &TQuestListOnline__bin_download_complete;
            buf = *(u8 **)(TQuestListOnline__bin_download_state + 0x38);
        } else {
            return;
        }
        if (buf != NULL) {
            memcpy(buf + (p->chunk << 10), p->data, p->size);
            quest_download_graph_current_bytes += p->size;
            update_graph__8TDLGraphFll(quest_download_graph_current_bytes, quest_download_received_bytes);
            if (p->size < 0x400) {
                *flag = 1;
            }
        } else {
            return;
        }
    }
    if (TQuestListOnline__bin_download_complete != 0 && TQuestListOnline__dat_download_complete != 0) {
        if (TQuestListOnline__download_barrier_window == NULL) {
            Pos_80214F80 pos = lbl_8044BCC8[0];
            TQuestListOnline__download_barrier_window = update_window_mode_from_progress__6TLobbyFPv(get_window_layout_position(0xBE), &pos);
            send_and_handle__6TLobbyFii(TQuestListOnline__download_barrier_window, TQuestVmDownLoadServer__sub_8006EF6C(0x61), 1);
            set_field_1c__6TLobbyFf(TQuestListOnline__download_barrier_window, lbl_805DC660);
            complete_reveal__14TWindowMessageFPv(TQuestListOnline__download_barrier_window);
        }
        send_quest_barrier__9TProtocolFv(TLobby__protocol_instance);
    }
}

}
