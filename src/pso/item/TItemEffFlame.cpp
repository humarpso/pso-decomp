#include "pso/TItemEffFlame.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

#include "types.h"

#pragma fp_contract on
extern "C" {

struct Vec_80108D6C { f32 x, y, z; };
struct Rec_80108D6C { u8 pad0[0x1C]; Vec_80108D6C pos; u8 pad28[0x4]; };
struct Photon_80108D6C { u8 pad0[0xA4]; Rec_80108D6C *recs; };
struct Flame_80108D6C { u8 pad0[0x1C]; void *m_1c; u16 m_20; u8 pad22[2]; s32 m_24; };

void copy_pos__11TNowLoadingFPvPv(void *, void *);
Photon_80108D6C *TPhotonMylla__sub_80154CB4(u16);
s32 rand();
extern const f32 lbl_805DAB20;
extern const f32 lbl_805DAB24;

void TItemEffFlame::run_task() {
    Flame_80108D6C *self = (Flame_80108D6C *)this;
    Photon_80108D6C *p;

    if (self->m_1c == NULL) {
        return;
    }
    p = TPhotonMylla__sub_80154CB4(self->m_20);
    if (p == NULL) {
        return;
    }
    Vec_80108D6C *src = &p->recs[self->m_24].pos;
    Vec_80108D6C v = *src;
    v.x += lbl_805DAB20 * (lbl_805DAB24 * (f32)rand());
    v.y += lbl_805DAB20 * (lbl_805DAB24 * (f32)rand());
    v.z += lbl_805DAB20 * (lbl_805DAB24 * (f32)rand());
    copy_pos__11TNowLoadingFPvPv(self->m_1c, &v);
}

}

TItemEffFlame::~TItemEffFlame() {
    request_destroy__11TBoss4Type2FUi(this->m_1c);
}
