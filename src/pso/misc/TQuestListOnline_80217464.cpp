#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S217 { char pad[0x38]; void *f38; };

extern "C" {
s32 select_cursor_entry__6TLobbyFPv(void *);
extern u32 TQuestListOnline__data_805D6190;
extern void *TQuestListOnline__data_805D61E0;
s32 get_selected_entry__16TQuestListOnlineFv(void);
s32 prs_decompress_buffer(s32, s32);
extern s32 TQuestListOnline__data_805D61E4;
extern u32 lbl_805D61EC;
extern s32 lbl_805D61F4;
void TQuestListOnline__sub_802176DC(s32 arg0);
s32 prs_decompress_buffer(s32, s32);
extern s32 TQuestListOnline__data_805D61E4;
extern u32 lbl_805D61E8;
extern s32 lbl_805D61F0;
void decompress_quest_buffer__16TQuestListOnlineFi(s32 arg0);
void TLobby__sub_8001EDF4(s32);
s32 TLobby__sub_8001EEF4();
extern M2C_UNK lbl_8044BEB0[];
void ensure_online_quests_loaded__16TQuestListOnlineFv(void);
s32 fn_802183B4();
extern void *TQuestListOnline__data_805D61E0;
extern s32 lbl_805D61F8;
s32 get_list_state__16TQuestListOnlineFv(void);
}

extern "C" {

void close_windows__16TQuestListOnlineFPv(void *arg0);
int get_selected_quest_id__16TQuestListOnlineFv(void);
u8 get_unlocked_tier__16TQuestListOnlineFv(void);
s32 init__16TQuestListOnlineFv(void);
void invoke_callback_28_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
void invoke_callback_2c_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
void invoke_callback_34_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
s32 TLobby__sub_8001EEF4();
s32 tmp_buf_use_req__6TLobbyFPv(M2C_UNK *);
s32 get_party_min_tier__6TLobbyFi(M2C_UNK);
s32 get_story_flag(M2C_UNK);
M2C_UNK TWindow__close(void *);
s32 is_flag_set__6TLobbyFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern void *TQuestListOnline__data_805D6194;
extern void *TQuestListOnline__data_805D61E0;

s32 get_list_state__16TQuestListOnlineFv(void) {
    if ((void *) TQuestListOnline__data_805D61E0 == NULL) {
        return 0;
    }
    if ((u32) M2C_FIELD(TQuestListOnline__data_805D61E0, u32 *, 0x38) == 0U) {
        return 0;
    }
    switch (fn_802183B4()) {
    case 0:
        return 1;
    case 1:
    case 2:
        switch (lbl_805D61F8) {
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
    struct S217 *p = (*(struct S217 * *)&TQuestListOnline__data_805D61E0);
    if (p != NULL) {
        void *q = p->f38;
        if (q != NULL && TQuestListOnline__data_805D6190 != 0U) {
            u32 idx = select_cursor_entry__6TLobbyFPv(q) * 0x98 + 0xC;
            return TQuestListOnline__data_805D6190 + idx;
        }
    }
    return 0;
}
#pragma pop

int get_selected_quest_id__16TQuestListOnlineFv(void) {
    if (((void *) TQuestListOnline__data_805D61E0 != NULL) && ((u32) M2C_FIELD(TQuestListOnline__data_805D61E0, u32 *, 0x40) != 0U)) {
        return M2C_FIELD(TQuestListOnline__data_805D6194, u8 *, 1);
    }
    return -1;
}

extern s32 lbl_805D61F8;

u8 get_unlocked_tier__16TQuestListOnlineFv(void) {
    if (is_flag_set__6TLobbyFv() != 0) {
        switch ((s32) lbl_805D61F8) {
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

void close_windows__16TQuestListOnlineFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
}

extern M2C_UNK lbl_8044BEB0[];
extern s32 TQuestListOnline__data_805D61E4;

void TQuestListOnline__sub_802176DC(s32 arg0) {
    if ((u32) (*(u32 *)&TQuestListOnline__data_805D61E4) != 0U) {
        lbl_805D61F4 = prs_decompress_buffer(arg0, (s32) (*(u32 *)&TQuestListOnline__data_805D61E4));
        lbl_805D61EC = (*(u32 *)&TQuestListOnline__data_805D61E4);
    }
}

void decompress_quest_buffer__16TQuestListOnlineFi(s32 arg0) {
    s32 temp_r3;
    if ((u32) (*(u32 *)&TQuestListOnline__data_805D61E4) != 0U) {
        temp_r3 = prs_decompress_buffer(arg0, (s32) (*(u32 *)&TQuestListOnline__data_805D61E4));
        lbl_805D61F0 = temp_r3;
        lbl_805D61E8 = (*(u32 *)&TQuestListOnline__data_805D61E4);
        (*(u32 *)&TQuestListOnline__data_805D61E4) += temp_r3;
    }
}

s32 init__16TQuestListOnlineFv(void) {
    TQuestListOnline__data_805D61E4 = 0;
    if (TLobby__sub_8001EEF4() != 0) {
        TQuestListOnline__data_805D61E4 = tmp_buf_use_req__6TLobbyFPv(lbl_8044BEB0);
        return 1;
    }
    return 0;
}

void invoke_callback_2c_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x2C);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

void invoke_callback_34_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x34);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

void invoke_callback_28_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x28);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}
void ensure_online_quests_loaded__16TQuestListOnlineFv(void) {
    if (TLobby__sub_8001EEF4() == 0) {
        TLobby__sub_8001EDF4((s32) &lbl_8044BEB0);
    }
}

}
