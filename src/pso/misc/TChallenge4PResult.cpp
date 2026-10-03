#include "pso/TChallenge4PResult.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_8034B694 { u8 b[0x14]; };
struct Q_8034B694 { s32 v; };
struct W_8034B694 { u8 pad0[0x34]; E_8034B694 e[1]; u8 pad48[0x70 - 0x48]; Q_8034B694 f[1]; };

struct RecoveredGlobal_8034BA68_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 get_localized_text_entry(s32, s32);
M2C_UNK TLobby__sub_802924B4(void *, int);
s32 TChallenge4PResult__sub_8034B720(void *, s32);
void TChallenge4PResult__sub_8034B8BC(u8 *arg0);
s32 get_localized_text_entry(s32, s32);
M2C_UNK TLobby__sub_802924B4(void *, int);
s32 TChallenge4PResult__sub_8034B720(void *, s32);
void TChallenge4PResult__sub_8034B918(u8 *arg0);
void TChallenge4PResult__sub_8034BA2C(u8 *arg0);
s32 is_active__11TBoss4Type2Fv();
s32 get_global_state__14TOKeyMachine01Fv();
void TChallenge4PResult__sub_8034BA2C(u8 *arg0);
int queue_destruction__18TChallenge4PResultFPv(void* p);
M2C_UNK TChallenge4PResult__sub_8034BADC(void *);
void update_input__18TChallenge4PResultFPv(void *arg0);

s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
s32 get_map_id__13TRaderMapCoreFPv();
u32 get_player_by_client_id(int);
extern u8 lbl_8050E208[];
void TChallenge4PResult__sub_8034BA68(TChallenge4PResult *arg0);
extern M2C_UNK TChallenge4PResult__data_805436A8[];
void TChallenge4PResult__sub_8034B66C(void);
}

extern "C" {

void TChallenge4PResult__sub_8034B420(void *arg0);
void TChallenge4PResult__sub_8034B8B0(void* p);
int TChallenge4PResult__sub_8034B974(void);
void close_window__18TChallenge4PResultFPv(void* p);
void create__18TChallenge4PResultFii(int arg0, s32 arg1);
void init__18TChallenge4PResultFPv(void *arg0);
void init_result_state__18TChallenge4PResultFPv(void *arg0);
void init_timer__18TChallenge4PResultFPv(void *arg0);
int queue_destruction__18TChallenge4PResultFPv(void* p);
void update_entries__18TChallenge4PResultFii(s32 arg0, s32 arg1);
void update_input__18TChallenge4PResultFPv(void *arg0);
s32 get_localized_text_entry(s32, s32);
M2C_UNK TChallenge4PResult__ct(void *, s32, int, s32);
void TChallenge4PResult__sub_8034B694(W_8034B694 *arg0, void *arg1, s32 arg2);
void copy_item_data__6TLobbyFPvPv(void *, void *);
s32 TChallenge4PResult__sub_8034B720(void *, s32);
s32 is_message_window_ready(u32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
int TWindow__close(void*);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 get_map_id__13TRaderMapCoreFPv();
int queue_destruction__7TObjectFv(void*);

void TChallenge4PResult__sub_8034B420(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

extern M2C_UNK TChallenge4PResult__data_805436A8[];

void update_entries__18TChallenge4PResultFii(s32 arg0, s32 arg1) {
    s32 var_r29 = 0;
    M2C_UNK *var_r30 = TChallenge4PResult__data_805436A8;
    s32 var_r31 = 0;
    do {
        u32 v = (u32)var_r30[var_r31];
        if (v != 0U) {
            TChallenge4PResult__sub_8034B694((W_8034B694 *)v, (void *)arg0, arg1);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 < 4);
}

extern s32 tl_01;

void create__18TChallenge4PResultFii(int arg0, s32 arg1) {
    void *temp;

    if (get_player_by_client_id((u16)(arg0)) != 0U) {
        temp = (void *) __nw__7TObjectFUl(0x7C);
        if (temp != NULL) {
            TChallenge4PResult__ct(temp, tl_01, arg0, arg1);
        }
    }
}

void TChallenge4PResult__sub_8034B66C(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TChallenge4PResult__data_805436A8)[i] = 0;
    }
}

void TChallenge4PResult__sub_8034B694(W_8034B694 *arg0, void *arg1, s32 arg2) {
    copy_item_data__6TLobbyFPvPv(&arg0->e[arg2], arg1);
    arg0->f[arg2].v = 1;
}

void close_window__18TChallenge4PResultFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close(*(void**)((char*)p + 0x2c)); *(int*)((char*)p + 0x2c) = 0; } }

void init_timer__18TChallenge4PResultFPv(void *arg0) {
    TChallenge4PResult__sub_8034B720((void *)(arg0), (s32)(get_localized_text_entry(0x2B, 5)));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x1C) = 5;
}
void init_result_state__18TChallenge4PResultFPv(void *arg0) {
    TChallenge4PResult__sub_8034B720((void *)(arg0), (s32)(get_localized_text_entry(0x2B, 4)));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x1C) = 5;
}
void init__18TChallenge4PResultFPv(void *arg0) {
    TChallenge4PResult__sub_8034B720((void *)(arg0), (s32)(get_localized_text_entry(0x2B, 3)));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x1C) = 5;
}
void TChallenge4PResult__sub_8034B8B0(void* p) { *(s32*)((char*)p + 0x1c) = 3; }

void TChallenge4PResult__sub_8034B8BC(u8 *arg0) {
    TChallenge4PResult__sub_8034B720((void *)((void *) (arg0)), (s32)((int) (get_localized_text_entry((int) (0x2B), (int) (1)))));
    TLobby__sub_802924B4((void *) (arg0 + 0x34), (int) (M2C_FIELD(arg0, u16 *, 0x24)));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x1C) = 5;
}

void TChallenge4PResult__sub_8034B918(u8 *arg0) {
    TChallenge4PResult__sub_8034B720((void *)((void *) (arg0)), (s32)((int) (get_localized_text_entry((int) (0x2B), (int) (2)))));
    TLobby__sub_802924B4((void *) (arg0 + 0x48), (int) (M2C_FIELD(arg0, u16 *, 0x24)));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x1C) = 5;
}

int TChallenge4PResult__sub_8034B974(void) { return 0; }

void TChallenge4PResult__sub_8034BA2C(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20) - 1;
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

int queue_destruction__18TChallenge4PResultFPv(void* p) { return queue_destruction__7TObjectFv(p); }

extern u8 lbl_8050E208[];

typedef char RecoveredGlobal_8034BA68_lbl_8050E208_size[sizeof(RecoveredGlobal_8034BA68_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TChallenge4PResult__sub_8034BA68(TChallenge4PResult *arg0) {
    s32 temp_r5;
    if (get_player_by_client_id((int) (arg0->slot_index)) != 0U) {
        temp_r5 = get_map_id__13TRaderMapCoreFPv() * 0x50;
        if (TWindowShortListCtrl__check_controller_button((void *)((void *) ((u8 *)&(*(RecoveredGlobal_8034BA68_lbl_8050E208 *)&lbl_8050E208).value + temp_r5 + 0x20)), (M2C_UNK)((int) (4)), (s32)((int) (temp_r5))) != 0) {
            arg0->state_1c = 3;
        }
    } else {
        arg0->state_1c = 3;
    }
}

void update_input__18TChallenge4PResultFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r5;
    u32 p;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        TChallenge4PResult__sub_8034B720((void *)(arg0), (s32)(get_localized_text_entry(0x2B, 6)));
    }
    p = M2C_FIELD(arg0, u32 *, 0x2C);
    if ((p != 0U) && (is_message_window_ready(p) != 0)) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_r3 > 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r3 - 1);
            return;
        }
        if (get_player_by_client_id((u16)(M2C_FIELD(arg0, u16 *, 0x24))) != 0U) {
            temp_r5 = get_map_id__13TRaderMapCoreFPv() * 0x50;
            if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + temp_r5 + 0x20, 4, temp_r5) != 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        }
    }
}

}

void TChallenge4PResult::run_task() {
    s32 temp_r0;
    if ((get_global_state__14TOKeyMachine01Fv() != 0xE) || (is_active__11TBoss4Type2Fv() != 1)) {
        temp_r0 = state_1c;
        switch (temp_r0) {
        case 0:
            update_input__18TChallenge4PResultFPv((void *) (this));
            return;
        case 1:
            TChallenge4PResult__sub_8034BADC((void *) (this));
            return;
        case 2:
            TChallenge4PResult__sub_8034BA68((TChallenge4PResult *)((void *) (this)));
            return;
        case 3:
            queue_destruction__18TChallenge4PResultFPv((void*)((void *) (this)));
            return;
        case 5:
            TChallenge4PResult__sub_8034BA2C((u8 *)((void *) (this)));
            break;
        }
    }
}

TChallenge4PResult::~TChallenge4PResult() {
    close_window__18TChallenge4PResultFPv(this);
    TChallenge4PResult__data_805436A8[slot_index] = 0;
}

extern "C" {

}
