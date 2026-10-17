#include "types.h"
struct Obj_801963A8 { u8 pad[0x6]; u16 id; };

extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjQuestColApc__ct(void *self, void *parent, void *arg);
extern u32 quest_collision_task_root;
Obj_801963A8 *fn_801963A8(void *arg, s32 *out_id);
Obj_801963A8 *fn_801963A8(void *arg, s32 *out_id) {
    Obj_801963A8 *o = (Obj_801963A8 *)__nw__7TObjectFUl(0xbc);
    if (o != 0) {
        o = (Obj_801963A8 *)TObjQuestColApc__ct(o, (void *)quest_collision_task_root, arg);
    }
    if (o != 0) {
        *out_id = o->id;
    } else {
        *out_id = -1;
    }
    return o;
}

}
