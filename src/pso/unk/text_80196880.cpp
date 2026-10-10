#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjQuestColA__create(void *arg0);
void *TObjQuestColA__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *quest_collision_task_root;

void *TObjQuestColA__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjQuestColA__ct(o, quest_collision_task_root, arg0);
    }
    return o;
}

}
