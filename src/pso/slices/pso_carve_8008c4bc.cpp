#include "types.h"

extern "C" {

void fn_8008C4BC(void);
int TKeyBoardControl__sub_8000F91C(int);
int TKeyBoardControl__sub_8000F9CC(int);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
int queue_destruction__7TObjectFv(void);

void fn_8008C4BC(void) { queue_destruction__7TObjectFv(); TKeyBoardControl__sub_8000F91C(2); TKeyBoardControl__sub_8000F9CC(18); TLobby__sub_8022743C(); TLobby__sub_80227248(); }

}
