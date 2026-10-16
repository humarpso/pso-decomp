#include "types.h"
#include "pso/object/TObjQuestColApc.h"

struct Obj_80196448 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0xac - 0x44]; f32 radius; };

extern "C" {
Obj_80196448 *get_player_by_client_id(s32);
s32 obj_isState3_324(void *);
f32 xyz_distance_squared(f32 *a, f32 *b);
s32 vfunc_15__15TObjQuestColApcFv(Obj_80196448 *self);
}

extern "C" {

void *TObjQuestColApc__ct(void *arg0);
void vfunc_16__15TObjQuestColApcFv(void* p);
void TObjQuestColBase__ct(void *);
int create__12TQuestThreadFi(void*);
int destroy_board__17TQuestThreadBoardFv(void*);

int TObjQuestColApc::vfunc_16() { destroy_board__17TQuestThreadBoardFv(this); create__12TQuestThreadFi(*(void**)((char*)this + 0xb0)); }

extern s32 __vt__15TObjQuestColApc[];
extern void *obj_quest_col_apc_class_name;

int TObjQuestColApc::vfunc_15() {
    Obj_80196448 *self = (Obj_80196448 *)this;
    s32 i;
    Obj_80196448 *p;
    for (i = 0; i < 12; i++) {
        p = get_player_by_client_id(i);
        if (p != 0 && obj_isState3_324(p) == 1) {
            if (xyz_distance_squared(p->pos, self->pos) < self->radius * self->radius) {
                return 1;
            }
        }
    }
    return 0;
}

void *TObjQuestColApc__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TObjQuestColApc;
    *(void **)((s8 *)arg0 + 0x0) = obj_quest_col_apc_class_name;
    return arg0;
}

}
