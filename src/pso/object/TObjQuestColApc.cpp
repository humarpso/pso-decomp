#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Obj_80196448 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0xac - 0x44]; f32 radius; };

extern "C" {
Obj_80196448 *get_player_by_client_id(s32);
s32 obj_isState3_324(void *);
f32 xyz_distance_squared(f32 *a, f32 *b);
s32 TObjQuestColApc__vt13(Obj_80196448 *self);
}

extern "C" {

void *TObjQuestColApc__ct(void *arg0);
void TObjQuestColApc__vt14(void* p);
void TObjQuestColBase__ct(void *);
int create__12TQuestThreadFi(void*);
int destroy_board__17TQuestThreadBoardFv(void*);

void TObjQuestColApc__vt14(void* p) { destroy_board__17TQuestThreadBoardFv(p); create__12TQuestThreadFi(*(void**)((char*)p + 0xb0)); }

extern M2C_UNK __vt__15TObjQuestColApc[];
extern void *lbl_805D33F8;

s32 TObjQuestColApc__vt13(Obj_80196448 *self) {
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjQuestColApc;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D33F8;
    return arg0;
}

}
