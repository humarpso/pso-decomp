#include "types.h"
#include "pso/misc/TORockJungleL01.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/misc/RenderFadeState.h"
#include "pso/misc/TRaderMapCore.h"

struct Base_8029c054_8029C030 { char pad[0x14]; };
struct VObj_8029c054_8029C030 : Base_8029c054_8029C030 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

struct VBase_8029C094 { char pad[0x14]; };

struct VObj_8029C094 : VBase_8029C094 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Vec_8029C094 { f32 x, y, z; };

struct Rd_8029C094 {
    u8 pad0[0x38];
    u8 pos[0xB4 - 0x38];
    VObj_8029C094 fade;
    u8 padd[0xD0 - 0xB4 - sizeof(VObj_8029C094)];
    s32 fading;
};

extern "C" {
s32 isFading__15RenderFadeStateCFv(void *);
void set_cull_back__8TObjFishFv();
void matrix_mult_vec(s32, void *, void *);
extern const f32 lbl_805DDD18;
}

extern "C" {

int update_obstruction_fade(void*);
s32 set_cull_none__8TObjFishFv();

void TORockJungleL01::run_task() { update_obstruction_fade((char*)this + 0xb4); }

void TORockJungleL01::vfunc_15() {
    u8 *arg0 = (u8 *)this;
    if ((s32) this->m_d0 != 0) {
        ((VObj_8029c054_8029C030*)(arg0 + 0xB4))->m7();
    }
    set_cull_none__8TObjFishFv();
}
void TORockJungleL01::vfunc_14() {
    Rd_8029C094 *arg0 = (Rd_8029C094 *)this;
    Vec_8029C094 v;
    set_cull_back__8TObjFishFv();
    matrix_mult_vec(0, arg0->pos, &v);
    if (-v.z < lbl_805DDD18) {
        ((RenderFadeState *)(&arg0->fade))->fadeOut();
    } else {
        ((RenderFadeState *)(&arg0->fade))->restore();
    }
    if (TRaderMapCore::is_not_split_screen() == 1) {
        arg0->fading = 0;
    } else {
        arg0->fading = isFading__15RenderFadeStateCFv(&arg0->fade);
    }
    if (arg0->fading != 0) {
        arg0->fade.m6();
    }
}

}
