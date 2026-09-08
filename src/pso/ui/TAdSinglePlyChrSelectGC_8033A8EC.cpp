#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8033B264_lbl_804EF728 {
    M2C_UNK value;
    u8 remaining[0x194];
};

struct RecoveredGlobal_8033B264_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
extern s32 lbl_805D6D8C;
void set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int a0);
extern s32 lbl_805D6D80;
extern s32 lbl_805D6D84;
extern s32 lbl_805D6D88;
extern s32 lbl_805D6D8C;
void init_logo_state__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void noop__23TAdSinglePlyChrSelectGCFv(void);
int safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
void free_buffer__23TAdSinglePlyChrSelectGCFPv(void* p);
int memset(void*, void*, void*);
void clear_buffer(void* p);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
void alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(void *arg0);
extern s32 lbl_805D6D90;
void TAdSinglePlyChrSelectGC__sub_8033A9F0(u8 *arg0);
int queue_destruction__7TObjectFv(void*);
int queue_destruction__23TAdSinglePlyChrSelectGCFPv(void* p);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8033B5F0(void *);
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);
void update_setup__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C();
M2C_UNK TAdSinglePlyChrSelectGC__sub_8033B5F0(void *);
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
void update_select_state__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void TAdSinglePlyChrSelectGC__sub_8033B9E0(void *);
u8 * create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(void *, void *, void *);
void TAdSinglePlyChrSelectGC__sub_8033B190(u8 *arg0);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
void set_char_slots__23TAdSinglePlyChrSelectGCFPvii(void *arg0, s32 arg1, s32 arg2);
int TKeyBoardControl__sub_8000F9B0(void*);
int TAdSinglePlyChrSelectGC__sub_8033B244(void* p);
M2C_UNK TLobby__sub_800FD6A0(void *, int);
M2C_UNK render_tick__Fv();
M2C_UNK set_and_notify__6TLobbyFi(int);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
extern RecoveredGlobal_8033B264_lbl_804EF728 lbl_804EF728;
extern RecoveredGlobal_8033B264_main_task main_task;
void TAdSinglePlyChrSelectGC__sub_8033B264(void);
M2C_UNK TWindow__close(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int TWindowSubComCard__sub_80265E60(void*, float);
int check_room_seq_4__16TAdChrSelASlotGCFii(void*, void*);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void*, void*, void*, void*);
    extern unsigned char lbl_80477D58[];
    extern const float lbl_805DFA30;
void init_warp__23TAdSinglePlyChrSelectGCFPv(void* a0);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int TWindowSubComCard__sub_80265E60(void*, float);
int check_room_seq_4__16TAdChrSelASlotGCFii(void*, void*);
void close_window__23TAdSinglePlyChrSelectGCFPv(void *arg0);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void*, void*, void*, void*);
extern unsigned char lbl_80477D58[];
extern const float lbl_805DFA30;
void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0);
}

extern "C" {

void reset_quest_id__23TAdSinglePlyChrSelectGCFv(void);

extern s32 lbl_805D6D8C;

void reset_quest_id__23TAdSinglePlyChrSelectGCFv(void) {
    lbl_805D6D8C = 0xFFFF;
}
void set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int a0) { (*(int *)&lbl_805D6D8C) = a0; }
void init_logo_state__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    lbl_805D6D88 = 0;
    lbl_805D6D84 = 0;
    lbl_805D6D80 = arg0;
    lbl_805D6D8C = 0xFFFF;
}
void noop__23TAdSinglePlyChrSelectGCFv(void) {  }
void free_buffer__23TAdSinglePlyChrSelectGCFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { safe_free__23TAdSinglePlyChrSelectGCFUi(*(void**)((char*)p + 0x20)); *(int*)((char*)p + 0x20) = 0; *(int*)((char*)p + 0x1c) = 0; } }
void clear_buffer(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { memset(*(void**)((char*)p + 0x20), (void*)0, *(void**)((char*)p + 0x1c)); } }
void alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x16000;
        M2C_FIELD(arg0, u32 *, 0x20) = alloc__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, s32 *, 0x1C));
    }
}
void TAdSinglePlyChrSelectGC__sub_8033A9F0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = 0xB;
    lbl_805D6D90 &= 0xFFFFFFFE;
    set_char_slots__23TAdSinglePlyChrSelectGCFPvii((void *)(arg0), (s32)(0xA), (s32)(M2C_FIELD(arg0, s32 *, 0x24) + 0xF));
    init_warps__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
}
int queue_destruction__23TAdSinglePlyChrSelectGCFPv(void* p) { return queue_destruction__7TObjectFv(p); }
void update_setup__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (setup__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x24)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 8;
        set_player_index__23TAdSinglePlyChrSelectGCFi(0xC);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    TAdSinglePlyChrSelectGC__sub_8033B5F0(arg0);
}
void update_select_state__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (TAdSinglePlyChrSelectGC__sub_801FDA4C() == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 5;
        set_player_index__23TAdSinglePlyChrSelectGCFi(6);
        set_char_slots__23TAdSinglePlyChrSelectGCFPvii((void *)((void *)(arg0)), (s32)((s32)(0xC)), (s32)((s32)(-1)));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    TAdSinglePlyChrSelectGC__sub_8033B5F0(arg0);
}
void TAdSinglePlyChrSelectGC__sub_8033B190(u8 *arg0) {
    u8 *temp_r3;
    M2C_FIELD(arg0, u8 **, 0x40) = create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(arg0, NULL, NULL);
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x40));
    if (temp_r3 != NULL) {
        TAdSinglePlyChrSelectGC__sub_8033B9E0(temp_r3);
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
}
void set_char_slots__23TAdSinglePlyChrSelectGCFPvii(void *arg0, s32 arg1, s32 arg2) {
    send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x38), TQuestVmDownLoadServer__sub_8006EF6C(arg1), 1);
    if (arg2 != -1) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x38), TQuestVmDownLoadServer__sub_8006EF6C(arg2), 8);
    }
}
int TAdSinglePlyChrSelectGC__sub_8033B244(void* p) { return TKeyBoardControl__sub_8000F9B0(p); }
void TAdSinglePlyChrSelectGC__sub_8033B264(void) {
    delete_all_task_children__9TMainTaskFv((void *) (&main_task.value));
    TLobby__sub_8022743C();
    set_and_notify__6TLobbyFi((int) (0));
    TLobby__sub_800FD6A0((void *) (&lbl_804EF728.value), (int) (0x30));
    render_tick__Fv();
}
void close_window__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x3C);
    if ((u32) temp_r3 != 0U) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
    }
}
void init_warp__23TAdSinglePlyChrSelectGCFPv(void* a0) { close_window__23TAdSinglePlyChrSelectGCFPv((void *)(a0)); *(int*)((char*)a0 + 0x3c) = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_80477D58, (void*)2); forward_trade_action_default__16TObjCityMainWarpFPviii((void*)(*(int*)((char*)a0 + 0x3c)), (void*)((int)TQuestVmDownLoadServer__sub_8006EF6C((s32)((void*)14))), (void*)6, (void*)1); TWindowSubComCard__sub_80265E60((void*)(*(int*)((char*)a0 + 0x3c)), lbl_805DFA30); }
void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0) { close_window__23TAdSinglePlyChrSelectGCFPv((void *)(a0)); *(int*)((char*)a0 + 0x3c) = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_80477D58, (void*)2); forward_trade_action_default__16TObjCityMainWarpFPviii((void*)(*(int*)((char*)a0 + 0x3c)), (void*)((int)TQuestVmDownLoadServer__sub_8006EF6C((s32)((void*)13))), (void*)6, (void*)0); forward_trade_action_default__16TObjCityMainWarpFPviii((void*)(*(int*)((char*)a0 + 0x3c)), (void*)((int)TQuestVmDownLoadServer__sub_8006EF6C((s32)((void*)14))), (void*)6, (void*)1); TWindowSubComCard__sub_80265E60((void*)(*(int*)((char*)a0 + 0x3c)), lbl_805DFA30); }

typedef char RecoveredGlobal_8033B264_lbl_804EF728_size[sizeof(RecoveredGlobal_8033B264_lbl_804EF728) == 0x198 ? 1 : -1];
typedef char RecoveredGlobal_8033B264_main_task_size[sizeof(RecoveredGlobal_8033B264_main_task) == 0x34 ? 1 : -1];

}
