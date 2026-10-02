#include "types.h"

struct Ent_80205AA8 { u16 id; u8 pad[6]; };

struct Tbl_80205AA8 { s32 x; s32 count; Ent_80205AA8 e[1]; };

extern "C" {
extern Tbl_80205AA8 *TScene__data_805D6028;
Ent_80205AA8 *TScene__sub_80205AA8(void *self, u16 id);
}

extern "C" {

void run_task__6TSceneFv(void* p);
int advance_scene_object_animations(void*);
int set_field4__6TSceneFv(void*);
int TScene__sub_80203E88(void*);

void run_task__6TSceneFv(void* p) { set_field4__6TSceneFv(p); advance_scene_object_animations(p); TScene__sub_80203E88(p); }
Ent_80205AA8 *TScene__sub_80205AA8(void *self, u16 id) {
    Tbl_80205AA8 *t = TScene__data_805D6028;
    if (t != 0) {
        Ent_80205AA8 *p = t->e;
        s32 i;
        for (i = 0; i < t->count; i++, p++) {
            if (p->id == id) return p;
        }
    }
    return 0;
}

}
