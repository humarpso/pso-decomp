#include "pso/TEnemyTaskList.h"

#include "types.h"
struct Task_800F7BD0 { u16 f0; s16 flags; };

struct List_800F7BD0 { u8 pad[0x20]; s32 count; u8 pad2[4]; Task_800F7BD0 **tasks; };

extern "C" {
s32 TEnemyTaskList__sub_800F7BD0(List_800F7BD0 *self);
}

extern "C" {
void free__11TOBoss4RockFUi(void*);
}

TEnemyTaskList::~TEnemyTaskList() {
    free__11TOBoss4RockFUi(m_28);
    free__11TOBoss4RockFUi(m_24);
}

#include "types.h"

extern "C" {
void run_task__14TEnemyTaskListFv(void);
}

extern "C" {

void handle_disconnect_cleanup(void);
int TLobby__sub_800F7A8C(void);
int TLobby__sub_800F7B08(void);
int get_global_state__14TOKeyMachine01Fv(void);
void reset_keyboard_control__6TLobbyFv(void);

void handle_disconnect_cleanup(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_800F7B08(); }

void run_task__14TEnemyTaskListFv(void) {  }
s32 TEnemyTaskList__sub_800F7BD0(List_800F7BD0 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        Task_800F7BD0 *t = self->tasks[i];
        if (t != 0 && !(t->flags & 8)) {
            return 1;
        }
    }
    return 0;
}

}
