#include "types.h"
#include "pso/misc/TQuestListOnline.h"

struct S217 { char pad[0x38]; void *f38; };

extern "C" {
s32 select_cursor_entry__6TLobbyFPv(void *);
extern u32 TQuestListOnline__quest_list_buffer;
extern void *TQuestListOnline__instance;
s32 get_selected_entry__16TQuestListOnlineFv(void);
s32 prs_decompress_buffer(s32, s32);
extern s32 TQuestListOnline__decompression_cursor;
extern u32 online_quest_dat_buffer;
extern s32 online_quest_list_decompressed_size;
void TQuestListOnline__sub_802176DC(s32 arg0);
s32 prs_decompress_buffer(s32, s32);
extern s32 TQuestListOnline__decompression_cursor;
extern u32 online_quest_bin_data;
extern s32 quest_bin_decompressed_size;
void decompress_quest_buffer__16TQuestListOnlineFi(s32 arg0);
void TLobby__sub_8001EDF4(s32);
s32 TLobby__sub_8001EEF4();
extern s32 lbl_8044BEB0[];
void ensure_online_quests_loaded__16TQuestListOnlineFv(void);

extern void *TQuestListOnline__instance;
extern s32 online_quest_list_state;
s32 get_list_state__16TQuestListOnlineFv(void);
}

extern "C" {

int get_selected_quest_id__16TQuestListOnlineFv(void);
u8 get_unlocked_tier__16TQuestListOnlineFv(void);
s32 init__16TQuestListOnlineFv(void);

s32 TLobby__sub_8001EEF4();
s32 tmp_buf_use_req__6TLobbyFPv(s32 *);
s32 get_party_min_tier__6TLobbyFi(s32);
s32 get_story_flag(s32);
s32 TWindow__close(void *);
s32 is_flag_set__6TLobbyFv();
s32 queue_destruction__7TObjectFv(void *);

extern void *TQuestListOnline__selected_quest_info;
extern void *TQuestListOnline__instance;

s32 get_list_state__16TQuestListOnlineFv(void) {
    if ((void *) TQuestListOnline__instance == NULL) {
        return 0;
    }
    if ((u32) *(u32 *)((s8 *)TQuestListOnline__instance + 0x38) == 0U) {
        return 0;
    }
    switch (((TQuestListOnline*)TQuestListOnline__instance)->get_selection_stage()) {
    case 0:
        return 1;
    case 1:
    case 2:
        switch (online_quest_list_state) {
        case 0:
            return 2;
        case 1:
            return 3;
        default:
            return 2;
        }
    default:
        return 0;
    }
}

#pragma push
#pragma fp_contract on
s32 get_selected_entry__16TQuestListOnlineFv(void) {
    struct S217 *p = (*(struct S217 * *)&TQuestListOnline__instance);
    if (p != NULL) {
        void *q = p->f38;
        if (q != NULL && TQuestListOnline__quest_list_buffer != 0U) {
            u32 idx = select_cursor_entry__6TLobbyFPv(q) * 0x98 + 0xC;
            return TQuestListOnline__quest_list_buffer + idx;
        }
    }
    return 0;
}
#pragma pop

int get_selected_quest_id__16TQuestListOnlineFv(void) {
    if (((void *) TQuestListOnline__instance != NULL) && ((u32) *(u32 *)((s8 *)TQuestListOnline__instance + 0x40) != 0U)) {
        return *(u8 *)((s8 *)TQuestListOnline__selected_quest_info + 1);
    }
    return -1;
}

extern s32 online_quest_list_state;

u8 get_unlocked_tier__16TQuestListOnlineFv(void) {
    if (is_flag_set__6TLobbyFv() != 0) {
        switch ((s32) online_quest_list_state) {
        case 0:
            return (u8) get_party_min_tier__6TLobbyFi(0);
        case 1:
            return (u8) get_party_min_tier__6TLobbyFi(1);
        default:
            return 0U;
        }
    } else {
        if (get_story_flag(0x33) != 0) {
            return 4U;
        }
        if (get_story_flag(0x2A) != 0) {
            return 3U;
        }
        if (get_story_flag(0x20) != 0) {
            return 2U;
        }
        return (u8) (get_story_flag(0x17) != 0);
    }
}

}
void TQuestListOnline::close_windows() {
    if ((u32) confirm_window != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x44));
        confirm_window = 0U;
    }
    if ((u32) info_window != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x40));
        info_window = 0U;
    }
    if ((u32) description_window != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x3C));
        description_window = 0U;
    }
    if ((u32) list_window != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x38));
        list_window = 0U;
    }
}
extern "C" {

extern s32 lbl_8044BEB0[];
extern s32 TQuestListOnline__decompression_cursor;

void TQuestListOnline__sub_802176DC(s32 arg0) {
    if ((u32) (*(u32 *)&TQuestListOnline__decompression_cursor) != 0U) {
        online_quest_list_decompressed_size = prs_decompress_buffer(arg0, (s32) (*(u32 *)&TQuestListOnline__decompression_cursor));
        online_quest_dat_buffer = (*(u32 *)&TQuestListOnline__decompression_cursor);
    }
}

void decompress_quest_buffer__16TQuestListOnlineFi(s32 arg0) {
    s32 temp_r3;
    if ((u32) (*(u32 *)&TQuestListOnline__decompression_cursor) != 0U) {
        temp_r3 = prs_decompress_buffer(arg0, (s32) (*(u32 *)&TQuestListOnline__decompression_cursor));
        quest_bin_decompressed_size = temp_r3;
        online_quest_bin_data = (*(u32 *)&TQuestListOnline__decompression_cursor);
        (*(u32 *)&TQuestListOnline__decompression_cursor) += temp_r3;
    }
}

s32 init__16TQuestListOnlineFv(void) {
    TQuestListOnline__decompression_cursor = 0;
    if (TLobby__sub_8001EEF4() != 0) {
        TQuestListOnline__decompression_cursor = tmp_buf_use_req__6TLobbyFPv(lbl_8044BEB0);
        return 1;
    }
    return 0;
}

}
void TQuestListOnline::invoke_callback_2c_and_queue_destruction() {
    s32 (*temp_r12)();

    temp_r12 = callback2c;
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(this);
}
extern "C" {

}
void TQuestListOnline::invoke_callback_34_and_queue_destruction() {
    s32 (*temp_r12)();

    temp_r12 = callback34;
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(this);
}
extern "C" {

}
void TQuestListOnline::invoke_callback_28_and_queue_destruction() {
    s32 (*temp_r12)();

    temp_r12 = callback28;
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(this);
}
extern "C" {

void ensure_online_quests_loaded__16TQuestListOnlineFv(void) {
    if (TLobby__sub_8001EEF4() == 0) {
        TLobby__sub_8001EDF4((s32) &lbl_8044BEB0);
    }
}

}
