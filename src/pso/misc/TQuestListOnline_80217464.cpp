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
s32 TQuestListOnline__sub_80217504(void);
s32 TLobby__sub_800F7DAC(s32, s32);
extern s32 TQuestListOnline__data_805D61E4;
extern u32 lbl_805D61EC;
extern s32 lbl_805D61F4;
void TQuestListOnline__sub_802176DC(s32 arg0);
s32 TLobby__sub_800F7DAC(s32, s32);
extern s32 TQuestListOnline__data_805D61E4;
extern u32 lbl_805D61E8;
extern s32 lbl_805D61F0;
void TQuestListOnline__sub_80217714(s32 arg0);
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
s32 TLobby__sub_8001EEFC(M2C_UNK *);
s32 TLobby__sub_80071698(M2C_UNK);
s32 TODoorVoShip__sub_801F44BC(M2C_UNK);
M2C_UNK TWindow__close(void *);
s32 is_flag_set__6TLobbyFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern void *TQuestListOnline__data_805D6194;
extern void *TQuestListOnline__data_805D61E0;

#pragma push
#pragma fp_contract on
s32 TQuestListOnline__sub_80217504(void) {
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
            return (u8) TLobby__sub_80071698(0);
        case 1:
            return (u8) TLobby__sub_80071698(1);
        default:
            return 0U;
        }
    } else {
        if (TODoorVoShip__sub_801F44BC(0x33) != 0) {
            return 4U;
        }
        if (TODoorVoShip__sub_801F44BC(0x2A) != 0) {
            return 3U;
        }
        if (TODoorVoShip__sub_801F44BC(0x20) != 0) {
            return 2U;
        }
        return (u8) (TODoorVoShip__sub_801F44BC(0x17) != 0);
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
        lbl_805D61F4 = TLobby__sub_800F7DAC(arg0, (s32) (*(u32 *)&TQuestListOnline__data_805D61E4));
        lbl_805D61EC = (*(u32 *)&TQuestListOnline__data_805D61E4);
    }
}

void TQuestListOnline__sub_80217714(s32 arg0) {
    s32 temp_r3;
    if ((u32) (*(u32 *)&TQuestListOnline__data_805D61E4) != 0U) {
        temp_r3 = TLobby__sub_800F7DAC(arg0, (s32) (*(u32 *)&TQuestListOnline__data_805D61E4));
        lbl_805D61F0 = temp_r3;
        lbl_805D61E8 = (*(u32 *)&TQuestListOnline__data_805D61E4);
        (*(u32 *)&TQuestListOnline__data_805D61E4) += temp_r3;
    }
}

s32 init__16TQuestListOnlineFv(void) {
    TQuestListOnline__data_805D61E4 = 0;
    if (TLobby__sub_8001EEF4() != 0) {
        TQuestListOnline__data_805D61E4 = TLobby__sub_8001EEFC(lbl_8044BEB0);
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

}
