#include "types.h"

extern "C" {

int TLobby__sub_801EE6A0(void* p);
int create_alt_timer__6TLobbyFPv(void* p);
void open_door__6TLobbyFv(void);
void update_doors__6TLobbyFv(void);
int TObjDoor__sub_801A3C0C(void);
int TObjDoor__sub_801F3754(void);
int TWindowCtrl__sub_8024A4EC(void*);
int create_alt_timer__11TWindowCtrlFv(void*);
int TLobby__sub_801A3C18(void);
int TObjDoor__sub_801F3760(void);

int TLobby__sub_801EE6A0(void* p) { return TWindowCtrl__sub_8024A4EC(p); }
int create_alt_timer__6TLobbyFPv(void* p) { return create_alt_timer__11TWindowCtrlFv(p); }
void open_door__6TLobbyFv(void) { TLobby__sub_801A3C18(); TObjDoor__sub_801A3C0C(); }
void update_doors__6TLobbyFv(void) { TObjDoor__sub_801F3760(); TObjDoor__sub_801F3754(); }

}
