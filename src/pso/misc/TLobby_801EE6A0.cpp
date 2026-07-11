#include "types.h"

extern "C" {

int TLobby__sub_801EE6A0(void* p);
int TLobby__sub_801EE6C0(void* p);
void TLobby__sub_801EE6E0(void);
void TLobby__sub_801EE704(void);
int TObjDoor__sub_801A3C0C(void);
int TObjDoor__sub_801F3754(void);
int TWindowCtrl__sub_8024A4EC(void*);
int create_alt_timer__11TWindowCtrlFv(void*);
int fn_801A3C18(void);
int fn_801F3760(void);

int TLobby__sub_801EE6A0(void* p) { return TWindowCtrl__sub_8024A4EC(p); }
int TLobby__sub_801EE6C0(void* p) { return create_alt_timer__11TWindowCtrlFv(p); }
void TLobby__sub_801EE6E0(void) { fn_801A3C18(); TObjDoor__sub_801A3C0C(); }
void TLobby__sub_801EE704(void) { fn_801F3760(); TObjDoor__sub_801F3754(); }

}
