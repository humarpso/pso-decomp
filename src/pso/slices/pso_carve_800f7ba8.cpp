#include "types.h"

extern "C" {

void reset_keyboard_control__6TLobbyFv(void);
void handle_disconnect_cleanup(void);
int TLobby__sub_800F7A8C(void);
int TLobby__sub_800F7B08(void);
int get_global_state__14TOKeyMachine01Fv(void);

void handle_disconnect_cleanup(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_800F7B08(); }
int run_task__14TEnemyTaskListFv(void) { return 0; }
int TEnemyTaskList__sub_800F7BD0(void) { return 0; }

}
