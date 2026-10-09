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
void free__11TOBoss4RockFUi(void *);
void clear_counter__6TLobbyFv();
void reset_download__22TQuestVmDownLoadServerFv();
void ensure_online_quests_loaded__16TQuestListOnlineFv();
void clear_flag3_all_tasks__9TMainTaskFv(TMainTask *);
s32 TWindow__close(int);
extern unsigned char TQuestListOnline__data_80513DE8[];
extern unsigned char TQuestListOnline__data_80513E24[];
extern s32 evt2_random_enemies_mode;
extern int TQuestListOnline__data_805D6198;
extern int TQuestListOnline__data_805D619C;
extern u32 TQuestListOnline__data_805D61A0;
extern u32 TQuestListOnline__data_805D61A4;
extern void *TQuestListOnline__data_805D61A8;
void close_windows_and_reset__16TQuestListOnlineFv(void);
void TKeyBoardControl__sub_8000F950();
void TKeyBoardControl__sub_8000F95C();
s32 is_flag_set__6TLobbyFv();
void set_enemy_mode_flag__6TLobbyFv();
void TQuestListOnline__sub_8013ACF4(s32);
void free__11TOBoss4RockFUi(void *);
void clear_counter__6TLobbyFv();
void activate_body_collision__10TObjPlayerFPv(void *);
void clear_lobby_flag__10TObjPlayerFPv(void *);
void *get_player_by_client_id(s32);
void TQuestListOnline__sub_802176DC(void *, s32);
void decompress_quest_buffer__16TQuestListOnlineFi(void *, s32);
s32 init__16TQuestListOnlineFv();
void clear_flag3_all_tasks__9TMainTaskFv(TMainTask *);
s32 TWindow__close(int);
s32 unsuppress_slot__11TWindowCtrlFi(void *);
extern unsigned char TQuestListOnline__data_80513DE8[];
extern unsigned char TQuestListOnline__data_80513E24[];
extern s32 local_client_id;
extern s32 evt2_random_enemies_mode;
extern int TQuestListOnline__data_805D6198;
extern int TQuestListOnline__data_805D619C;
extern u32 TQuestListOnline__data_805D61A0;
extern u32 TQuestListOnline__data_805D61A4;
extern void *TQuestListOnline__data_805D61A8;
extern s32 lbl_805D61AC;
void handle_quest_ready__16TQuestListOnlineFv(void);
void *TQuestVmDownLoadServer__sub_8006EF6C(s32);
void update_graph__8TDLGraphFii(s32, s32);
void send_quest_barrier__9TProtocolFv(s32);
void set_field_1c__6TLobbyFPvf(void *, f32);
void complete_reveal__14TWindowMessageFPv(void *);
void send_and_handle__6TLobbyFPvii(void *, void *, s32);
void *update_window_mode_from_progress__6TLobbyFiPv(void *, Pos_80214F80 *);
void *get_window_layout_position(s32);
int strncmp(const char *, const char *, u32);
void *memcpy(void *, const void *, u32);
extern Pos_80214F80 lbl_8044BCC8[];
extern unsigned char TQuestListOnline__data_80513DE8[];
extern unsigned char TQuestListOnline__data_80513E24[];
extern s32 TLobby__protocol_instance;
extern int TQuestListOnline__data_805D6198;
extern int TQuestListOnline__data_805D619C;
extern void *TQuestListOnline__data_805D61A8;
extern s32 lbl_805D61B0;
extern s32 lbl_805D61B4;
extern const f32 lbl_805DC660;
void handle_quest_download_chunk__6TLobbyFPv(Pkt_80214F80 *p);
}

extern "C" {
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 TWindow__close(int);
s32 unsuppress_slot__11TWindowCtrlFi(void *);
extern s32 lbl_8050E208[];
extern s32 local_client_id;
extern u32 TQuestListOnline__data_805D61A4;
}

void THunterGuildSeqOnlineTask::run_task() {
    u8 *p;
    if (TQuestListOnline__data_805D61A4 != 0) {
        p = (u8 *)lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button((int)p, 4) != 0 ||
            TWindowShortListCtrl__check_controller_button((int)p, 2) != 0) {
            TWindow__close((int)TQuestListOnline__data_805D61A4);
            TQuestListOnline__data_805D61A4 = 0;
            unsuppress_slot__11TWindowCtrlFi((void *)local_client_id);
        }
    }
}

THunterGuildSeqOnlineTask::~THunterGuildSeqOnlineTask() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *THunterGuildSeqOnlineTask__ct(void *arg0);
void handle_6x73_exit_quest(void);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void *init__22THunterGuildSeqOfflineFPvPvPv(void *, void *, void *);

extern M2C_UNK __vt__25THunterGuildSeqOnlineTask[];
extern void *lbl_805D3660;

void *THunterGuildSeqOnlineTask__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25THunterGuildSeqOnlineTask;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3660;
    return arg0;
}

extern void *tl_00;
extern unsigned char reset_random_enemies_mode[];

void handle_6x73_exit_quest(void) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, reset_random_enemies_mode);
    }
}
void close_windows_and_reset__16TQuestListOnlineFv(void) {
    u8 *q;
    if (get_input__16TKeyBoardControlFv() == 0) {
        clear_counter__6TLobbyFv();
        evt2_random_enemies_mode = 0;
        TKeyBoardControl__sub_8000F95C();
        q = TQuestListOnline__data_80513E24;
        if (*(void **)(q + 0x38) != NULL) {
            free__11TOBoss4RockFUi(*(void **)(q + 0x38));
            *(void **)(q + 0x38) = NULL;
        }
        q = TQuestListOnline__data_80513DE8;
        if (*(void **)(q + 0x38) != NULL) {
            free__11TOBoss4RockFUi(*(void **)(q + 0x38));
            *(void **)(q + 0x38) = NULL;
        }
        if (TQuestListOnline__data_805D61A0 != 0) {
            TWindow__close((int)TQuestListOnline__data_805D61A0);
            TQuestListOnline__data_805D61A0 = 0;
        }
        if (TQuestListOnline__data_805D61A4 != 0) {
            TWindow__close((int)TQuestListOnline__data_805D61A4);
            TQuestListOnline__data_805D61A4 = 0;
        }
        if (TQuestListOnline__data_805D61A8 != NULL) {
            TWindow__close((int)TQuestListOnline__data_805D61A8);
            TQuestListOnline__data_805D61A8 = NULL;
        }
        TQuestListOnline__data_805D6198 = 0;
        TQuestListOnline__data_805D619C = 0;
        TQuestListOnline__sub_8013ACF4(0xB);
        ensure_online_quests_loaded__16TQuestListOnlineFv();
        clear_flag3_all_tasks__9TMainTaskFv(&main_task);
        reset_download__22TQuestVmDownLoadServerFv();
    }
}
void handle_quest_ready__16TQuestListOnlineFv(void) {
    s32 i;
    void *p;
    u8 *q;
    s32 r;
    s32 m;
    if (init__16TQuestListOnlineFv() != 0) {
        q = TQuestListOnline__data_80513E24;
        decompress_quest_buffer__16TQuestListOnlineFi(*(void **)(q + 0x38), *(s32 *)(q + 0x34));
        q = TQuestListOnline__data_80513DE8;
        TQuestListOnline__sub_802176DC(*(void **)(q + 0x38), *(s32 *)(q + 0x34));
        set_enemy_mode_flag__6TLobbyFv();
        r = is_flag_set__6TLobbyFv();
        m = 2;
        if (r != 0) {
            m = 4;
        }
        evt2_random_enemies_mode = m;
        TKeyBoardControl__sub_8000F950();
        unsuppress_slot__11TWindowCtrlFi((void *)local_client_id);
    } else {
        clear_counter__6TLobbyFv();
        evt2_random_enemies_mode = 0;
        TKeyBoardControl__sub_8000F95C();
        q = TQuestListOnline__data_80513E24;
        if (*(void **)(q + 0x38) != NULL) {
            free__11TOBoss4RockFUi(*(void **)(q + 0x38));
            *(void **)(q + 0x38) = NULL;
        }
        q = TQuestListOnline__data_80513DE8;
        if (*(void **)(q + 0x38) != NULL) {
            free__11TOBoss4RockFUi(*(void **)(q + 0x38));
            *(void **)(q + 0x38) = NULL;
        }
        TQuestListOnline__data_805D6198 = 0;
        TQuestListOnline__data_805D619C = 0;
        TQuestListOnline__sub_8013ACF4(0xB);
    }
    if (TQuestListOnline__data_805D61A0 != 0) {
        TWindow__close((int)TQuestListOnline__data_805D61A0);
        TQuestListOnline__data_805D61A0 = 0;
    }
    if (TQuestListOnline__data_805D61A4 != 0) {
        TWindow__close((int)TQuestListOnline__data_805D61A4);
        TQuestListOnline__data_805D61A4 = 0;
    }
    if (TQuestListOnline__data_805D61A8 != NULL) {
        TWindow__close((int)TQuestListOnline__data_805D61A8);
        TQuestListOnline__data_805D61A8 = NULL;
    }
    clear_flag3_all_tasks__9TMainTaskFv(&main_task);
    lbl_805D61AC = 0;
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != NULL) {
            clear_lobby_flag__10TObjPlayerFPv(p);
            activate_body_collision__10TObjPlayerFPv(p);
        }
    }
    unsuppress_slot__11TWindowCtrlFi((void *)local_client_id);
}
void handle_quest_download_chunk__6TLobbyFPv(Pkt_80214F80 *p) {
    int *flag;
    u8 *buf;
    if (p != NULL) {
        if (strncmp((char *)TQuestListOnline__data_80513DE8, p->name, 0x10) == 0) {
            flag = &TQuestListOnline__data_805D619C;
            buf = *(u8 **)(TQuestListOnline__data_80513DE8 + 0x38);
        } else if (strncmp((char *)TQuestListOnline__data_80513E24, p->name, 0x10) == 0) {
            flag = &TQuestListOnline__data_805D6198;
            buf = *(u8 **)(TQuestListOnline__data_80513E24 + 0x38);
        } else {
            return;
        }
        if (buf != NULL) {
            memcpy(buf + (p->chunk << 10), p->data, p->size);
            lbl_805D61B4 += p->size;
            update_graph__8TDLGraphFii(lbl_805D61B4, lbl_805D61B0);
            if (p->size < 0x400) {
                *flag = 1;
            }
        } else {
            return;
        }
    }
    if (TQuestListOnline__data_805D6198 != 0 && TQuestListOnline__data_805D619C != 0) {
        if (TQuestListOnline__data_805D61A8 == NULL) {
            Pos_80214F80 pos = lbl_8044BCC8[0];
            TQuestListOnline__data_805D61A8 = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0xBE), &pos);
            send_and_handle__6TLobbyFPvii(TQuestListOnline__data_805D61A8, TQuestVmDownLoadServer__sub_8006EF6C(0x61), 1);
            set_field_1c__6TLobbyFPvf(TQuestListOnline__data_805D61A8, lbl_805DC660);
            complete_reveal__14TWindowMessageFPv(TQuestListOnline__data_805D61A8);
        }
        send_quest_barrier__9TProtocolFv(TLobby__protocol_instance);
    }
}

}
