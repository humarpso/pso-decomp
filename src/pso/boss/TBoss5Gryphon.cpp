#include "types.h"

extern "C" {

void cleanup__13TBoss5GryphonFv(void);
void *create__13TBoss5GryphonFPv(void *arg0);
s32 TBoss5GryphonSnarl__sub_80066E84();
void *TBoss5Gryphon__ct(void *, void *, void *);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
void *__nw__7TObjectFUl(int);
s32 TBoss8Dragon__sub_80066A4C();
s32 free_char_select_singleton__6TLobbyFv();
s32 TBoss8Dragon__sub_80355A1C();
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 boss5_gryphon_body_bml_resource;
extern u32 boss5_gryphon_bml_resource;
extern u32 boss5_gryphon_texture_list;

void cleanup__13TBoss5GryphonFv(void) {
    free_char_select_singleton__6TLobbyFv();
    TBoss5GryphonSnarl__sub_80066E84();
    TBoss8Dragon__sub_80355A1C();
    TBoss8Dragon__sub_80066A4C();
    if ((u32) boss5_gryphon_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)boss5_gryphon_texture_list);
        safe_free__23TAdSinglePlyChrSelectGCFUi(boss5_gryphon_texture_list);
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

void *create__13TBoss5GryphonFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x77C);
    if (o != NULL) {
        o = TBoss5Gryphon__ct(o, tl_04, arg0);
    }
    return o;
}

}
