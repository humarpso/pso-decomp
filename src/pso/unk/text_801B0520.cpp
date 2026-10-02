#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Cmd_801B0690 { u16 hdr; u16 client; s32 team; };

extern "C" {
M2C_UNK TMainCursor__sub_80154098(int, int, int);
M2C_UNK TMainCursor__sub_801540B8(int, int, int);
u8 *get_player_by_client_id(u16);
M2C_UNK TFontSmallLobby__sub_801C03AC(void *);
M2C_UNK TFontSmallLobby__sub_801C03E0(void *, void *);
M2C_UNK TFontSmallLobby__sub_801C041C(void *);
M2C_UNK fn_801C19D8(void *, int);
s32 validate_6x90_set_player_battle_team(void *);
void handle_6x90_set_player_battle_team(s32 arg0);
}

extern "C" {

int TObjPlayer__sub_801B066C(void* p);
void draw_status_line(void *arg0, M2C_UNK *arg1, M2C_UNK *arg2, s32 arg3);
void *TLobby__sub_8001DC24();
int TLobby__sub_801C19D0(void*);
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK text_builder_append(M2C_UNK *);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK init_all__11TWindowCtrlFPvPv(void *, M2C_UNK);

extern M2C_UNK lbl_805DC27C;

void draw_status_line(void *arg0, M2C_UNK *arg1, M2C_UNK *arg2, s32 arg3) {
    TWindowSubStatusDisp__sub_802290E0();
    text_builder_append(arg1);
    text_builder_append(arg2);
    text_builder_append(&lbl_805DC27C);
    TWindowSubStatusDisp__sub_80228F5C(arg3);
    text_builder_append(&lbl_805DC27C);
    init_all__11TWindowCtrlFPvPv(TLobby__sub_8001DC24(), 0x200);
}

int TObjPlayer__sub_801B066C(void* p) { return TLobby__sub_801C19D0((char*)p + 0x828); }
void handle_6x90_set_player_battle_team(s32 arg0) {
    struct Cmd_801B0690 cmd;
    u8 *p;
    s32 team;
    TFontSmallLobby__sub_801C041C(&cmd);
    TFontSmallLobby__sub_801C03E0(&cmd, (void *) arg0);
    TFontSmallLobby__sub_801C03AC(&cmd);
    if (validate_6x90_set_player_battle_team(&cmd) == 0) {
        return;
    }
    p = get_player_by_client_id(cmd.client);
    if (p == NULL) {
        return;
    }
    team = cmd.team;
    fn_801C19D8(p + 0x828, team);
    if (team == 1) {
        TMainCursor__sub_801540B8((int) p, M2C_FIELD(p, s32 *, 0xA4), 0);
    } else {
        TMainCursor__sub_80154098((int) p, M2C_FIELD(p, s32 *, 0xA4), 0);
    }
}

}
