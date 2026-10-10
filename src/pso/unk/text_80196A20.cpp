#include "types.h"
struct Obj_80196A20 { u8 pad[0x6]; u16 id; };

extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjQuestCol__ct(void *self, void *parent, void *arg);
extern u32 quest_collision_task_root;
Obj_80196A20 *create_quest_col(void *arg, s32 *out_id);
}

extern "C" {

Obj_80196A20 *create_quest_col(void *arg, s32 *out_id) {
    Obj_80196A20 *o = (Obj_80196A20 *)__nw__7TObjectFUl(0xbc);
    if (o != 0) {
        o = (Obj_80196A20 *)TObjQuestCol__ct(o, (void *)quest_collision_task_root, arg);
    }
    if (o != 0) {
        *out_id = o->id;
    } else {
        *out_id = -1;
    }
    return o;
}

}
