#include "types.h"

struct Ent_8012C384 { u8 pad[0x1c]; u8 f1c[0x10]; };

struct Mylla_8012C384 { u8 pad[0xa4]; Ent_8012C384 *ents; s32 count; };

extern "C" {
s32 TObjEneDellBiter__sub_80087350(u32, s32);
s32 update_rico_ring__10TObjPlayerFUi(u32);
Mylla_8012C384 *TPhotonMylla__sub_80154CB4(u32);
void TObjPlayer__sub_8012C384(void *self, u32 a, u32 b, s32 idx);
}

extern "C" {

s32 TObjEneDellBiter__sub_80087350(u32, s32);
s32 update_rico_ring__10TObjPlayerFUi(u32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_8012C4E0(void);

void TObjPlayer__sub_8012C384(void *self, u32 a, u32 b, s32 idx) {
    Mylla_8012C384 *m;
    update_rico_ring__10TObjPlayerFUi(a);
    m = TPhotonMylla__sub_80154CB4(b);
    if (m && m->ents && idx < m->count) {
        TObjEneDellBiter__sub_80087350((u32)m->ents[idx].f1c, 0x45);
    }
}

}
