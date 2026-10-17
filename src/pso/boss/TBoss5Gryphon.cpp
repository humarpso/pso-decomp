#include "types.h"
#include "pso/boss/TBoss5GryphonShockWave.h"
#include "pso/boss/TBoss5GryphonSnarl.h"
#include "pso/unk/text_80355A1C.h"
#include "pso/boss/TBoss5Gryphon.h"
#include "pso/misc/TLobby.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

void *TBoss5Gryphon__ct(void *, void *, void *);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
void *__nw__7TObjectFUl(int);

extern u32 boss5_gryphon_body_bml_resource;
extern u32 boss5_gryphon_bml_resource;
extern u32 boss5_gryphon_texture_list;

void TBoss5Gryphon::cleanup() {
    TLobby::free_char_select_singleton();
    TBoss5GryphonSnarl__sub_80066E84();
    TBoss8Dragon__sub_80355A1C();
    TBoss8Dragon__sub_80066A4C();
    if ((u32) boss5_gryphon_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)boss5_gryphon_texture_list);
        TAdSinglePlyChrSelectGC::safe_free(boss5_gryphon_texture_list);
        boss5_gryphon_texture_list = 0U;
    }
    if ((u32) boss5_gryphon_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)boss5_gryphon_bml_resource, 1);
        boss5_gryphon_bml_resource = 0U;
    }
    if ((u32) boss5_gryphon_body_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)boss5_gryphon_body_bml_resource, 1);
        boss5_gryphon_body_bml_resource = 0U;
    }
}

extern void *tl_04;

void *TBoss5Gryphon::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x77C);
    if (o != NULL) {
        o = TBoss5Gryphon__ct(o, tl_04, arg0);
    }
    return o;
}

}
