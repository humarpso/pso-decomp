#include "pso/TEnemyTaskList.h"

extern "C" void free__11TOBoss4RockFUi(void*);

TEnemyTaskList::~TEnemyTaskList() {
    free__11TOBoss4RockFUi(m_28);
    free__11TOBoss4RockFUi(m_24);
}

#include "types.h"

extern "C" {

int TEnemyTaskList__sub_800F7BD0(void);
void handle_disconnect_cleanup(void);
int run_task__14TEnemyTaskListFv(void);
int TLobby__sub_800F7A8C(void);
int TLobby__sub_800F7B08(void);
int get_global_state__14TOKeyMachine01Fv(void);
void reset_keyboard_control__6TLobbyFv(void);

void handle_disconnect_cleanup(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_800F7B08(); }
int run_task__14TEnemyTaskListFv(void) { return 0; }
int TEnemyTaskList__sub_800F7BD0(void) { return 0; }

}
