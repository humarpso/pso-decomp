#include "pso/TEnemyTaskList.h"

#include "types.h"
struct Task_800F7BD0 { u16 f0; s16 flags; };

struct List_800F7BD0 { u8 pad[0x20]; s32 count; u8 pad2[4]; Task_800F7BD0 **tasks; };

struct TEnemyTaskList_800F7C84 {
    u8 pad0[0x18];
    void *vt;
    s32 count;
    s32 f20;
    s32 *a;
    s32 *b;
};

extern "C" {
s32 TEnemyTaskList__sub_800F7BD0(List_800F7BD0 *self);
s32 *alloc_buffer__11TOBoss4RockFPv(int);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 __vt__14TEnemyTaskList[];
extern s32 lbl_805D2B08;
TEnemyTaskList_800F7C84 *TEnemyTaskList__ct(TEnemyTaskList_800F7C84 *self, void *parent, s32 n);
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
TEnemyTaskList_800F7C84 *TEnemyTaskList__ct(TEnemyTaskList_800F7C84 *self, void *parent, s32 n) {
    s32 i;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__14TEnemyTaskList;
    *(s32 *)self = lbl_805D2B08;
    self->count = n;
    self->f20 = 0;
    self->a = alloc_buffer__11TOBoss4RockFPv(self->count * 4);
    self->b = alloc_buffer__11TOBoss4RockFPv(self->count * 4);
    for (i = 0; i < self->count; i++) {
        self->a[i] = 0;
        self->b[i] = 0;
    }
    return self;
}

}
