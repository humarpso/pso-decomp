#include "types.h"
#include "pso/boss/TBoss6Tube.h"

extern "C" {
s32 load_resource_from_descriptor(s32, int, void *, int, int, int);
s32 alloc__23TAdSinglePlyChrSelectGCFv(int);
u32 load_gvm_texture_file(void *);
s32 reset_state__10TBoss6TubeFv();
extern u8 lbl_80470A68[];
extern u8 boss06_tube_dat_resource_descriptor[];
extern u32 boss6_tube_bml_resource;
extern u32 boss6_tube_texture_list;
}

extern "C" {

void *TBoss6Tube__ct(void *, void *);
s32 reset_state__10TBoss6TubeFv();
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
void *__nw__7TObjectFUl(int);
s32 safe_free__23TAdSinglePlyChrSelectGCFUl(u32);

void *TBoss6Tube::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TBoss6Tube__ct(o, arg0);
    }
    return o;
}

extern u32 boss6_tube_bml_resource;
extern u32 boss6_tube_texture_list;

void TBoss6Tube::free_resources() {
    if ((u32) boss6_tube_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)boss6_tube_bml_resource, 1);
        boss6_tube_bml_resource = 0U;
    }
    if ((u32) boss6_tube_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)boss6_tube_texture_list);
        safe_free__23TAdSinglePlyChrSelectGCFUl(boss6_tube_texture_list);
        boss6_tube_texture_list = 0U;
    }
    reset_state__10TBoss6TubeFv();
}
void TBoss6Tube::load_resources() {
    s32 r;
    reset_state__10TBoss6TubeFv();
    r = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
    if (r != 0) {
        r = load_resource_from_descriptor(r, 5, boss06_tube_dat_resource_descriptor, 0, 0, 0);
    }
    boss6_tube_bml_resource = r;
    boss6_tube_texture_list = load_gvm_texture_file(lbl_80470A68);
    if (boss6_tube_bml_resource != 0 && boss6_tube_texture_list != 0) {
        return;
    }
}

}
