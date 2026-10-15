#include "types.h"

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
void restore__15RenderFadeStateFv(void *);
void fadeOut__15RenderFadeStateFv(void *);
void set_cull_back__8TObjFishFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
void matrix_mult_vec(s32, void *, void *);
extern const f32 lbl_805DDD18;
void update_near_fade__12TBoss8DragonFPv(Rd_8029C094 *arg0);
}

extern "C" {

void TAdRayGC__sub_8029C054(u8 *arg0);
int TORockJungleL01__sub_8029C030(void* p);
int update_obstruction_fade(void*);
s32 set_cull_none__8TObjFishFv();

int TORockJungleL01__sub_8029C030(void* p) { return update_obstruction_fade((char*)p + 0xb4); }

void TAdRayGC__sub_8029C054(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0xD0) != 0) {
        ((VObj_8029c054_8029C030*)(arg0 + 0xB4))->m7();
    }
    set_cull_none__8TObjFishFv();
}
void update_near_fade__12TBoss8DragonFPv(Rd_8029C094 *arg0) {
    Vec_8029C094 v;
    set_cull_back__8TObjFishFv();
    matrix_mult_vec(0, arg0->pos, &v);
    if (-v.z < lbl_805DDD18) {
        fadeOut__15RenderFadeStateFv(&arg0->fade);
    } else {
        restore__15RenderFadeStateFv(&arg0->fade);
    }
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        arg0->fading = 0;
    } else {
        arg0->fading = isFading__15RenderFadeStateCFv(&arg0->fade);
    }
    if (arg0->fading != 0) {
        arg0->fade.m6();
    }
}

}
