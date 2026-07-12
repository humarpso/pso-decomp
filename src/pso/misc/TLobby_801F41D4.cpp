#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_quest_list__6TLobbyFv(void);
M2C_UNK rebuild_all__6TLobbyFi();
M2C_UNK update_and_reset__6TLobbyFi();
M2C_UNK open_session__6TLobbyFi();
M2C_UNK TLobby__sub_801A2514(u16);
M2C_UNK TLobby__sub_801A2528(u16);
M2C_UNK refresh_quest_list__6TLobbyFi();
M2C_UNK TQuestListVM__sub_801F4398();
M2C_UNK TQuestListOnline__sub_801F43A0();
M2C_UNK fn_801F43A8();
M2C_UNK TLobby__sub_8020B2DC();
M2C_UNK TLobby__sub_8020B308(s32);

extern s32 evt2_random_enemies_mode;
extern s32 TLobby__data_805D60E0;
extern s32 TLobby__data_805D60E4;
extern s32 TLobby__data_805D60E8;
extern s32 TLobby__data_805D60EC;
extern s32 TLobby__data_805D6148;
extern s32 TLobby__data_805D614C;

void setup_quest_list__6TLobbyFv(void) {
    TLobby__data_805D60E0 = 0;
    TLobby__data_805D60E4 = 0;
    TLobby__data_805D60E8 = 0;
    TLobby__data_805D60EC = 0;
    switch ((s32) evt2_random_enemies_mode) {
    case 1:
        fn_801F43A8();
        open_session__6TLobbyFi();
        break;
    case 2:
        TQuestListOnline__sub_801F43A0();
        update_and_reset__6TLobbyFi();
        break;
    case 3:
        TQuestListVM__sub_801F4398();
        update_and_reset__6TLobbyFi();
        break;
    case 4:
        TQuestListOnline__sub_801F43A0();
        rebuild_all__6TLobbyFi();
        break;
    case 5:
        fn_801F43A8();
        refresh_quest_list__6TLobbyFi();
        break;
    }
    TLobby__sub_801A2528((u16) TLobby__data_805D60E8);
    TLobby__sub_801A2514((u16) TLobby__data_805D60EC);
    TLobby__data_805D6148 = TLobby__data_805D60E0;
    TLobby__data_805D614C = TLobby__data_805D60E4;
    TLobby__sub_8020B308(TLobby__data_805D60E0);
    TLobby__sub_8020B2DC();
}

}
