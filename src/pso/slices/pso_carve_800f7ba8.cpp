#include "types.h"

extern "C" {

void reset_keyboard_control__6TLobbyFv(void);
void handle_disconnect_cleanup(void);
int TLobby__sub_800F7A8C(void);
int TLobby__sub_800F7B08(void);
int TOKeyMachine01__sub_802034A8(void);

void handle_disconnect_cleanup(void) { TOKeyMachine01__sub_802034A8(); TLobby__sub_800F7B08(); }
int run_task__14TEnemyTaskListFv(void) { return 0; }
int TEnemyTaskList__sub_800F7BD0(void) { return 0; }

}
