#include "types.h"
#include "pso/player/TObjPlayer.h"
struct Obj_80109CBC { u8 pad[0x188]; s32 f_188; };

struct Eff_80109CBC { u8 pad[0x3C]; s32 f_3C; s32 f_40; };

extern "C" {
Eff_80109CBC *__ct__14TItemEffNeedleFv(void *, s32, void *, s32, s32);
void *__nw__7TObjectFUl(u32);
void spawn_target_needle(s32 a, Obj_80109CBC *p, s32 id, s32 c);
}

extern "C" {

void spawn_target_needle(s32 a, Obj_80109CBC *p, s32 id, s32 c) {
    Eff_80109CBC *e;
    if ((u16)id != 0xFFFF && p != 0) {
        e = (Eff_80109CBC *)__nw__7TObjectFUl(0x64);
        if (e != 0) {
            e = __ct__14TItemEffNeedleFv(e, a, p, id, c);
        }
        if (e != 0) {
            e->f_3C = p->f_188;
            e->f_40 = ((TObjPlayer *)p)->get_entity_id();
        }
    }
}

}
