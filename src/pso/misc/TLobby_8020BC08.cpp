#include "types.h"

extern "C" {

void init_scene_objects__6TLobbyFv(void);
int TObjPlayer__sub_800196EC(void);
int TQuestThread__sub_801F5B5C(void);
int TRaderMapCore__sub_801F9630(int);
int TLobby__sub_802089B0(void);
int TLobby__sub_8020A744(void);
int create_objects__6TLobbyFi(void);
int attach_objects_by_id__6TLobbyFi(void);
int TLobby__sub_8020DBCC(void);
int TSwitch__sub_8022945C(void);

void init_scene_objects__6TLobbyFv(void) { TLobby__sub_8020A744(); TLobby__sub_8020DBCC(); TLobby__sub_802089B0(); TSwitch__sub_8022945C(); TRaderMapCore__sub_801F9630(1); TObjPlayer__sub_800196EC(); attach_objects_by_id__6TLobbyFi(); TObjPlayer__sub_800196EC(); create_objects__6TLobbyFi(); TQuestThread__sub_801F5B5C(); }

}
