#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TWindowCtrl__sub_8024B328(int, void *);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9580(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E95F4(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9624(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9654(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9684(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E96B4(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E96E4(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9714(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9744(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9774(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E97A4(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E97D4(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9804(s32 arg0);
M2C_UNK TNpcPlayer__sub_8034EE3C(int, void *);
void TLobby__sub_801E9834(s32 arg0);
M2C_UNK update_player_field__10TNpcPlayerFUsi(int, int, void *);
void TLobby__sub_801E9864(s32 arg0, s32 arg1);
M2C_UNK TNpcPlayer__sub_8034EEB4(int, void *);
void TLobby__sub_801E9970(s32 arg0);
M2C_UNK apply_to_battle_player_slot__10TNpcPlayerFUss(int, int, void *);
void TLobby__sub_801E99A0(s32 arg0, s32 arg1);
s32 TChallenge4PResult__sub_8034B498();
void TLobby__sub_801E9A50(s32 arg0);
s32 get_field_6CE8__6TLobbyFv();
s32 get_lobby_count__6TLobbyFv();
void TLobby__sub_801E9BC8(s32 arg0);
s32 is_split_screen();
M2C_UNK TLobby__sub_80070B34(int);
M2C_UNK TLobby__sub_80291DF8(int);
void TLobby__sub_801E9D94(s32 arg0);
M2C_UNK get_unit_list__6TLobbyFv();
s32 TLobby__sub_8039DAFC(void *, void *);
extern M2C_UNK TLobby__data_805DC4A0;
void TLobby__sub_801E9F9C(s32 arg0);
M2C_UNK TLobby__sub_80070ACC();
s32 TLobby__sub_8039DAFC(void *, void *);
void TLobby__sub_801E9FFC(s32 arg0);
}

extern "C" {

int TLobby__sub_801E93E0(void* p);
int TLobby__sub_801E95B0(void* p);
int TLobby__sub_801E9CD0(void* p);
void cache_player_field__6TLobbyFv(void);
void clear_flag3__6TLobbyFv(void);
void clear_flag__6TLobbyFv(void);
void create_hunter_guild_seq__6TLobbyFv(void);
int find_player_143__6TLobbyFv(void);
void free_child__6TLobbyFv(void);
void free_static__6TLobbyFv(void);
void reset_random_enemies_mode__6TLobbyFv(void);
void set_story_select__6TLobbyFi(s32 arg0);
void update_and_apply_alloc__6TLobbyFv(void);
void update_by_screen_mode__6TLobbyFv(void);
void update_split_screen__6TLobbyFv(void);
s32 TCameraCtrl__sub_8006B368();
int TCameraCtrl__sub_8006CCEC(void*);
int TKeyBoardControl__sub_8000F950(void);
M2C_UNK TLobby__sub_80070AFC();
int TLobby__sub_801EA5FC(void*);
int TLobby__sub_801F3568(void*);
M2C_UNK TLobby__sub_80291DC0();
int TLobby__sub_8032CD7C(void*, void*);
M2C_UNK TMainTask__sub_801F34D0(void *);
u32 __nw__7TObjectFUl(M2C_UNK);
int clear_counter__6TLobbyFv(void);
M2C_UNK clear_flag_3__7TObjectFv(void *);
void *get_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(void *, s32, M2C_UNK *);
s32 is_split_screen();
int set_active_player__10TObjPlayerFi(void*);
s32 set_state__16TAdStorySelectGCFi(s32);
int update_alloc_size__6TLobbyFv(void*);
M2C_UNK update_dead_list_win__6TLobbyFv();
M2C_UNK update_screen__6TLobbyFPv();

extern void *tl_03;

void clear_flag3__6TLobbyFv(void) {
    void *self = tl_03;
    if (self != NULL) {
        clear_flag_3__7TObjectFv(self);
    }
}

extern void *tl_03;

void free_static__6TLobbyFv(void) {
    void *temp = tl_03;
    if (temp != 0) {
        TMainTask__sub_801F34D0(temp);
    }
}

extern void *tl_04;

void clear_flag__6TLobbyFv(void) {
    void *temp = tl_04;
    if (temp != 0) {
        clear_flag_3__7TObjectFv(temp);
    }
}

extern void *tl_04;

void free_child__6TLobbyFv(void) {
    void *temp = tl_04;
    if (temp != 0) {
        TMainTask__sub_801F34D0(temp);
    }
}

int TLobby__sub_801E93E0(void* p) { return TCameraCtrl__sub_8006CCEC(p); }

void TLobby__sub_801E9580(s32 arg0) {
    TWindowCtrl__sub_8024B328((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}

int TLobby__sub_801E95B0(void* p) { return TLobby__sub_801F3568(p); }
int find_player_143__6TLobbyFv(void) { return set_active_player__10TObjPlayerFi((void*)(143)); }

    extern int evt2_random_enemies_mode;

void TLobby__sub_801E95F4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (0xB), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9624(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (0xA), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9654(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (9), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9684(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (8), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E96B4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (7), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E96E4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (6), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9714(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (5), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9744(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (4), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9774(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (3), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E97A4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (2), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E97D4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (1), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9804(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (0), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9834(s32 arg0) {
    TNpcPlayer__sub_8034EE3C((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9864(s32 arg0, s32 arg1) {
    update_player_field__10TNpcPlayerFUsi((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg1 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9970(s32 arg0) {
    TNpcPlayer__sub_8034EEB4((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E99A0(s32 arg0, s32 arg1) {
    apply_to_battle_player_slot__10TNpcPlayerFUss((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) ((s16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg1 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}

void reset_random_enemies_mode__6TLobbyFv(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); }

extern s32 tl_00;

void create_hunter_guild_seq__6TLobbyFv(void) {
    void *temp_r3;
    if ((TCameraCtrl__sub_8006B368() == 1) && ((temp_r3 = (void*)__nw__7TObjectFUl(0x28)) != 0U)) {
        init__22THunterGuildSeqOfflineFPvPvPv(temp_r3, tl_00, (M2C_UNK *)reset_random_enemies_mode__6TLobbyFv);
    }
}

    extern int TLobby__data_805D6CC0;
    extern int TLobby__data_805D6CC8;

void TLobby__sub_801E9A50(s32 arg0) {
    if (TChallenge4PResult__sub_8034B498() != 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void update_and_apply_alloc__6TLobbyFv(void) { update_alloc_size__6TLobbyFv((void*)0); TLobby__sub_8032CD7C((void*)(TLobby__data_805D6CC0), (void*)(TLobby__data_805D6CC8)); }

void TLobby__sub_801E9BC8(s32 arg0) {
    if (get_lobby_count__6TLobbyFv() != 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    if (get_field_6CE8__6TLobbyFv() != 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 2;
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
}

void set_story_select__6TLobbyFi(s32 arg0) {
    switch (arg0) {
    case 0:
        set_state__16TAdStorySelectGCFi(0);
        return;
    case 1:
        set_state__16TAdStorySelectGCFi(1);
        return;
    default:
        set_state__16TAdStorySelectGCFi(0);
        return;
    }
}
int TLobby__sub_801E9CD0(void* p) { return TLobby__sub_801EA5FC(p); }

extern s32 TLobby__data_805D5EC4;

void cache_player_field__6TLobbyFv(void) {
    s32 var_r0;
    void *temp_r3;

    temp_r3 = get_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, s32 *, 0xE284);
    } else {
        var_r0 = 0;
    }
    TLobby__data_805D5EC4 = var_r0;
}

void update_by_screen_mode__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        update_screen__6TLobbyFPv();
        return;
    }
    update_dead_list_win__6TLobbyFv();
}

void update_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291DC0();
        return;
    }
    TLobby__sub_80070AFC();
}
void TLobby__sub_801E9D94(s32 arg0) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291DF8((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_80070B34((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}
void TLobby__sub_801E9F9C(s32 arg0) {
    if (TLobby__sub_8039DAFC((void *)(get_unit_list__6TLobbyFv()), (void *) (&TLobby__data_805DC4A0)) == 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
}
void TLobby__sub_801E9FFC(s32 arg0) {
    if (TLobby__sub_8039DAFC((void *)(TLobby__sub_80070ACC()), (void *) (&TLobby__data_805DC4A0)) == 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
}

}
