#include "types.h"

extern "C" {

void TLobby__sub_80336200(void);
void TLobby__sub_8033622C(void);
void TLobby__sub_80336254(void);
void TLobby__sub_8033627C(void);
int TAdMultiChgGameModeGC__sub_8023E8A4(void);
int TAdMultiChgGameModeGC__sub_8023EA04(void);
int TAdMultiChgGameModeGC__sub_8023ECA4(void);
int TKeyBoardControl__sub_8000F9CC(void*);

    extern int lbl_805D6D44;
void TLobby__sub_80336200(void) { lbl_805D6D44 = 3; TKeyBoardControl__sub_8000F9CC((void*)19); }

    extern int lbl_805D6D44;
void TLobby__sub_8033622C(void) { lbl_805D6D44 = 2; TAdMultiChgGameModeGC__sub_8023E8A4(); }

    extern int lbl_805D6D44;
void TLobby__sub_80336254(void) { lbl_805D6D44 = 1; TAdMultiChgGameModeGC__sub_8023ECA4(); }

    extern int lbl_805D6D44;
void TLobby__sub_8033627C(void) { lbl_805D6D44 = 0; TAdMultiChgGameModeGC__sub_8023EA04(); }

}
